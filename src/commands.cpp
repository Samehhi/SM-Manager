#include "../include/commands.hpp"
#include <iostream>
#include <fstream>
#include <string>


std::vector<std::string> command_list::slice(std::string  input) {
    std::vector<std::string> elements;
    std::string phrase;
    
    

    auto inputEnd = input.end();  // Itérateur de fin pour la séquence input

    for (auto it = input.begin(); it != inputEnd; ++it) {
        char i = *it;  // Récupérez le caractère à partir de l'itérateur

        if (isspace(i)) {
            
            elements.push_back(phrase);
            phrase.clear();
        } else {
            phrase.push_back(i);
        }
    }

    // Vérifiez s'il reste une phrase non vide à ajouter
    if (!phrase.empty()) {
        elements.push_back(phrase);
    }
    return elements;

}
void command_list::add(std::string input, std::unordered_map<std::string, std::vector<std::string>>& modpacks) {

    std::vector<std::string> elements = slice(input);

    auto it = modpacks.find(elements[2]);
    if (it != modpacks.end()) {
        it->second.push_back(elements[1]);
    } else {
        modpacks.emplace(elements[2], std::vector<std::string>{elements[1]});
    }
}
void command_list::create(std::string  input, std::unordered_map<std::string, std::vector<std::string>> & modpacks) {
    std::vector<std::string> elements {slice(input)};

    auto it = modpacks.find(elements[1]);
    if (it != modpacks.end()) {
        std::cout << "Error, already existing modpack." << std::endl;
    } else {
        std::vector<std::string> temp {""};

        modpacks.emplace( elements[1], temp);
    }

}
void command_list::load(std::string  input, std::unordered_map<std::string, std::vector<std::string>>& modpacks) {
    std::vector<std::string> elements {slice(input)};
    
}
void command_list::path(std::string input, std::string path) {
    std::vector<std::string> elements {slice(std::move(input))};

    path_ = elements[1];

}
void command_list::save(std::unordered_map<std::string, std::vector<std::string>>& modpacks) {

    std::ofstream fichier { "modpacks.txt" };
    if(fichier.is_open()) {
        fichier.clear();
        for( auto a : modpacks) {
            std::string b {"."};
            std::string c = b + a.first;
            fichier << c << '\n';
            for(const std::string i : a.second) {
                fichier << i << '\n';
            }
        }

        fichier << ".." << path_ << '\n';

        std::cout << "Saving done" << std::endl;

    }
}