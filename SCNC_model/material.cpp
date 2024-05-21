#include "material.h"

using namespace SCNC_model;

material::material() {
	
}

material::material(int codigo, String^ nombreMaterial, int dimensionesMax, String^ dureza, int revHusillo, List<tipoCorte^>^ listTipoCorte) {
	this->codigo = codigo;
	this->nombreMaterial = nombreMaterial;
	this->dimensionesMax = dimensionesMax;
	this->dureza = dureza;
	this->revHusillo = revHusillo;
	this->listTipoCorte = listTipoCorte;
}

int material::getCodigo() {
	return this->codigo;
}

void material::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ material::getNombreMaterial() {
	return this->nombreMaterial;
}

void material::setNombreMaterial(String^ nombreMaterial) {
	this->nombreMaterial = nombreMaterial;
}

int material::getDimensionesMax() {
	return this->dimensionesMax;
}

void material::setDimensionesMax(int dimensionesMax) {
	this->dimensionesMax = dimensionesMax;
}

String^ material::getDureza() {
	return this->dureza;
}

void material::setDureza(String^ dureza) {
	this->dureza = dureza;
}

int material::getRevHusillo() {
	return this->revHusillo;
}

void material::setRevHusillo(int revHusillo) {
	this->revHusillo = revHusillo;
}

List<tipoCorte^>^ material::getListTipoCorte() {
	return this->listTipoCorte;
}

void material::setListTipoCorte(List<tipoCorte^>^ listTipoCorte) {
	this->listTipoCorte = listTipoCorte;
}