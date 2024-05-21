#include "figuraCorte.h"

using namespace SCNC_model;

figuraCorte::figuraCorte() {
	
}

figuraCorte::figuraCorte(int ID, String^ diseño, String^ autor, String^ material, String^ fechaCreacion, List<lineaCorte^>^ listLineaCorte) {
	this->ID = ID;
	this->diseño = diseño;
	this->autor = autor;
	this->material = material;
	this->fechaCreacion = fechaCreacion;
	this->listLineaCorte = listLineaCorte;
}

int figuraCorte::getID() {
	return this->ID;
}

void figuraCorte::setID(int ID) {
	this->ID = ID;
}

String^ figuraCorte::getDiseño() {
	return this->diseño;
}

void figuraCorte::setDiseño(String^ diseño) {
	this->diseño = diseño;
}

String^ figuraCorte::getAutor() {
	return this->autor;
}

void figuraCorte::setAutor(String^ autor) {
	this->autor = autor;
}

String^ figuraCorte::getMaterial() {
	return this->material;
}

void figuraCorte::setMaterial(String^ material) {
	this->material = material;
}

String^ figuraCorte::getFechaCreacion() {
	return this->fechaCreacion;
}

void figuraCorte::setFechaCreacion(String^ fechaCreacion) {
	this->fechaCreacion = fechaCreacion;
}

List<lineaCorte^>^ figuraCorte::getListLineaCorte() {
	return this->listLineaCorte;
}

void figuraCorte::setListLineaCorte(List<lineaCorte^>^ listLineaCorte) {
	this->listLineaCorte = listLineaCorte;
}