#include "administradorController.h"

using namespace SCNC_controller;
using namespace System::IO;

administradorController::administradorController() {

}

int administradorController::verificarAdmin(String^ a_user, String^ a_cont) {
	int confirmar = 0;
	array<String^>^ linea = File::ReadAllLines("admin_cuenta.txt");
	String^ separador = ";";
	for each (String ^ administrador in linea) {
		array<String^>^ datos = administrador->Split(separador->ToCharArray());
		int user = Convert::ToInt32(datos[0]);
		String^ contraseña = datos[1];
		
		if ((Convert::ToInt32(a_user) == Convert::ToInt32(user)) && (a_cont == contraseña)) {
			confirmar = 1;
		}
	}
	return(confirmar);
	
}
