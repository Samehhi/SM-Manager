#include "../include/init.hpp"


void initi::initialisation() {

    while (std::getline(fichier, ligne))
    {
        if (ligne[0] == '.') {
            modpacks[key] = mods;
            key = ligne;
            mods.clear(); 
        } else {
            mods.push_back(ligne);
        }
    }
    
   
    modpacks[key] = mods;
}