#include "licenciaController.h"

using namespace SCNC_controller;
using namespace System;
using namespace System::IO;

licenciaController::licenciaController() {

}

List<licencia^>^ licenciaController::buscarLicencias() {
	List<licencia^>^ listaLicencias = gcnew List<licencia^>();
	array<String^>^ lineas = File::ReadAllLines("user_licencias.txt");
	String^ separador = ";";
	for each (String^ licencia in lineas) {
		array<String^>^ datos = licencia->Split(separador->ToCharArray());
		int codigo = Convert::ToInt32(datos[0]);
		String^ tipo = datos[1];
		String^ numUsuarios = datos[2];
		String^ fechaCompra = datos[3];
		String^ fechaVencimiento = datos[4];
	}
	return(listaLicencias);
}

int licenciaController::diasRestantesLicencia(licencia^ objLicencia) {
	String^ fFinal = objLicencia->getFechaVencimiento();
	
	//Declaracion del día actual
	DateTime fechaActual = DateTime::Now;

	//Lectura de la fecha de vencimiento
	DateTime fechaVencimiento;
	array<String^>^ formatos = { "dd/MM/yyyy" };
	DateTime::TryParseExact(fFinal, formatos, System::Globalization::CultureInfo::InvariantCulture, System::Globalization::DateTimeStyles::None, fechaVencimiento);
	
	TimeSpan diferencia = fechaVencimiento.Subtract(fechaActual);
	int diasRestantes = diferencia.Days;
		
	return (diasRestantes);
}
