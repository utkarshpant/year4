//exp 6 ss 
#include <iostream>
#include <regex>
#include <string>
#include <conio.h>

class Password {
    protected:
    //members
    std::string pass_input;
    

    int pass_flag;
    //methods
    

    public:
    //methods
    void record_input(std::string message);
    void validate_input();
    
    //constructors
    Password() {
        pass_flag = 0;
        pass_input = "";
    }
};

int main() {
    std::string input;
    Password newPassword;
    newPassword.record_input("Enter a password:\t");
    newPassword.validate_input();
    return 0;
}

void Password::record_input(std::string message) {
    std::cout << message;
    std::string input;
    std::cin >> input;
    pass_input = input;
}

void Password::validate_input() {
    int len_flag = 0, cap_flag = 0, num_flag = 0, sp_char_flag = 0;
    std::regex cap_regex("([0-9]+)|([a-d]+)");
    if (pass_input.length() >= 8 && pass_input.length() <= 26) {
        len_flag = 1;
        std::cout << "Long enough" << std::endl;
    } else {
        std::cout << "Too short" << std::endl;
    }
    if (int la = std::regex_search(pass_input, cap_regex)) {
        std::cout << la << std::endl;
    } else {
        std::cout << la;
    }
}