#include <iostream>
#include <string>

// Задача --> Пользователь вводит строку символов и искомый символ, посчитать сколько раз он встречается в строке.

std::string GetUserInput(){
    std::cout << "Enter a string: ";
    std::string userInput;
    std::getline(std::cin, userInput);
    return userInput;
}
char GetTargetChar(){
    std::cout << "Enter a target character: ";
    char targetChar;
    std::cin >> targetChar;
    return targetChar;
}
int CountOccurrences(const std::string& str, char targetChar){
    int count = 0;
    for (char c : str){
        if (c == targetChar) {
            count++;
        }
    }
    return count;
}
void PrintResult(int occurrences, char targetChar){
    std::cout << "The desired symbol '" << targetChar << "' occurs in the string " << occurrences << " times" << std::endl;
}

int main(){
    std::string userInput = GetUserInput();

    char targetChar = GetTargetChar();

    int occurrences = CountOccurrences(userInput, targetChar);

    PrintResult(occurrences, targetChar);

    return 0;
}