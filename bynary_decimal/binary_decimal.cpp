// https://en.cppreference.com/w/cpp/string/basic_string/stol

#include <stdlib.h>
#include <cmath>
#include <iostream>
using namespace std;

//FUNCTION FOR CONVERT DECIMAL NUMBER IN BINARY
int decimal_binary(long int number)
{
    string s, str, binary;
    for (int i = 0; number > 0; i++)
    {
        str.append(to_string(number % 2));
        number = number / 2;
    }
    for (int j = str.length()-1; j >= 0; j--)
    {
        s = str[j];
        binary.append(s);
    }
   return stoi(binary);
}

//FUNCTION FOR CONVERT A BINARY NUMBER IN DECIMAL
int binary_decimal(long int binary)
{
    string str = to_string(binary), s;
    int sum = 0, idx = (str.length() - 1);
    if (str == "0")
        return 0;
    for (int i = 0; i < str.length(); i++)
    {
        s = str[idx--];
        int aux = stoi(s);
        sum += pow(2, i) * aux;
    }
    return sum;
}

int main()
{
    
    //Test with ten random values
    for (int i = 0; i < 10; i++)
    {
    printf("binary_decimal: %d\n", binary_decimal(rand()%100));
    printf("decimal_binary: %d\n\n", decimal_binary(rand()%100));  

    }
    
 

    return 0;
}
