#pragma once

using namespace System;

namespace SCNC_model {
	public ref class tipoCorte {
	private:
		int codigo;
		String^ tipo;
		double posicionHusillo;
		int offset;

	public:
		tipoCorte();
		tipoCorte(int codigo, String^ tipo, double posicionHusillo, int offset);

		int getCodigo();
		void setCodigo(int codigo);
		String^ getTipo();
		void setTipo(String^ tipo);
		double getPosicionHusillo();
		void setPosicionHusillo(double posicionHusillo);
		int getOffset();
		void setOffset(int offset);
	};
}
