#ifndef LADO_H
#define LADO_H
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <cstring>

class Lado {
public: 
	int lado;
		std::string Side(int opcLado){
	        	switch (opcLado){
				case 1: return "Heroi";
				case 2: return "Vilão";
			 	default: return "";			
		}	
}
	std::string doWhileLd(const std::string& Nome){
		Lado esco;
		std::string nomeLado;
		do{
			std::cout << "\nEscolha um lado "<< std::endl;
			std::cout << "1. Heroi\n2. Vilão\n3. Aleatorio" << std::endl;
			std::cin >>lado; 
			system("cls");
				
			if (lado == 3 ) {
                std::cout << "Escolhemos uma lado para " << Nome<< ", ";
                std::srand(static_cast<unsigned int>(std::time(0)));
                lado=1 + std::rand() % 2;
            }
            std::string nomeLado = esco.Side(lado);
			if (!nomeLado.empty()){
                std::cout << Nome << " é " << nomeLado << "!" << std::endl;
            } else {
                std::cout << "Opção inválida, digite apenas numeros!" << std::endl;
                lado = 0;
			}
        	return nomeLado;
        	
		}while(lado==0);
	
	}
};

#endif 
