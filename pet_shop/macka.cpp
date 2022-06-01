
#include "macka.h"


macka::macka() {
	ime = "nema";
	godine = 0;
	tezina = 0.0;
	informacije = informacija_o_macki;
}

macka::macka(std::string ime, int godine, double tezina) :zivotinje(ime, godine, tezina) {
	informacije = informacija_o_macki;
}

std::string macka::get_info() {
	return informacije;
}


std::ostream& macka::operator<<(std::ostream& o) {
	std::pair <double, std::string> tezina_macke;
	tezina_macke.first = tezina;
	tezina_macke.second = " kg";
	std::cout << " Ime macke: " << ime << " Godine macke: " << godine << " Tezina macke: " << tezina_macke.first << tezina_macke.second << std::endl;
	return o;
}