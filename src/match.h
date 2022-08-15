#include <iostream>
#include <regex>

bool match(std::string& str, std::string& pattern);
bool check_for_dangerous_command(std::string& bash_script,std::string& filename);
