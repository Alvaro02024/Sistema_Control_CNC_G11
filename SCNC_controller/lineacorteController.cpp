#include "lineacorteController.h"
#include "posicionController.h"

using namespace SCNC_controller;
using namespace System::IO;

lineacorteController::lineacorteController() {

}

List<lineaCorte^>^ lineacorteController::buscarAllLineasC() {
	List<lineaCorte^>^ listaCorte = gcnew List<lineaCorte^>();

	posicionController^ pc = gcnew posicionController();
	List<posicion^>^ listaPosiciones = gcnew List<posicion^>();
	listaPosiciones = pc->buscarAllPosiciones();
	
	int i = 0;
	while ( i < listaPosiciones->Count) {
		listaCorte->Add(determinarLinea(listaPosiciones[i]));
		i++;
	}
	return(listaCorte);
}

lineaCorte^ lineacorteController::determinarLinea(posicion^ objPosicion) {
	lineaCorte^ objLineaCorte = gcnew lineaCorte();
	double x0 = objPosicion->getCoordenadaIX();
	double y0 = objPosicion->getCoordenadaIY();
	double z0 = objPosicion->getCoordenadaIZ();
	double x = objPosicion->getCoordenadaFX();
	double y = objPosicion->getCoordenadaFY();
	double z = objPosicion->getCoordenadaFZ();

	double PosI = (z0*10000) + (y0*100) + z0;
	double PosF = (z*10000) + (y*100) + z;

	objLineaCorte->setCoordenadaInicial(PosI);
	objLineaCorte->setCoordenadaFinal(PosF);

	return (objLineaCorte);
}