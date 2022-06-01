#pragma once
#include "zivotnje.h"
#include <iostream>
const std::string informacija_o_psu = "Pas, takodje poznat i kao domaci pas (lat. Canis lupus familiaris), je dodeljen sisar (Mammalia) iz porodice pasa (Canidae)";

class pas :	public zivotinje
{
protected: 
	std::string informacije;
public:  
	pas();
	pas(std::string, int, double); 
	std::string get_info();  
	std::ostream& operator<<(std::ostream& o);
};

