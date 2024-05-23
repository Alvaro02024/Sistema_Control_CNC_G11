#include "posicion.h"

using namespace SCNC_model;

posicion::posicion() {
	
}

posicion::posicion(double coordenadaIX, double coordenadaIY, double coordenadaIZ, double coordenadaFX, double coordenadaFY, double coordenadaFZ) {
	this->coordenadaIX = coordenadaIX;
	this->coordenadaIY = coordenadaIY;
	this->coordenadaIZ = coordenadaIZ;
	this->coordenadaFX = coordenadaFX;
	this->coordenadaFY = coordenadaFY;
	this->coordenadaFZ = coordenadaFZ;
	
}

double posicion::getCoordenadaIX() {
	return this->coordenadaIX;
}

void posicion::setCoordenadaIX(double coordenadaIX) {
	this->coordenadaIX = coordenadaIX;
}

double posicion::getCoordenadaIY() {
	return this->coordenadaIY;
}

void posicion::setCoordenadaIY(double coordenadaIY) {
	this->coordenadaIY = coordenadaIY;
}

double posicion::getCoordenadaIZ() {
	return this->coordenadaIZ;
}

void posicion::setCoordenadaIZ(double coordenadaIZ) {
	this->coordenadaIZ = coordenadaIZ;
}

double posicion::getCoordenadaFX() {
	return this->coordenadaFX;
}

void posicion::setCoordenadaFX(double coordenadaFX) {
	this->coordenadaFX = coordenadaFX;
}

double posicion::getCoordenadaFY() {
	return this->coordenadaFY;
}

void posicion::setCoordenadaFY(double coordenadaFY) {
	this->coordenadaFY = coordenadaFY;
}

double posicion::getCoordenadaFZ() {
	return this->coordenadaFZ;
}

void posicion::setCoordenadaFZ(double coordenadaFZ) {
	this->coordenadaFZ = coordenadaFZ;
}



