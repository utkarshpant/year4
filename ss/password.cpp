//exp 6 ss 
#include <iostream>
#include <regex>
#include <string>
#include <conio.h>

class password {
    protected:
    //members
    std::string pass_input;
    

    int pass_flag;
    //methods
    

    public:
    //methods
    std::string record_input(std::string message);
    int validate_input();
    
    //constructors
    password() {
        pass_flag = 0;
        pass_input = "";
    }
};

int main() {
    std::string input;
    password newPassword;
    input = newPassword.record_input("Enter a password:\t");
    std::cout << "The password entered is:\t" << input << std::endl;
    // std::regex integer("(\\+|-)?[[:digit:]]+");
    // while (true) {
    //     std::cout << "Give me an integer:\t";
    //     std::cin >> input;
    //     if (!std::cin) {
    //         break;
    //     }
        
    //     if (input == "q") {
    //         break;
    //     }

    //     if (std::regex_match(input, integer)) {
    //         std::cout << "Integer " << std::endl;
    //     } else {
    //         std::cout << "Invalid input!" << std::endl;
    //     }
    // }

    return 0;
}

std::string password::record_input(std::string message) {
    std::cout << message;
    std::string input;
    std::cin >> input;
    return input;
}