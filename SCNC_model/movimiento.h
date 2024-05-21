#pragma once
#include "tipoCorte.h"

using namespace System;

namespace SCNC_model {
	public ref class movimiento {
	private:
		int numero;
		int tiempo;
		double coordenadaIX;
		double coordenadaIY;
		double coordenadaIZ;
		double coordenadaFX;
		double coordenadaFY;
		double coordenadaFZ;
		tipoCorte^ objTipoCorte;

	public:
		movimiento();
		movimiento(int numero, int tiempo, double coordenadaIX, double coordenadaIY, double coordenadaIZ, double coordenadaFX, double coordenadaFY, double coordenadaFZ, tipoCorte^ objTipoCorte);

		int getNumero();
		void setNumero(int numero);
		int getTiempo();
		void setTiempo(int tiempo);
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
		tipoCorte^ getObjTipoCorte();
		void setObjTipoCorte(tipoCorte^ objTipoCorte);

	};
}
