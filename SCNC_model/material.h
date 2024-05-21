#pragma once
#include "tipoCorte.h"

using namespace System;
using namespace System::Collections::Generic;

namespace SCNC_model {
	public ref class material {
	private:
		int codigo;
		String^ nombreMaterial;
		int dimensionesMax;
		String^ dureza;
		int revHusillo;
		List<tipoCorte^>^ listTipoCorte;

	public:
		material();
		material(int codigo, String^ nombreMaterial, int dimensionesMax, String^ dureza, int revHusillo, List<tipoCorte^>^ listTipoCorte);

		int getCodigo();
		void setCodigo(int codigo);
		String^ getNombreMaterial();
		void setNombreMaterial(String^ nombreMaterial);
		int getDimensionesMax();
		void setDimensionesMax(int dimensionesMax);
		String^ getDureza();
		void setDureza(String^ dureza);
		int getRevHusillo();
		void setRevHusillo(int revHusillo);
		List<tipoCorte^>^ getListTipoCorte();
		void setListTipoCorte(List<tipoCorte^>^ listTipoCorte);
	};
}