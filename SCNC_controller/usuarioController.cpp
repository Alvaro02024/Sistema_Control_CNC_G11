#include "usuarioController.h"

using namespace SCNC_controller;
using namespace System::Collections::Generic;
using namespace System::IO;

usuarioController::usuarioController() {

}

int usuarioController::verificarUser(String^ u_user, String^ u_cont) {
	int confirmar;
	array<String^>^ linea = File::ReadAllLines("user_cuentas.txt");
	String^ separador = ";";
	for each (String ^ usuario in linea) {
		array<String^>^ datos = usuario->Split(separador->ToCharArray());
		int user = Convert::ToInt32(datos[0]);
		String^ contraseña = datos[1];

		if ((Convert::ToInt32(u_user) == Convert::ToInt32(user)) && (u_cont == contraseña)) {
			confirmar = 1;
		}
	}
	return(confirmar);
}
