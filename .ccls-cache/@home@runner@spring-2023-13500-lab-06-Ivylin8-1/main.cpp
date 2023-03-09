#include <iostream>
#include "funcs.h"
#include "caesar.h"
#include "vigenere.h"
#include "decrypt.h"
int main()
{
std::cout << "Caesar Cipher: " << encryptCaesar("Way to Go!", 5) << std::endl;
  

  std::cout << "Vigenere: " <<encryptVigenere("Hello world!", "cake") << std::endl;
 
std::cout << "Vigenere decrypted: " <<decryptVigenere("Jevpq, Wyvnd!", "cake") << std::endl;
std::cout << "Caesar decrypted: " <<decryptVigenere("Rovvy, Gybvn!", "10") << std::endl;

  
  return 0;
}
