#include <iostream>
#include <cstring>
#include <locale.h>
#include <cstdlib>
#include <ctime>
#include <random>
#include "Menu.h" 
#include "Tita.h"
#include "Batalha.h"
#include "Lado.h"
#include "ListPerso.h"

using namespace std;

int main(int argc, char** argv) {

	setlocale(LC_ALL,"Portuguese");
	
	//Declaração de variavel
	string Nome;
	int inicio,pai,arma,lado;
	char sair;
	// Classes declaradas
	Menu menu;
	Tita desc;
	Batalha duelo;
	Lado esco;
	ListP lista;
	
	do{
		inicio=menu.exibir();
			switch(inicio){
				case 1:{
				    system("cls");
	                lista.ListL();
	                cout << "Novo Personagem Adicionado!\n\n";
	                system("pause");
	                system("cls");
	                cout << endl;

				break;
				}
				case 2:{
					system("cls");
					lista.impListP();
					break;
				}
				case 3:{
					system("cls");
					int num;
       				cout << "Digite o número do personagem que deseja excluir: ";
      			  	cin >> num;
					lista.DelP(num);
					break;
				}
				case 4:{
					cout <<"Certeza que deseja sair?[s/n]\n";
					cin>>sair;
					if(sair=='s'){
						return 0;
                	} else if (sair != 'n') {
                    cout << "Apenas insira: [s/n]\n";
               		}
                break;
				}
			
	}
		}while (inicio!=4);
	
	return 0;
};

