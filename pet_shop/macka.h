
#include "zivotnje.h" 
#include <iostream>
const std::string informacija_o_macki = "Macka, takodje zvana i domaca macka ili kucna macka (lat. Felis catus), mali je mesozder, vrsta sisara (Mammalia) iz roda Felis.";

class macka :public zivotinje
{
protected:
	std::string informacije;
public: 
	macka();
	macka(std::string, int, double);
	std::string get_info();
	std::ostream& operator<<(std::ostream& o);
};
