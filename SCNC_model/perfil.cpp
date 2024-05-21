#include "perfil.h"

using namespace SCNC_model;

perfil::perfil() {
	
}

perfil::perfil(int user, String^ contraseña, int diasRestante, String^ contacto, String^ savedPlantillas, String^ historial, licencia^ objLicencia) {
	this->user = user;
	this->contraseña = contraseña;
	this->diasRestante = diasRestante;
	this->contacto = contacto;
	this->savedPlantillas = savedPlantillas;
	this->historial = historial;
	this->objLicencia = objLicencia;
}

int perfil::getUser() {
	return this->user;
}

void perfil::setUser(int user) {
	this->user = user;
}

String^ perfil::getContraseña() {
	return this->contraseña;
}

void perfil::setContraseña(String^ contraseña) {
	this->contraseña = contraseña;
}

int perfil::getDiasRestante() {
	return this->diasRestante;
}

void perfil::setDiasRestante(int diasRestante) {
	this->diasRestante = diasRestante;
}

String^ perfil::getContacto() {
	return this->contacto;
}

void perfil::setContacto(String^ contacto) {
	this->contacto = contacto;
}

String^ perfil::getSavedPlantillas() {
	return this->savedPlantillas;
}

void perfil::setSavedPlantillas(String^ savedPlantillas) {
	this->savedPlantillas = savedPlantillas;
}

String^ perfil::getHistorial() {
	return this->historial;
}

void perfil::setHistorial(String^ historial) {
	this->historial = historial;
}

licencia^ perfil::getLicencia() {
	return this->objLicencia;
}
void perfil::setLicencia(licencia^ objLicencia) {
	this->objLicencia = objLicencia;
}