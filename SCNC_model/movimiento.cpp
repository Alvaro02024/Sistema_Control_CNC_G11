#include "movimiento.h"

using namespace SCNC_model;

movimiento::movimiento() {
	
}

movimiento::movimiento(int numero, int tiempo, double coordenadaIX, double coordenadaIY, double coordenadaIZ, double coordenadaFX, double coordenadaFY, double coordenadaFZ, tipoCorte^ objTipoCorte) {
	this->numero = numero;
	this->tiempo = tiempo;
	this->coordenadaIX = coordenadaIX;
	this->coordenadaIY = coordenadaIY;
	this->coordenadaIZ = coordenadaIZ;
	this->coordenadaFX = coordenadaFX;
	this->coordenadaFY = coordenadaFY;
	this->coordenadaFZ = coordenadaFZ;
	this->objTipoCorte = objTipoCorte;
}

int movimiento::getNumero() {
	return this->numero;
}

void movimiento::setNumero(int numero) {
	this->numero = numero;
}

int movimiento::getTiempo() {
	return this->tiempo;
}

void movimiento::setTiempo(int tiempo) {
	this->tiempo = tiempo;
}

double movimiento::getCoordenadaIX() {
	return this->coordenadaIX;
}

void movimiento::setCoordenadaIX(double coordenadaIX) {
	this->coordenadaIX = coordenadaIX;
}

double movimiento::getCoordenadaIY() {
	return this->coordenadaIY;
}

void movimiento::setCoordenadaIY(double coordenadaIY) {
	this->coordenadaIY = coordenadaIY;
}

double movimiento::getCoordenadaIZ() {
	return this->coordenadaIZ;
}

void movimiento::setCoordenadaIZ(double coordenadaIZ) {
	this->coordenadaIZ = coordenadaIZ;
}

double movimiento::getCoordenadaFX() {
	return this->coordenadaFX;
}

void movimiento::setCoordenadaFX(double coordenadaFX) {
	this->coordenadaFX = coordenadaFX;
}

double movimiento::getCoordenadaFY() {
	return this->coordenadaFY;
}

void movimiento::setCoordenadaFY(double coordenadaFY) {
	this->coordenadaFY = coordenadaFY;
}

double movimiento::getCoordenadaFZ() {
	return this->coordenadaFZ;
}

void movimiento::setCoordenadaFZ(double coordenadaFZ) {
	this->coordenadaFZ = coordenadaFZ;
}

tipoCorte^ movimiento::getObjTipoCorte() {
	return this->objTipoCorte;
}

void movimiento::setObjTipoCorte(tipoCorte^ objTipoCorte) {
	this->objTipoCorte = objTipoCorte;
}