#include <fstream>
#include <iostream>
#include <string>
#include <unordered_map>
#include <vector>

std::unordered_map<std::string, std::vector<std::string>> modpacks;
void init() {
    std::ifstream fichier { "modpacks.txt" };
    std::string ligne { "" };
    std::string key;
    std::vector<std::string> mods; 
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
int main()
{
    std::string space {" "};
    init();

    for (auto x : modpacks) {
        std::cout << x.first << std::endl;
        for (auto i : x.second) {
            std::cout << " - " << i << std::endl;
        }
        
        
                                    
    }
    }