#include "herramientaCorte.h"

using namespace SCNC_model;

herramientaCorte::herramientaCorte() {
	
}

herramientaCorte::herramientaCorte(int codigo, String^ geometria, String^ material, int longitudNominal, int velocidadCorte, int avance, tipoCorte^ objTipoCorte) {
	this->codigo = codigo;
	this->geometria = geometria;
	this->material = material;
	this->longitudNominal = longitudNominal;
	this->velocidadCorte = velocidadCorte;
	this->avance = avance;
	this->objTipoCorte = objTipoCorte;
}

int herramientaCorte::getCodigo() {
	return this->codigo;
}

void herramientaCorte::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ herramientaCorte::getGeometria() {
	return this->geometria;
}

void herramientaCorte::setGeometria(String^ geometria) {
	this->geometria = geometria;
}

String^ herramientaCorte::getMaterial() {
	return this->material;
}

void herramientaCorte::setMaterial(String^ material) {
	this->material = material;
}

int herramientaCorte::getLongitudNominal() {
	return this->longitudNominal;
}

void herramientaCorte::setLongitudNominal(int longitudNominal) {
	this->longitudNominal = longitudNominal;
}

int herramientaCorte::getVelocidadCorte() {
	return this->velocidadCorte;
}

void herramientaCorte::setVelocidadCorte(int velocidadCorte) {
	this->velocidadCorte = velocidadCorte;
}

int herramientaCorte::getAvance() {
	return this->avance;
}

void herramientaCorte::setAvance(int avance) {
	this->avance = avance;
}

tipoCorte^ herramientaCorte::getObjTipoCorte() {
	return this->objTipoCorte;
}

void herramientaCorte::setObjTipoCorte(tipoCorte^ objTipoCorte) {
	this->objTipoCorte = objTipoCorte;
}