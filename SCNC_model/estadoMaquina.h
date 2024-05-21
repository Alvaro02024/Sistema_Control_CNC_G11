#pragma once
#include "tipoAccion.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SCNC_model {
	public ref class estadoMaquina {
	private:
		int codigo;
		String^ historial;
		int cantUsos;
		String^ estado;
		List<tipoAccion^>^ listTipoAccion;

	public:
		estadoMaquina();
		estadoMaquina(int codigo, String^ historial, int cantUsos, String^ estado, List<tipoAccion^>^ listTipoAccion);

		int getCodigo();
		void setCodigo(int codigo);
		String^ getHistorial();
		void setHistorial(String^ historial);
		int getCantUsos();
		void setCantUsos(int cantUsos);
		String^ getEstado();
		void setEstado(String^ estado);
		List<tipoAccion^>^ getListTipoAccion();
		void setListTipoAccion(List<tipoAccion^>^ listTipoAccion);
	};
}