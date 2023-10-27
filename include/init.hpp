#ifndef INIT_HPP
#define INIT_HPP

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <unordered_map>
#include <sstream>

class initi {
    std::ifstream fichier { "modpacks.txt" };
    std::string ligne { "" };
    std::string key;
    std::vector<std::string> mods; 
    std::unordered_map<std::string, std::vector<std::string>> modpacks;
public:
    void initialisation();
};

#endif