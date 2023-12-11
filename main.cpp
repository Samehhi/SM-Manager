#include "include/init.hpp"
#include "include/cmd.hpp"
#include <iostream>
int main()
{
    initi myIniti; // Crée une instance de la classe initi
    handling_cmd myCmd; // Crée une instance de la classe handling_cmd

    myIniti.initialisation();
    myCmd.questionning(myIniti.modpacks); // Appelle la fonction handling_error() sur l'instance myCmd
    
    return 0;



    
    }