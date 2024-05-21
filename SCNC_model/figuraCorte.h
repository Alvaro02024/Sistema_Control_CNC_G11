#pragma once
#include "lineaCorte.h"

using namespace System;

namespace SCNC_model {
	public ref class figuraCorte {
	private:
		int ID;
		String^ dise�o;
		String^ autor;
		String^ material;
		String^ fechaCreacion;
		List<lineaCorte^>^ listLineaCorte;

	public:
		figuraCorte();
		figuraCorte(int ID, String^ dise�o, String^ autor, String^ material, String^ fechaCreacion, List<lineaCorte^>^ listLineaCorte);

		int getID();
		void setID(int ID);
		String^ getDise�o();
		void setDise�o(String^ dise�o);
		String^ getAutor();
		void setAutor(String^ autor);
		String^ getMaterial();
		void setMaterial(String^ material);
		String^ getFechaCreacion();
		void setFechaCreacion(String^ fechaCreacion);
		List<lineaCorte^>^ getListLineaCorte();
		void setListLineaCorte(List<lineaCorte^>^ listLineaCorte);
	};
}
