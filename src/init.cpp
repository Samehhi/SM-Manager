#include "../include/init.hpp"
#include <iostream>

void initi::initialisation() {

    std::cout << "initialisation... " << std::endl;

    while (std::getline(fichier, ligne))
    {
        
        if (ligne[0] == '.' && !ligne.empty()) {
            modpacks.insert(std::make_pair(key, mods));

            ligne.erase(0, 1);
            key = ligne;

            mods.clear();

        } else {
            mods.push_back(ligne);
        }
    }
    
   
    modpacks[key] = mods;
}