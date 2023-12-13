#include <string>
#include<unordered_map>
#include <vector>
#include <iostream>

class command_list {


public:
    void add(std::string  input, std::unordered_map<std::string, std::vector<std::string>> & modpacks);
    void create(std::string  input, std::unordered_map<std::string, std::vector<std::string>> &modpacks);
    void load(std::string  input, std::unordered_map<std::string, std::vector<std::string>> &modpacks);
    void save(std::unordered_map<std::string, std::vector<std::string>> &modpacks);
    void path(std::string input, std::string path);
    std::vector<std::string> slice(std::string input);
    std::string path_ {""};
};