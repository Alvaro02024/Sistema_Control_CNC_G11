#pragma once
#include "estadoCorte.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SCNC_model {
	public ref class posicion {
	private:
		double coordenadaIX;
		double coordenadaIY;
		double coordenadaIZ;
		double coordenadaFX;
		double coordenadaFY;
		double coordenadaFZ;
		List<estadoCorte^>^ listEstadoCorte;

	public:
		posicion();
		posicion(double coordenadaIX, double coordenadaIY, double coordenadaIZ, double coordenadaFX, double coordenadaFY, double coordenadaFZ, List<estadoCorte^>^ listEstadoCorte);

		double getCoordenadaIX();
		void setCoordenadaIX(double coordenadaIX);
		double getCoordenadaIY();
		void setCoordenadaIY(double coordenadaIY);
		double getCoordenadaIZ();
		void setCoordenadaIZ(double coordenadaIZ);
		double getCoordenadaFX();
		void setCoordenadaFX(double coordenadaFX);
		double getCoordenadaFY();
		void setCoordenadaFY(double coordenadaFY);
		double getCoordenadaFZ();
		void setCoordenadaFZ(double coordenadaFZ);
		List<estadoCorte^>^ getListEstadoCorte();
		void setListEstadoCorte(List<estadoCorte^>^ listEstadoCorte);
	};
}