#include <iostream>
#include <string>

/*Пользователь вводит строку. Определить количество букв, количество цифр и количество остальных
символов, присутствующих в строке*/

std::string GetUserInput(){
    std::cout << "Enter a string: ";
    std::string userInput;
    std::getline(std::cin, userInput);
    return userInput;
}
int CountLetters(const std::string& str){
    int letterCount = 0;
    for (char c : str){
        if (std::isalpha(c)){
            letterCount++;
        }
    }
    return letterCount;
}
int CountDigits(const std::string& str){
    int digitCount = 0;
    for (char c : str){
        if (std::isdigit(c)){
            digitCount++;
        }
    }
    return digitCount;
}
int CountOtherCharacters(const std::string& str){
    int otherCount = 0;
    for (char c : str){
        if (!std::isalpha(c) && !std::isdigit(c) && !std::isspace(c)){
            otherCount++;
        }
    }
    return otherCount;
}
void PrintResult(int letterCount, int digitCount, int otherCount){
    std::cout << "Letters per string: " << letterCount << std::endl;
    std::cout << "Digits per string: " << digitCount << std::endl;
    std::cout << "Other symbols per string: " << otherCount << std::endl;
}

int main(){
    std::string userInput = GetUserInput();

    int letterCount = CountLetters(userInput);

    int digitCount = CountDigits(userInput);

    int otherCount = CountOtherCharacters(userInput);

    PrintResult(letterCount, digitCount, otherCount);

    return 0;
}