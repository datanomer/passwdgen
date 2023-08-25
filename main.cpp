#include <iostream>
#include <string.h>
#include <random>
#include <list>

struct characters
{
 
    char letter[26] = {'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','x','y','z','w','v'};   
    char spclchar[14] = {'!','"','#','$','%','&','(',')','*','+',',','-','.','/',};
    char num[10] = {'0','1','2','3','4','5','6','7','8','9'};
   
} characters;


void passgen(int input)
{
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> uni(0,50);
    auto rando = uni(rng);

    for (int i = 0; i < input; i++) {
        std::cout << characters.letter[rando];
        
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
