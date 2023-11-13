#include <iostream>
#include <string>

// Задача --> Написать функцию, которая удаляет из строки все вхождения в нее заданного символа.

void RemoveAllOccurrences(std::string& str, char toRemove){
    size_t position = str.find(toRemove);

    while (position != std::string::npos){
        str.erase(position, 1);
        position = str.find(toRemove);
    }
}
void TestRemoveAllOccurrences(){
    std::string testString = "Love to programming";
    char charToRemove = 'n';

    std::cout << "Original string: " << testString << std::endl;

    RemoveAllOccurrences(testString, charToRemove);

    std::cout << "String after removing all occurrences of '" << charToRemove << "': " << testString << std::endl;
}

int main(){
    TestRemoveAllOccurrences();
    return 0;
}