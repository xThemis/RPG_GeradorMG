#ifndef LISTPERSO_H
#define LISTPERSO_H

#include <iostream>
#include <vector>
#include <cstring>
#include "Menu.h" 

class ListP {
private:
    struct Perso {
        std::string Nome;
        std::string pai;
        std::string arma;
        std::string lado;
    };
    std::vector<Perso> list;

public:
    void ListL() {
        std::string pai;
        std::string arma;
        std::string lado;
        Tita desc;
        Batalha duelo;
        Lado esco;

        std::cout << "Escolha um nome para o seu personagem: " << std::endl;
        std::string Nome;
        std::cin.ignore();
        std::getline(std::cin, Nome);
        
        Perso newLenda;
  
        newLenda.Nome = Nome;
        newLenda.pai =  desc.doWhileTita();
        newLenda.arma = duelo.doWhileBtl(Nome);
        newLenda.lado = esco.doWhileLd(Nome);
        list.push_back(newLenda);
    }

    void impListP() {
        if (list.empty()) {
            std::cout << "Nenhum personagem cadastrado." << std::endl;
            return;
        }

        int i = 1;
        std::cout << "Dados dos Personagens:" << std::endl;
        std::cout << "--------------------------" << std::endl;
        for (const Perso& lenda : list) {
            std::cout << "\n-- Personagem " << i++ << std::endl;
            std::cout << "\n-- Nome: " << lenda.Nome << std::endl;
            std::cout << "-- Pai: " << lenda.pai << std::endl;
            std::cout << "-- Arma: " << lenda.arma << std::endl;
            std::cout << "-- Lado: " << lenda.lado << std::endl;
            std::cout << "--------------------------" << std::endl;
        }
    }

    void DelP(int num) {
        if (num <= 0 || num > list.size()) {
            std::cout << "Número inválido do personagem!\n";
            return;
        }

        auto it = list.begin();
        std::advance(it, num - 1);
        list.erase(it);

        std::cout << "Personagem removido!\n";
    }
};
#endif 
