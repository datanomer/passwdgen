#include <iostream>
#include <string.h>
#include <random>
#include <list>
#include <cstdlib>

struct characters
{
    char chr[76] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','X','Y','Z','W','V','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','x','y','z','w','v','!','"','#','$','%','&','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9'};   
    //char spclchar[14] = {'!','"','#','$','%','&','(',')','*','+',',','-','.','/',};
    //char num[10] = {'0','1','2','3','4','5','6','7','8','9'};
    // Todo:
    // * Options for special characters and numbers

} characters;


void passgen(int input)
{
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> uni(0,76);
    int rando = uni(rng);

        for (int i = 0; i < input; i++) 
        {
            std::cout << characters.chr[std::rand()%rando];
            
        }
        
}


int main (int input, char* argv[])
{
   std::cout << "Passwordgenerator\n";
   std::cout << "How many characters?: ";
   std::cin >> input;
   passgen(input);
   return 0;
}
