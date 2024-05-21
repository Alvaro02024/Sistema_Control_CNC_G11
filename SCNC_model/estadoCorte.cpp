#include "estadoCorte.h"

using namespace SCNC_model;

estadoCorte::estadoCorte() {
	
}

estadoCorte::estadoCorte(String^ estado, int tiempoInicio, int tiempoFin, int duracion, String^ progreso) {
	this->estado = estado;
	this->tiempoInicio = tiempoInicio;
	this->tiempoFin = tiempoFin;
	this->duracion = duracion;
	this->progreso = progreso;
}

String^ estadoCorte::getEstado() {
	return this->estado;
}

void estadoCorte::setEstado(String^ estado) {
	this->estado = estado;
}

int estadoCorte::getTiempoInicio() {
	return this->tiempoInicio;
}

void estadoCorte::setTiempoInicio(int tiempoInicio) {
	this->tiempoInicio = tiempoInicio;
}

int estadoCorte::getTiempoFin() {
	return this->tiempoFin;
}

void estadoCorte::setTiempoFin(int tiempoFin) {
	this->tiempoFin = tiempoFin;
}

int estadoCorte::getDuracion() {
	return this->duracion;
}

void estadoCorte::setDuracion(int duracion) {
	this->duracion = duracion;
}

String^ estadoCorte::getProgreso() {
	return this->progreso;
}

void estadoCorte::setProgreso(String^ progreso) {
	this->progreso = progreso;
}