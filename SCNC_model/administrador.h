#pragma once

using namespace System;

namespace SCNC_model {

	public ref class administrador {
	private:
		int user;
		String^ contraseña;
		String^ contacto;
		String^ historial_admin;

	public:
		administrador();
		administrador(int user, String^ contraseña, String^ contacto, String^ historial_admin);

		int getUser();
		void setUser(int user);
		String^ getContraseña();
		void setContraseña(String^ contraseña);
		String^ getContacto();
		void setContacto(String^ contacto);
		String^ getHistorial_admin();
		void setHistorial_admin(String^ historial_admin);

	};
};
