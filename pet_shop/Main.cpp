#include <iostream>   
#include <vector> 
#include <string> 
#include <stack> 
#include <queue> 
#include <fstream> 
#include <stdlib.h>
#include "pas.h" 
#include "zivotnje.h" 
#include "macka.h"
using namespace std; 


template <typename T, typename Broj, typename Niz>
T ispis(Broj x, Niz y) {

	for (int i = 0; i < x; i++) {
		y[i] << cout;
	}

}

int funkcija(const void* a, const void* b) {
	return static_cast<int>((*(pas*)a).get_tezina() - (*(pas*)b).get_tezina());
}





int main() {
	cout << "Unesite koliko pasa imate: " << endl;
	int br_pasa;
	cin >> br_pasa; 
	cout << "Unesite koliko macaka imate: " << endl;
	int br_maca;
	cin >> br_maca;
	pas *psi = new pas[br_pasa]; 
	macka* macke = new macka[br_maca]; 
	stack<pas> psi_stack; 
	queue<macka> macka_queue;
	fstream macke_fajl; 
	fstream psi_fajl;
	macke_fajl.open("macke.txt", fstream::app);
	if (!macke_fajl) {
		cerr << "Neuspesno otvaranje datoteke";
		exit(1);
	} 

	psi_fajl.open("psi.txt", fstream::app);
	if (!psi_fajl) {
		cerr << "Neuspesno otvaranje datoteke";
		exit(1);
	}
	pocetak:
	cout << "Unesite opciju koju zelite" << endl;
	cout << "1. Unesite vase pse " << endl;
	cout << "2. Da pogledate sve pse:" << endl; 
	cout << "3. Unesite vase macke " << endl;
	cout << "4. Da pogledate sve macke:" << endl; 
	cout << "5. Poslednje uneti pas:" << endl; 
	cout << "6. Poslednje uneta macka:" << endl;
	cout << "7. Informacije o vrstama koje imamo" << endl;
	int opcija;
	cin >> opcija;
	
	

	switch (opcija) {
	case 1: {
		
		
		
		for (int i = 0; i < br_pasa; i++) {
			cout << "Unesite ime psa: " << endl;
			string ime_psa;
			cin.ignore();
			getline(cin, ime_psa);
			cout << "Unesite godine psa: " << endl;
			int godine_psa;
			cin >> godine_psa;
			cout << "Unesite tezinu psa: " << endl;
			double tezina_psa;
			cin >> tezina_psa;
			psi[i] = pas(ime_psa, godine_psa, tezina_psa);
			psi_stack.push(pas(ime_psa, godine_psa, tezina_psa)); 
			psi_fajl << "Ime psa: " << ime_psa << " Godine psa: " << godine_psa << " Tezina psa: " << tezina_psa << endl;
		} 
		//qsort(psi, br_pasa, sizeof(psi), funkcija);
		goto pocetak;
	}
	case 2: {
		
		ispis<void>(br_pasa,psi);

		goto pocetak;
	} 

	case 3: {



		for (int i = 0; i < br_maca; i++) {
			cout << "Unesite ime macke: " << endl;
			string ime_macke;
			cin.ignore();
			getline(cin, ime_macke);
			cout << "Unesite godine macke: " << endl;
			int godine_macke;
			cin >> godine_macke;
			cout << "Unesite tezinu macke: " << endl;
			double tezina_macke;
			cin >> tezina_macke;
			macke[i] = macka(ime_macke, godine_macke, tezina_macke);
			macka_queue.push(macka(ime_macke, godine_macke, tezina_macke)); 
			macke_fajl << "Ime macke: " << ime_macke << " Godine macke: " << godine_macke << " Tezina macke: " << tezina_macke << endl;
		}

		goto pocetak;
	}

	case 4: {
		
		ispis<void>(br_maca, macke);
		goto pocetak;
	}
	case 5: {
		cout << "<------------------------------------->" << endl;
		cout << ". Ime psa: " << psi_stack.top().get_ime() << " Godine psa: " << psi_stack.top().get_godine() << " Tezina psa: " << psi_stack.top().get_tezina() << endl; 
		cout << "<------------------------------------->" << endl;
		goto pocetak;
	}

	case 6: {
		cout << "<------------------------------------->" << endl;
		cout << ". Ime macke: " << macka_queue.back().get_ime() << " Godine macke: " << macka_queue.back().get_godine() << " Tezina macke: " << macka_queue.back().get_tezina() << endl;
		cout << "<------------------------------------->" << endl;
		goto pocetak;
	}

	case 7: {
		int opcija_dva;
		pas pas_inf; 
		macka mac_inf;
		cout << "Za informacije o psima unesite 1. " << endl; 
		cout << "Za informacije o mackama unesite 2. " << endl;
		cin >> opcija_dva;
		if (opcija_dva == 1) {
			cout << pas_inf.get_info();
		} 
		if (opcija_dva == 2) {
			cout << mac_inf.get_info();
		}
	
		goto pocetak;
	}

	}
	
	
		


	system("PAUSE");
	return 0;
}
