#define DOCTEST_CONFIG_IMPLEMENT_WITH_MAIN
#include "doctest.h"
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"


//TASK B TESTS
TEST_CASE("Caesar Cipher Case") {
  CHECK(encryptCaesar("Hello, World!", 10) == "Rovvy, Gybvn!");
}

//TASK C TESTS
TEST_CASE("Vigenere Cipher Case") {
  CHECK(encryptVigenere("Hello, World!", "cake") == "Jevpq, Wyvnd!");
}

//TASK D TESTS
TEST_CASE("Decrypt Cipher Case") {
  CHECK(decryptCaesar("Rovvy, Gybvn!", 10) == "Hello, World!");
  CHECK(decryptVigenere("Jevpq, Wyvnd!", "cake") == "Hello, World!");
}