// File Handling Program

#include <iostream>
#include <fstream>

int main() {

    std::string fileName;

    std::cout << "Enter the name of the text file you wish to open: ";
    std::cin >> fileName;

    std::ifstream inputFile; // Define file stream object
    inputFile.open(fileName); // Open 

    // Validate the input
    while(inputFile.fail()) {
        std::cout << "Invalid file name! Please try again.\n";
        std::cout << "Enter the name of the text file you wish to open: ";
        std::cin >> fileName;
        inputFile.open(fileName); // Open
    }

    std::string input;

    // Output contents of entire file;
    while(inputFile >> input) {
        std::cout << input << std::endl;
    }

    inputFile.close(); // Closes file

    std::ofstream outputFile; // Define file stream object
    outputFile.open(fileName); // Open

    std::string object1, object2, object3, object4;

    // Prompt user to input new content to be written to file:
    std::cout << "Input four new objects to overwrite the current contents of the file:\n";
    std::cout << "1: ";
    std::cin >> object1;
    std::cout << "2: ";
    std::cin >> object2;
    std::cout << "3: ";
    std::cin >> object3;
    std::cout << "4: ";
    std::cin >> object4;

    // Write new content to file:
    outputFile << object1 << std::endl;
    outputFile << object2 << std::endl;
    outputFile << object3 << std::endl;
    outputFile << object4 << std::endl;
    outputFile.close();  // Closes the file

    std::cout << "The file has been rewritten.\n";

}