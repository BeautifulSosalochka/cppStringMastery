#include <iostream>
#include <string>

// Задача --> Написать функцию, которая вставляет в строку в указанную позицию заданный символ.

void InsertCharAtPosition(std::string& str, int position, char toInsert){
    if (position >= 0 && position <= str.length()){
        str.insert(position, 1, toInsert);
    }else {
        std::cerr << "Invalid position" << std::endl;
    }
}
void TestInsertCharAtPosition(){
    std::string testString;
    char charToInsert;
    int positionToInsert;

    std::cout << "Enter a string: " << std::endl;
    std::getline(std::cin, testString);

    std::cout << "Enter a character to insert: " << std::endl;
    std::cin >> charToInsert;

    std::cout << "Enter the position to insert: " << std::endl;
    std::cin >> positionToInsert;

    std::cout << "Original string: " << testString << std::endl;

    InsertCharAtPosition(testString, positionToInsert, charToInsert);
    std::cout << "String after inserting '" << charToInsert << "' at position " << positionToInsert << ": " << testString << std::endl;
}

int main(){
    TestInsertCharAtPosition();
    return 0;
}