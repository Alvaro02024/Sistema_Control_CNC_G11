#include "posicionController.h"

using namespace SCNC_controller;
using namespace System::IO;

posicionController::posicionController() {

}

List<posicion^>^ posicionController::buscarAllPosiciones() {
	List<posicion^>^ listaPosiciones = gcnew List<posicion^>();
	array<String^>^ lineas = File::ReadAllLines("Posiciones.txt");
	String^ separadores = ";";
	for each (String ^ lineaPosicion in lineas) {
		array<String^>^ datos = lineaPosicion->Split(separadores->ToCharArray());
		double x = Convert::ToDouble(datos[0]);
		double y = Convert::ToDouble(datos[1]);
		double z = Convert::ToDouble(datos[2]);
		double rx = Convert::ToDouble(datos[3]);
		double ry = Convert::ToDouble(datos[4]);
		double rz = Convert::ToDouble(datos[5]);

		posicion^ objPosicion = gcnew posicion(x, y, z, rx, ry,rz);
		listaPosiciones->Add(objPosicion);
	}
	return(listaPosiciones);
}