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