#include "administrador.h"

using namespace SCNC_model;

administrador::administrador() {

}

administrador::administrador(int user, String^ contraseña, String^ contacto, String^ historial_admin) {
	this->user = user;
	this->contraseña = contraseña;
	this->contacto = contacto;
	this->historial_admin = historial_admin;
}

int administrador::getUser() {
	return this->user;
}
void administrador::setUser(int user) {
	this->user = user;
}
String^ administrador::getContraseña() {
	return this->contraseña;
}
void administrador::setContraseña(String^ contraseña) {
	this->contraseña = contraseña;
}
String^ administrador::getContacto() {
	return this->contacto;
}
void administrador::setContacto(String^ contacto) {
	this->contacto = contacto;
}
String^ administrador::getHistorial_admin() {
	return this->historial_admin;
}
void administrador::setHistorial_admin(String^ historial_admin) {
	this->historial_admin = historial_admin;
}

