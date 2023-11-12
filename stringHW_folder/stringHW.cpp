#include <iostream>
#include <string>

void RemoveCharAtIndex(std::string& str, int index){
	if (index >= 0 && index < str.length()){
		str.erase(index, 1);
	}else {
		std::cout << "Invalid index!" << std::endl;
	}
}
void TestRemoveCharAtIndex(){
	std::string testString = "SomeTest88";
	int indexToRemove = 4;
	std::cout << "Original string: " << testString << std::endl;
	RemoveCharAtIndex(testString, indexToRemove);
	std::cout << "String after removing character at target index " << indexToRemove << ": " << testString << std::endl;
}

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

	std::cout << "String after removing all occurrences of " << charToRemove << ": " << testString << std::endl;
}

void InsertCharAtPosition(std::string& str, int position, char toInsert){
	if (position >= 0 && position <= str.length()){
		str.insert(position, 1, toInsert);
	}else {
		std::cout << "Invalid position" << std::endl;
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
	std::Cout << "String after inserting '" << charToInsert << "' at position " << positionToInsert << ": " << testString << std::endl;OB
}

int main(){
	TestRemoveCharAtIndex();
	TestRemoveAllOccurrences();
	TestInsertCharAtPosition();
	return 0;
}
