#include <iostream>
#include <string>

// Задача --> Написать функцию, которая удаляет из строки символ с заданным номером.

void RemoveCharAtIndex(std::string& str, int index){
    if (index >= 0 && index < str.length()){
        str.erase(index, 1);
    }else {
        std::cerr << "Invalid index!" << std::endl;
    }
}
void TestRemoveCharAtIndex(){
    std::string testString = "SomeTestString";
    int indexToRemove = 4;
    std::cout << "Original string: " << testString << std::endl;
    RemoveCharAtIndex(testString, indexToRemove);
    std::cout << "String after removing character at target index " << indexToRemove << ": " << testString << std::endl;
}

int main(){
    TestRemoveCharAtIndex();
    return 0;
}