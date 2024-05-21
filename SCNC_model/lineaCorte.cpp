#include "lineaCorte.h"

using namespace SCNC_model;

lineaCorte::lineaCorte() {
	
}

lineaCorte::lineaCorte(double coordenadaInicial, double coordenadaFinal, posicion^ objPosicion) {
	this->coordenadaInicial = coordenadaInicial;
	this->coordenadaFinal = coordenadaFinal;
	this->objPosicion = objPosicion;
}

double lineaCorte::getCoordenadaInicial() {
	return this->coordenadaInicial;
}

void lineaCorte::setCoordenadaInicial(double coordenadaInicial) {
	this->coordenadaInicial = coordenadaInicial;
}

double lineaCorte::getCoordenadaFinal() {
	return this->coordenadaFinal;
}

void lineaCorte::setCoordenadaFinal(double coordenadaFinal) {
	this->coordenadaFinal = coordenadaFinal;
}

posicion^ lineaCorte::getObjPosicion() {
	return this->objPosicion;
}

void lineaCorte::setObjPosicion(posicion^ objPosicion) {
	this->objPosicion = objPosicion;
}