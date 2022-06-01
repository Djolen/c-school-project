#include "zivotnje.h"

zivotinje::zivotinje() {
	ime = "nema"; 
	godine = 0;
	tezina = 0.0;
}
zivotinje::zivotinje(std::string ime , int godine , double tezina) {
	this->ime = ime; 
	this->godine = godine;
	this->tezina = tezina;
}

std::string zivotinje::get_ime() {
	return ime;
}

int zivotinje::get_godine() {
	return godine;
}
void zivotinje::set_godine(int g) {
	godine = g;
}
double zivotinje::get_tezina() {
	return tezina;
}
void zivotinje::set_tezina(double t) {
	tezina = t;
}
