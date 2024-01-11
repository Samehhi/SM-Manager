#include "../include/init.hpp"
#include <iostream>

std::string initi::initialisation() {

    std::cout << "initialisation... " << std::endl;

    std::string path;

    while (std::getline(fichier, ligne))
    {
        
        if (ligne[0] == '.' && !ligne.empty() && ligne[1] != '.') {
            modpacks.insert(std::make_pair(key, mods));

            ligne.erase(0, 1);
            key = ligne;

            mods.clear();

        }
        else if(ligne[1] == '.'){
            ligne.erase(0, 2);
            path = ligne;

        }
        else {
            mods.push_back(ligne);
        }
    }

    return path;
    
   
    modpacks[key] = mods;
}