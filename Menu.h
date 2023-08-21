#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <cstring>
#include "Tita.h"
#include "Batalha.h"
#include "Lado.h"
#include "ListPerso.h"



class Menu{
private:
public: 
	int inicio;
	std::string input;
	
	int exibir() {
		
        std::cout << "------------- MENU ------------" << std::endl;
        std::cout << "1. Criar um Personagem" << std::endl;
        std::cout << "2. Listar Todos os Personagens" << std::endl;
        std::cout << "3. Excluir um Personagem" << std::endl;
        std::cout << "4. Sair" << std::endl;
        std::cout << "------------------------------" << std::endl;
        std::cout << "Digite uma opção: ";
		std::cin >> input;

	        // Verifica se a entrada é numérica
	        if (std::all_of(input.begin(), input.end(), ::isdigit)) {
	            inicio = std::stoi(input);
	        } else {
	            inicio= 0;
	        }
        return inicio;
    }
};
    




#endif // MENU_H

