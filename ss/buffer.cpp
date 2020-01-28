#include <iostream>
#include <cstdlib>
#include <cstring>

int main() {
    char buff[1];
    std::cout << "Enter password:\n" << std::endl;
    gets(buff);
    int pass = 0;
    if (strcmp(buff, "a")) {
        std::cout << "Incorrect password!" << std::endl;
    } else {
        std::cout << "Correct password!" << std::endl;
        pass = 1;
    }

    if (pass) {
        std::cout << "The password state was changed." << std::endl; 
    }
    return 0;
}