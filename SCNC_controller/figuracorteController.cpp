#include "figuracorteController.h"
#include "lineacorteController.h"

using namespace SCNC_controller;
using namespace System::IO;

figuracorteController::figuracorteController() {

}

List<figuraCorte^>^ figuracorteController::buscarfgxAutor(String^ n_autor) {
	List<figuraCorte^>^ listaFG = gcnew List<figuraCorte^>();
	array<String^>^ lineas = File::ReadAllLines("Figuras_Predeterminadas.txt");
	String^ separadores = ";";
	for each (String ^ datoFG in lineas) {
		array<String^>^ datos = datoFG->Split(separadores->ToCharArray());
		int ID = Convert::ToInt32(datos[0]);
		String^ diseño = datos[1];
		String^ autor = datos[2];
		String^ material = datos[3];
		String^ fechaCreacion = datos[4];
		
		lineacorteController^ lc = gcnew lineacorteController();
		List<lineaCorte^>^ listLIneaCOrte = gcnew List<lineaCorte^>();
		listLIneaCOrte = lc->buscarAllLineasC();

		if (autor == n_autor) {
			figuraCorte^ objFG = gcnew figuraCorte(ID, diseño, autor, material, fechaCreacion, listLIneaCOrte);
			listaFG->Add(objFG);
		}
	}
	return(listaFG);
}

List<figuraCorte^>^  figuracorteController::buscarfgxID(int n_ID) {
	List<figuraCorte^>^ listaFG = gcnew List<figuraCorte^>();
	array<String^>^ lineas = File::ReadAllLines("Figuras_Predeterminadas.txt");
	String^ separadores = ";";
	for each (String ^ datoFG in lineas) {
		array<String^>^ datos = datoFG->Split(separadores->ToCharArray());
		int ID = Convert::ToInt32(datos[0]);
		String^ diseño = datos[1];
		String^ autor = datos[2];
		String^ material = datos[3];
		String^ fechaCreacion = datos[4];

		lineacorteController^ lc = gcnew lineacorteController();
		List<lineaCorte^>^ listLIneaCOrte = gcnew List<lineaCorte^>();
		listLIneaCOrte = lc->buscarAllLineasC();

		if (Convert::ToString(ID)->Contains(Convert::ToString(n_ID))) {
			figuraCorte^ objFG = gcnew figuraCorte(ID, diseño, autor, material, fechaCreacion, listLIneaCOrte);
			listaFG->Add(objFG);
		}
	}
	return (listaFG);
}

figuraCorte^ figuracorteController::buscarfgxID_unitario(int buscar_ID) {
	figuraCorte^ objFG;
	array<String^>^ lineas = File::ReadAllLines("Figuras_Predeterminadas.txt");
	String^ separadores = ";";
	for each (String ^ datoFG in lineas) {
		array<String^>^ datos = datoFG->Split(separadores->ToCharArray());
		int ID = Convert::ToInt32(datos[0]);
		String^ diseño = datos[1];
		String^ autor = datos[2];
		String^ material = datos[3];
		String^ fechaCreacion = datos[4];

		lineacorteController^ lc = gcnew lineacorteController();
		List<lineaCorte^>^ listLIneaCOrte = gcnew List<lineaCorte^>();
		listLIneaCOrte = lc->buscarAllLineasC();

		if (Convert::ToString(ID)->Contains(Convert::ToString(buscar_ID))) {
			objFG = gcnew figuraCorte(ID, diseño, autor, material, fechaCreacion, listLIneaCOrte);
			break;
		}
	}
	return objFG;
}


//Función que debe priorizar la busqueda de FG por autor y luego por ID
List<figuraCorte^>^ figuracorteController::buscarfgxAutorxID(String^ n_autor, int n_ID) {
	List<figuraCorte^>^ listaFG = gcnew List<figuraCorte^>();
	array<String^>^ lineas = File::ReadAllLines("Figuras_Predeterminadas.txt");
	String^ separadores = ";";
	for each (String ^ datoFG in lineas) {
		array<String^>^ datos = datoFG->Split(separadores->ToCharArray());
		int ID = Convert::ToInt32(datos[0]);
		String^ diseño = datos[1];
		String^ autor = datos[2];
		String^ material = datos[3];
		String^ fechaCreacion = datos[4];

		lineacorteController^ lc = gcnew lineacorteController();
		List<lineaCorte^>^ listLIneaCOrte = gcnew List<lineaCorte^>();
		listLIneaCOrte = lc->buscarAllLineasC();

		if (Convert::ToString(ID)->Contains(Convert::ToString(n_ID))) {
			if (autor == n_autor) {
				figuraCorte^ objFG = gcnew figuraCorte(ID, diseño, autor, material, fechaCreacion, listLIneaCOrte);
				listaFG->Add(objFG);
			}
		}
	}
	return (listaFG);
}

void figuracorteController::actualizarFiguraCorte(int e_ID, String^ e_Diseño, String^ e_Autor, String^ e_material, String^ e_Fecha) {
	List<figuraCorte^>^ listaFIGURAS = buscarfgALL();
	for(int i = 0; i < listaFIGURAS->Count; i++){
		if (listaFIGURAS[i]->getID() == e_ID) {
			listaFIGURAS[i]->setDiseño(e_Diseño);
			listaFIGURAS[i]->setAutor(e_Autor);
			listaFIGURAS[i]->setMaterial(e_material);
			listaFIGURAS[i]->setFechaCreacion(e_Fecha);
			break;
		}
	}
	escribirArchivo(listaFIGURAS);
}

void figuracorteController::escribirArchivo(List<figuraCorte^>^ lista_escribir) {
	array<String^>^ lineaArchivo = gcnew array<String^>(lista_escribir->Count);
	for (int i = 0; i < lista_escribir->Count;i++) {
		figuraCorte^ objFC = lista_escribir[i];
		lineaArchivo[i] = Convert::ToString(objFC->getID()) + ";" + objFC->getDiseño() + ";" + objFC->getAutor() + ";" + objFC->getMaterial() + ";" + objFC->getFechaCreacion();
	}
	File::WriteAllLines("Figuras_Predeterminadas.txt", lineaArchivo);
}

List<figuraCorte^>^ figuracorteController::buscarfgALL() {
	List<figuraCorte^>^ listaFG = gcnew List<figuraCorte^>();
	array<String^>^ lineas = File::ReadAllLines("Figuras_Predeterminadas.txt");
	String^ separadores = ";";
	for each (String ^ datoFG in lineas) {
		array<String^>^ datos = datoFG->Split(separadores->ToCharArray());
		int ID = Convert::ToInt32(datos[0]);
		String^ diseño = datos[1];
		String^ autor = datos[2];
		String^ material = datos[3];
		String^ fechaCreacion = datos[4];

		lineacorteController^ lc = gcnew lineacorteController();
		List<lineaCorte^>^ listLIneaCOrte = gcnew List<lineaCorte^>();
		listLIneaCOrte = lc->buscarAllLineasC();

		figuraCorte^ objFG = gcnew figuraCorte(ID, diseño, autor, material, fechaCreacion, listLIneaCOrte);
		listaFG->Add(objFG);
		
	}
	return (listaFG);
}

void figuracorteController::eliminarFC(int ID) {
	List<figuraCorte^>^ list = buscarfgALL();
	for (int i = 0; i < list->Count;i++) {
		if (list[i]->getID() == ID) {
			list->RemoveAt(i);
			break;
		}
	}
	escribirArchivo(list);
}