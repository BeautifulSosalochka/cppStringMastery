#include <iostream>
#include <string>
#include <fstream>

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
	std::cout << "String after inserting '" << charToInsert << "' at position " << positionToInsert << ": " << testString << std::endl;OB
}

double CalculateAverage(std::string& grades) {
    int grade;
    int sum = 0;
    int count = 0;
    size_t pos = 0;

    while ((pos = grades.find(';')) != std::string::npos) {
        grade = std::stoi(grades.substr(0, pos));
        sum += grade;
        ++count;
        grades.erase(0, pos + 1);
    }
    if (!grades.empty()) {
        grade = std::stoi(grades);
        sum += grade;
        ++count;
    }
    return count > 0 ? static_cast<double>(sum) / count : 0.0;
}

void ProcessFile(const std::string& inputFileName, const std::string& outputFileName) {
    std::ifstream inputFile(inputFileName);
    std::ofstream outputFile(outputFileName);
    if (!inputFile.is_open() || !outputFile.is_open()) {
        std::cerr << "Exception is thrown" << std::endl;
        return;
    }
    std::string line;
    while (std::getline(inputFile, line)) {
        size_t pos = line.find(';');
        if (pos != std::string::npos) {
            std::string name = line.substr(0, pos);
            std::string grades = line.substr(pos + 1);
            double average = CalculateAverage(grades);
            outputFile << name << " -> " << average << std::endl;
        }
    }
    inputFile.close();
    outputFile.close();
}

int main(){
	TestRemoveCharAtIndex();
	TestRemoveAllOccurrences();
	TestInsertCharAtPosition();
	return 0;
}
