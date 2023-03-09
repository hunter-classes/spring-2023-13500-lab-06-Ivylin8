#include <iostream>
#include "vigenere.h"
#include <string>
#include <cctype>

std::string encryptVigenere(std::string plaintext, std::string keyword) {
    int a = keyword.length();
    int b = plaintext.length();
    std::string ciphertext = "";

    for (int i = 0, j = 0; i < b; i++) {
        char c = plaintext[i];
        if (isalpha(c)) {
            int shift = keyword[j] - 'a';
            c = (c + shift - 'a') % 26 + 'a';
            j = (j + 1) % a;
        }
        ciphertext += c;
    }

    return ciphertext;
}