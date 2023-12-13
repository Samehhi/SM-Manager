#include "include/init.hpp"
#include "include/cmd.hpp"
#include <iostream>
int main()
{
    initi myIniti;
    handling_cmd myCmd;

    myCmd.questionning(myIniti.modpacks, myIniti.initialisation());
    
    return 0;



    
    }