#pragma once
#include "administrador.h"

using namespace System;

namespace SCNC_model {
	public ref class tipoAccion {
	private:
		int codigo;
		String^ seleccion;
		administrador^ objAdministrador;

	public:
		tipoAccion();
		tipoAccion(int codigo, String^ seleccion, administrador^ objAdministrador);

		int getCodigo();
		void setCodigo(int codigo);
		String^ getSeleccion();
		void setSeleccion(String^ seleccion);
		administrador^ getObjAdministrador();
		void setObjAdministrador(administrador^ objAdministrador);
	};
}