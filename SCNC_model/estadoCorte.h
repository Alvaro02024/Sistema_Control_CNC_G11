#pragma once

using namespace System;

namespace SCNC_model {
	public ref class estadoCorte {
	private:
		String^ estado;
		int tiempoInicio;
		int tiempoFin;
		int duracion;
		String^ progreso;

	public:
		estadoCorte();
		estadoCorte(String^ estado, int tiempoInicio, int tiempoFin, int duracion, String^ progreso);

		String^ getEstado();
		void setEstado(String^ estado);
		int getTiempoInicio();
		void setTiempoInicio(int tiempoInicio);
		int getTiempoFin();
		void setTiempoFin(int tiempoFin);
		int getDuracion();
		void setDuracion(int duracion);
		String^ getProgreso();
		void setProgreso(String^ progreso);

	};
}