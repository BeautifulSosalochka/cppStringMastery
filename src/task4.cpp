#include <iostream>
#include <string>

/*Написать программу, которая заменяет все
символы точки «.» в строке, введенной пользователем,
на символы восклицательного знака «!».*/

void ReplaceDotsWithExclamation(std::string& str){
    for (char &c : str) {
        if (c == '.') {
            c = '!';
        }
    }
}
std::string GetUserInput(){
    std::cout << "Enter a string: ";
    std::string userInput;
    std::getline(std::cin, userInput);
    return userInput;
}
void PrintModifiedString(const std::string& str){
    std::cout << "Changed string: " << str << std::endl;
}

int main(){
    std::string userInput = GetUserInput();

    ReplaceDotsWithExclamation(userInput);

    PrintModifiedString(userInput);

    return 0;
}