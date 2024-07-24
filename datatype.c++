// #types of datasets in c++ language
'''
int: Used to store integers (whole numbers).
float: Used to store floating-point numbers (decimals).
double: Used for double-precision floating-point numbers (more precision than float).
char: Used to store a single character.
bool: Used to store a boolean value (true or false).
string: Used to store a sequence of characters (text).'''



#include <iostream>
#include <string> // Include the string library

int main() {
    // Declare variables
    int age = 25; // Integer variable
    float height = 5.9; // Float variable
    double weight = 70.5; // Double variable
    char initial = 'A'; // Character variable
    bool isStudent = true; // Boolean variable
    std::string name = "John Doe"; // String variable

    // Output the variables
    std::cout << "Name: " << name << std::endl;
    std::cout << "Initial: " << initial << std::endl;
    std::cout << "Age: " << age << std::endl;
    std::cout << "Height: " << height << " feet" << std::endl;
    std::cout << "Weight: " << weight << " kg" << std::endl;
    std::cout << "Is Student: " << (isStudent ? "Yes" : "No") << std::endl;

    return 0;
}