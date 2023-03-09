
#include <iostream>
#include <string>

std::string decryptCaesar(std::string ciphertext, int rshift) {
    return decryptCaesar(ciphertext, 26 - rshift);
}

std::string decryptVigenere(std::string ciphertext, std::string keyword) {
    std::string plaintext = "";
    int keylen = keyword.length();
    for (int i = 0; i < ciphertext.length(); i++) {
        if (std::isalpha(ciphertext[i])) {
            char c = (std::toupper(ciphertext[i]) - std::toupper(keyword[i % keylen]) + 26) % 26 + 'A';
            plaintext += c;
        } else {
            plaintext += ciphertext[i];
        }
    }
    return plaintext;
}
