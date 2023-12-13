

#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <unordered_map>

class initi {
    std::ifstream fichier { "modpacks.txt" };
    std::string ligne { "" };
    std::string key;
    std::vector<std::string> mods; 
    
public:
    std::string initialisation();
    std::unordered_map<std::string, std::vector<std::string>> modpacks;
};

