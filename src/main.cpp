#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>
#include "exec.h"
#include "match.h"

int main(int argc, char* argv[]) {
    if(argc < 2) {
        std::cout << "Usage: " << argv[0] << " <bash file>" << std::endl;
        return 1;
    } else if (argc == 2){
        std::string bash_script;
        std::string line;
        std::ifstream  input_source(argv[1]);
        while (getline (input_source, line)) {
            bash_script += line;
        }

        if(check_for_dangerous_command(bash_script)) {
            // TODO : show a help to run dangerous script
            return 1;
        } else {
            // TODO : run the script
            return 0;
        }
        

    }else if(argc == 3 && std::string(argv[2]) == "-shellcheck") {
        std::string cmd = std::string("shellcheck -s bash ") + std::string(argv[1]);
        std::string result = exec(cmd);
        
        // TODO : parse shellcheck outputs
    }
    return 0;
}