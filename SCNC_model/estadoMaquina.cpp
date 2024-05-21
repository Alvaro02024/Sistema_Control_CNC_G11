#include "estadoMaquina.h"

using namespace SCNC_model;

estadoMaquina::estadoMaquina() {
	
}

estadoMaquina::estadoMaquina(int codigo, String^ historial, int cantUsos, String^ estado, List<tipoAccion^>^ listTipoAccion) {
	this->codigo = codigo;
	this->historial = historial;
	this->cantUsos = cantUsos;
	this->estado = estado;
	this->listTipoAccion = listTipoAccion;
}

int estadoMaquina::getCodigo() {
	return this->codigo;
}

void estadoMaquina::setCodigo(int codigo) {
	this->codigo = codigo;
}

String^ estadoMaquina::getHistorial() {
	return this->historial;
}

void estadoMaquina::setHistorial(String^ historial) {
	this->historial = historial;
}

int estadoMaquina::getCantUsos() {
	return this->cantUsos;
}

void estadoMaquina::setCantUsos(int cantUsos) {
	this->cantUsos = cantUsos;
}

String^ estadoMaquina::getEstado() {
	return this->estado;
}

void estadoMaquina::setEstado(String^ estado) {
	this->estado = estado;
}

List<tipoAccion^>^ estadoMaquina::getListTipoAccion() {
	return this->listTipoAccion;
}

void estadoMaquina::setListTipoAccion(List<tipoAccion^>^ listTipoAccion) {
	this->listTipoAccion = listTipoAccion;
}