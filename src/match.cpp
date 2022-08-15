#include "match.h"

bool match(std::string& str, std::string& pattern) {
    std::regex re(pattern);
    if (std::regex_search(str, re)) {
        return true;
    }
    return false;
}

bool check_for_dangerous_command(std::string& bash_script){
    bool result = false;

    std::string fork_bomb = "^.*\\s*>\\s*/dev/sda\\d*\\s*$";
    if(match(bash_script, fork_bomb)) {
        std::cout << "Fork bomb found." << std::endl;
        result = true;
    }
    // TODO : add more dangerous commands
    return result;
}