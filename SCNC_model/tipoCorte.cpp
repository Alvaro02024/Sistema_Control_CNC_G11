#include "tipoCorte.h"

using namespace SCNC_model;

tipoCorte::tipoCorte() {
	
}

tipoCorte::tipoCorte(int codigo, String^ tipo, double posicionHusillo, int offset) {
	this->codigo = codigo;
	this->tipo = tipo;
	this->posicionHusillo = posicionHusillo;
	this->offset = offset;
}

int tipoCorte::getCodigo() {
	return this->codigo;
}

void tipoCorte::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ tipoCorte::getTipo() {
	return this->tipo;
}

void tipoCorte::setTipo(String^ tipo) {
	this->tipo = tipo;
}

double tipoCorte::getPosicionHusillo() {
	return this->posicionHusillo;
}

void tipoCorte::setPosicionHusillo(double posicionHusillo) {
	this->posicionHusillo = posicionHusillo;
}

int tipoCorte::getOffset() {
	return this->offset;
}

void tipoCorte::setOffset(int offset) {
	this->offset = offset;
}