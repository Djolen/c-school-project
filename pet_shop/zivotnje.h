#pragma once 
#include <string>
class zivotinje
{
protected:  
	std::string ime; 
	int godine; 
	double tezina;
public:  
	zivotinje();
	zivotinje(std::string, int, double); 
	std::string get_ime();
	int get_godine();
	void set_godine(int);
	double get_tezina();
	void set_tezina(double);

};

