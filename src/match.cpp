#include "match.h"

bool match(std::string& str, std::string& pattern) {
    std::regex re(pattern);
    if (std::regex_search(str, re)) {
        return true;
    }
    return false;
}

bool check_for_dangerous_command(std::string& bash_script,std::string& filename){
    bool result = false;

    std::string fork_bomb = ""; // TODO
    std::string delete_root = "^\\s*rm\\s+((-rf)|(-fr)|(-f\\s+--recursive)|(--recursive\\s+-f)|(--force\\s+-r)|(-r\\s+--force)|(--recursive\\s+--force)|(--force\\s+--recursive))\\s+/(home)?\\s*$";
    std::string write_to_sda = "^.*\\s*>\\s*/dev/sda\\d*\\s*$";
    // if(match(bash_script, fork_bomb)) {
    //     std::cout << "Fork bomb detected : " << filename << std::endl;
    //     result = true;
    // }
    if(match(bash_script, fork_bomb)) {
        std::cout << "Deleting root : " << filename << std::endl;
        result = true;
    }
    if(match(bash_script, write_to_sda)) {
        std::cout << "Write program output to sda* :" << filename << std::endl;
        result = true;
    }
    // TODO : add more dangerous commands
    return result;
}