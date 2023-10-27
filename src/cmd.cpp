#include "../include/cmd.hpp"
#include <iostream>
#include <limits>

void handling_cmd::handling_error() {

    
    while(!(std::cin >> ME && ME =="add" || ME =="create" || ME =="help" || ME =="load" || ME =="exit")) {
        if (std::cin.eof())
        {
            throw std::runtime_error("the stream has been closed");
        }
        else if (std::cin.fail())
        {
            std::cout << "Entrée invalide. Recommence." << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        }
        else
        {
            std::cout << "Uknown command : " << ME << std::endl;
            std::cout << " >> ";
        }
        }
        
}

void handling_cmd::questionning() {
    std::cout << "MS-Manager v1 write help for commands." << std::endl;

    while (running){
        std::cout << ">> ";

        handling_cmd::handling_error();

        
        if(ME == "help") {
            std::cout << "Here is some commands you can use here : " << std::endl;
            std::cout << " - add : To add a mod in a modpacks exemple : add <name of mod whit extension> < name of modpack>" << std::endl;
            std::cout << " - create : Create a modpack exemple : create <name of the modpack>" << std::endl;
            std::cout << " - load : load a modpack on minecraft exemple : load <name of modpack>" << std::endl;
            std::cout << " - path : modify the path to minecraft mods folder exemple : C:/Minecraft/mods" << std::endl;
            std::cout << " - exit : Quit de program" << std::endl;
        }
        if(ME == "exit") {
            std::cout << "Goodbye !" << std::endl;
            break;
        }
        if (ME == "add" || ME == "create"  || ME == "load") {
            std::vector<std::string> command_words;
            command_words.push_back(ME);

            std::string input;
            std::getline(std::cin, input);

            if(ME == "add" ) {
                commands.add(input);
            }
            if(ME == "create" ) {
                commands.create(input);
            }
            if(ME == "load" ) {
                commands.load(input);
            }
            }
            
            
            }

        }
        


