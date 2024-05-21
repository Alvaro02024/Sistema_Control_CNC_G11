#include "tipoAccion.h"

using namespace SCNC_model;

tipoAccion::tipoAccion() {

}

tipoAccion::tipoAccion(int codigo, String^ seleccion, administrador^ objAdministrador) {
	this->codigo = codigo;
	this->seleccion = seleccion;
	this->objAdministrador = objAdministrador;
}

int tipoAccion::getCodigo() {
	return this->codigo;
}

void tipoAccion::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ tipoAccion::getSeleccion() {
	return this->seleccion;
}

void tipoAccion::setSeleccion(String^ seleccion) {
	this->seleccion = seleccion;
}

administrador^ tipoAccion::getObjAdministrador() {
	return this->objAdministrador;
}

void tipoAccion::setObjAdministrador(administrador^ objAdministrador) {
	this->objAdministrador = objAdministrador;
}