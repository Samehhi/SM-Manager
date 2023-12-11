#include <string>
#include <vector>
#include "commands.hpp"

class handling_cmd {
    
    bool running {true};
    std::string word;
    std::string ME;
    std::vector<std::string> input;
    command_list commands;

public:

    void questionning(std::unordered_map<std::string, std::vector<std::string>> modpacks);
    void handling_error();
  
};