#pragma once
#include "tipoCorte.h"

using namespace System;

namespace SCNC_model {
	public ref class herramientaCorte {
	private:
		int codigo;
		String^ geometria;
		String^ material;
		int longitudNominal;
		int velocidadCorte;
		int avance;
		tipoCorte^ objTipoCorte;

	public:
		herramientaCorte();
		herramientaCorte(int codigo, String^ geometria, String^ material, int longitudNominal, int velocidadCorte, int avance, tipoCorte^ objTipoCorte);


		int getCodigo();
		void setCodigo(int codigo);
		String^ getGeometria();
		void setGeometria(String^ geometria);
		String^ getMaterial();
		void setMaterial(String^ material);
		int getLongitudNominal();
		void setLongitudNominal(int longitudNominal);
		int getVelocidadCorte();
		void setVelocidadCorte(int velocidadCorte);
		int getAvance();
		void setAvance(int avance);
		tipoCorte^ getObjTipoCorte();
		void setObjTipoCorte(tipoCorte^ objTipoCorte);
	};
}
