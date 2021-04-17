// link useful to helping me with the functions of the ctype
//http://linguagemc.com.br/ctype-h-toupper-tolower-isalpha-isdigit-em-c/
#include <iostream>
#include <ctype.h>
using namespace std;

string Criptografia(string words)
{
    string str = words;
    int tam = words.length();
    // 1
    for (int i = 0; i < tam; i++)
        if (isalpha(str[i]))
            str[i] += 3;
    // 2
    string aux = str;
    aux = "";
    for (int i = 0, j = tam - 1; j > -1, i < tam; j--, i++)
        aux[i] = str[j];
    // 3
    for (int z = (tam) / 2; z < tam; z++)
    {
        aux[z]--;
    }
    //print string finish
    for (int i = 0; i < tam; i++)
        words[i] = aux[i];
   
    return words;
}

int main()
{
string test_str = "Luiz Gustavo";

printf("Print of the original str: %s\n", test_str.c_str());
printf("String test_str encrypted: %s\n\n", Criptografia(test_str).c_str());



    return 0;
}
