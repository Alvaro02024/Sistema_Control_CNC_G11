#pragma once

using namespace System;

namespace SCNC_model {

	public ref class administrador {
	private:
		int user;
		String^ contrase�a;
		String^ contacto;
		String^ historial_admin;

	public:
		administrador();
		administrador(int user, String^ contrase�a, String^ contacto, String^ historial_admin);

		int getUser();
		void setUser(int user);
		String^ getContrase�a();
		void setContrase�a(String^ contrase�a);
		String^ getContacto();
		void setContacto(String^ contacto);
		String^ getHistorial_admin();
		void setHistorial_admin(String^ historial_admin);

	};
};
