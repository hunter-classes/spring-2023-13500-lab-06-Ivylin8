#include <iostream>
#include "caesar.h"

  
char shiftChar(char c, int rshift) {
if(isalpha(c)){
    if(isupper(c)){
        return (((c-'A')+rshift) %26)+ 'A';
    }else{
        return (((c-'a')+rshift)%26)+'a';
    }
}else{
    return c;
}

}

std::string encryptCaesar (std::string plaintext, int rshift){
std::string res = "";
for (int i = 0; i < plaintext.length(); i++){
    res += shiftChar(plaintext[i],rshift);
}
return res;
}



