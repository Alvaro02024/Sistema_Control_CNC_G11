#pragma once
#include "licencia.h"

using namespace System;

namespace SCNC_model {
	public ref class perfil {
	private:
		int user;
		String^ contraseña;
		int diasRestante;
		String^ contacto;
		String^ savedPlantillas;
		String^ historial;
		licencia^ objLicencia;

	public:
		perfil();
		perfil(int user, String^ contraseña, int diasRestante, String^ contacto, String^ savedPlantillas, String^ historial, licencia^ objLicencia);

		int getUser();
		void setUser(int user);
		String^ getContraseña();
		void setContraseña(String^ contraseña);
		int getDiasRestante();
		void setDiasRestante(int diasRestante);
		String^ getContacto();
		void setContacto(String^ contacto);
		String^ getSavedPlantillas();
		void setSavedPlantillas(String^ savedPlantillas);
		String^ getHistorial();
		void setHistorial(String^ historial);
		licencia^ getLicencia();
		void setLicencia(licencia^ objLicencia);
	};

}
