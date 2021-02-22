#include <iostream>


int getValueFromUser() {
    
    std::cout << "Enter an integer: ";
    int input{};
    std::cin >> input;
    
    return input;

}

//Task instruction: Only input from a user is allowed, you can’t assign values to variables.

int main() {

    int input_1 {getValueFromUser()};
    int input_2 {getValueFromUser()};
    std::cout << input_1 << " + " << input_2 << " = " << input_1 + input_2 << "\n";
    /* or
    std::cout << getValueFromUser() + getValueFromUser();
    return 0;*/

}