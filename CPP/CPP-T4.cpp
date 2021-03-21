#include <iostream>
#include <string>

int main () 
{
std::string input3;
std::cout << "String input" << std::endl;
getline(std::cin, input3);

int length = input3.length();
std::cout << input3 << std::endl;
std::cout << length << std::endl;

for (int i = 0;i <= length; i++)
{
    std::cout << input3[i] << std::endl;
}

return 0;
}