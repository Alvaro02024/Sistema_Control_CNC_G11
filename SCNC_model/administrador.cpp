#include "administrador.h"

using namespace SCNC_model;

administrador::administrador() {

}

administrador::administrador(int user, String^ contrase�a, String^ contacto, String^ historial_admin) {
	this->user = user;
	this->contrase�a = contrase�a;
	this->contacto = contacto;
	this->historial_admin = historial_admin;
}

int administrador::getUser() {
	return this->user;
}
void administrador::setUser(int user) {
	this->user = user;
}
String^ administrador::getContrase�a() {
	return this->contrase�a;
}
void administrador::setContrase�a(String^ contrase�a) {
	this->contrase�a = contrase�a;
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

