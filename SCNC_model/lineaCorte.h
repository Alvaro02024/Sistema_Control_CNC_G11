#pragma once
#include "posicion.h"

using namespace System;

namespace SCNC_model {
	public ref class lineaCorte {
	private:
		double coordenadaInicial;
		double coordenadaFinal;
		posicion^ objPosicion;

	public:
		lineaCorte();
		lineaCorte(double coordenadaInicial, double coordenadaFinal, posicion^ objPosicion);

		double getCoordenadaInicial();
		void setCoordenadaInicial(double coordenadaInicial);
		double getCoordenadaFinal();
		void setCoordenadaFinal(double coordenadaFinal);
		posicion^ getObjPosicion();
		void setObjPosicion(posicion^ objPosicion);
	};
}
