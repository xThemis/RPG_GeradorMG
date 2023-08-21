#ifndef BATALHA_H
#define BATALHA_H

#include <iostream>
#include <string>
#include <ctime>
#include <cstdlib>

class Batalha {
public:
    std::string arma(int opcArma) {
        switch (opcArma) {
            case 1: return "Adagas Duplas";
            case 2: return "Arco e Flecha";
            case 3: return "Cajado Mágico";
            case 4: return "Escudo e Espada";
            case 5: return "Espada";
            case 6: return "Foice";
            case 7: return "Lança";
            case 8: return "Machado";
            default: return "";
        }
    }

    std::string doWhileBtl(const std::string& Nome) {
        int arma;
        std::string nomeArma;
        Batalha duelo;

        do {
            std::cout << "\nEscolha uma arma para " << Nome << std::endl;
            std::cout << "1. Adagas Duplas\n2. Arco e Flecha\n3. Cajado Mágico\n4. Escudo e Espada\n5. Espada\n6. Foice\n7. Lança\n8. Machado\n9. Aleatorio\n";
            std::string input;
            std::cin >> input;

            // Verifica se a entrada é numérica
            if (std::all_of(input.begin(), input.end(), ::isdigit)) {
                arma = std::stoi(input);
            } else {
                arma = 0;
            }

            system("cls");

            if (arma == 9 ) {
                std::cout << "Escolhemos uma arma para " << Nome << ", ";
                std::srand(static_cast<unsigned int>(std::time(0)));
                arma = 1 + std::rand() % 8;
            }

            std::string nomeArma = duelo.arma(arma);
            if (!nomeArma.empty()) {
                std::cout << "Sua Arma é " << nomeArma << "!" << std::endl;
            } else {
                std::cout << "Opção inválida, digite apenas numeros!" << std::endl;
                arma = 0;
            }
        
       		return nomeArma;
       		
        } while (arma == 0);
    }
};

#endif 
