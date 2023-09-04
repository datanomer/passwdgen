#include <iostream>
#include <string.h>
#include <random>
#include <cstdlib>
#include <cmath>
#include <vector>

struct characters
{
    const std::vector<char> schr = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','X','Y','Z','W','V','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','x','y','z','w','v','!','"','#','$','%','&','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9'};   
    const std::vector<char> chr = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','X','Y','Z','W','V','a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','x','y','z','w','v'};   
    //char schr[24] = {'!','"','#','$','%','&','(',')','*','+',',','-','.','/','0','1','2','3','4','5','6','7','8','9'};
    char num[10] = {'0','1','2','3','4','5','6','7','8','9'};
    // Todo:
    // * Options for special characters and numbers

} characters;

void passgen(int input, char oinput)
{
    std::string output;
    std::random_device rd;
    std::mt19937 rng(rd());
    std::uniform_int_distribution<int> uni(1,76);
    int randnum = uni(rng);
    if (oinput=='n') {
        for (int i = 0; i < input; i++) 
        {
            std::cout << characters.chr[std::rand()%randnum]; 
        }
    }else if (oinput=='y') {
        for (int i = 0; i < input; i++) 
        {
           output=characters.schr[std::rand()%randnum];
         
            if (std::string::npos != output.find_first_not_of(characters.num)) 
            {  
                std::cout << output;
            }
            else if(std::string::npos == output.find_first_not_of(characters.num)) {
                std::cout << output; 
            }
        }
    }
}

int main (int input, char* argv[])
{
   char oinput;
   std::cout << "Passwordgenerator\n";
   std::cout << "How many characters?: ";
   std::cin >> input;
   std::cout << "Numbers and special characters? [y/n]: ";
   std::cin >> oinput;
   
   passgen(input, oinput);
   return 0;
}
