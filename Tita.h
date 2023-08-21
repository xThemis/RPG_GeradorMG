#ifndef TITA_H
#define TITA_H
#include <iostream>
#include <ctime>
#include <cstdlib>
#include <algorithm>
#include <cstring>


class Tita {
public: 
    std::string Tpai(int opcPai) {
        switch (opcPai) {
            case 1: return "Astreu";
            case 2: return "Ceos";
            case 3: return "Crio";
            case 4: return "Cronos";
            case 5: return "Helios";
            case 6: return "Hiperion";
            case 7: return "Jápeto";
            case 8: return "Mnemosine";
            case 9: return "Palas";
            case 10: return "Perses";
            case 11: return "Selene";
            case 12: return "Têmis";
            default: return "";
        }
    }

    // Loop do Tita
    std::string doWhileTita() {        
        int pai;
        Tita desc;
		std::string nomeTita;
        
        do {
            std::cout << "\nDigite o numero do Titã como progenitor:" << std::endl;
            std::cout << "1. Astreu\n2. Ceos\n3. Crio\n4. Cronos\n5. Helios\n6. Hiperion\n7. Jápeto\n8. Mnemosine\n9. Palas\n10. Perses\n11. Selene\n12. Têmis\n13. Aleatorio" << std::endl;
            std::string input;
            std::cin >> input;

            // Verifica se é um numero
            if (std::all_of(input.begin(), input.end(), ::isdigit)) {
                pai = std::stoi(input);
            } else {
                pai = 0;
            }
            system("cls");
            
            if (pai == 13 ) {
                std::cout << "Escolhemos um Tita como seu Progenitor, ";
                std::srand(static_cast<unsigned int>(std::time(0)));
                pai=1 + std::rand() % 12;
            } 
            	std::string nomeTita = desc.Tpai(pai);
			if (!nomeTita.empty()){
                std::cout << "Parabéns você é filho de " << nomeTita << "!" << std::endl;
            } else {
                std::cout << "Opção inválida, digite apenas numeros!" << std::endl;
                pai = 0;
			}
            return nomeTita;
            
        } while (pai == 0);

        
    }
};

#endif 
