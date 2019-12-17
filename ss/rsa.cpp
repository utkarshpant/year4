//rsa algorithm
#include <iostream>

//primes
int p = 11, q = 3;

//multiplication of two large prime numbers;
//first part of public key;
int n = p * q;
int exp = 3;

//private key components;
int phi = (p - 1) * (q - 1);

int main() {
    std::cout << "Hello.";
    return 0;
}
