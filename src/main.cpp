/*! \file main.cpp
 * \brief fichier controle
 * \author Romain Henry
 * \version 1.0
*/

#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

int main(){
	vector<double> reel;
	double nombre;

	ofstream f_nombres;
	f_nombres.open("nombres.txt");

int menu;
do {

	
	cout << endl << "----------MENU----------" << endl;
 	cout << "1. Ajouter un réel" << endl;
 	cout << "2. Afficher la liste des réels" << endl;
	cout << "3. Supprimer le premier réel selon la valeur donnée" << endl;
 	cout << "4. Supprimer tous les réels selon la valeur donnée" << endl;
 	cout << "5. Quitter" << endl << endl;
	cout << "Choix : ";
	cin >> menu;
	cout << endl;
	
	switch(menu)
	{	
		case 1 : 
			cout << "Entrez un nombre : " << endl;
			cin >> nombre;
			reel.push_back(nombre);
			for(int i=0; i<reel.size(); i++){
			f_nombres << reel[i] << endl;
			}
			f_nombres.close();
			
		break;	
		case 2 :		
			cout << "Liste des réels : " << endl;
			for(int i=0; i<reel.size(); i++){
			cout << reel[i] << endl;
			}
		break;	
		case 3 :
			cout << "Entrez le nombre que vous souhaitez supprimer (un)" << endl;
			cin >> nombre;
			for (int i=0; i<reel.size(); i++){
				if (nombre == reel[i]){
				reel.pop_back();
			}		
			}					
		break;	
		case 4 :
			cout << "Entrez le nombre que vous souhaitez supprimer (tous)" << endl;
			cin >> nombre;
			for (int i=0; i<reel.size(); i++){
				if (nombre == reel[i]){
				reel.erase (reel.begin() +i);
			}
			}	
		break;	
		case 5 :
			cout << "Quitter" << endl;
		break;
	}
} while(menu !=5);
	
	
return 0;
}
