#include "pas.h"
#include "zivotnje.h" 

pas::pas(){
	ime = "nema";
	godine = 0;
	tezina = 0.0;
	informacije = informacija_o_psu;
}

pas::pas(std::string ime, int godine, double tezina):zivotinje(ime,godine,tezina){
	informacije = informacija_o_psu;
} 

std::string pas::get_info() {
	return informacije;
} 

std::ostream& pas::operator<<(std::ostream& o) {
	std::pair <double, std::string> tezina_psa;
	tezina_psa.first = tezina;
	tezina_psa.second = " kg";
	std::cout << " Ime psa: " << ime << " Godine psa: " << godine << " Tezina psa: " << tezina_psa.first << tezina_psa.second << std::endl;
	return o;
}