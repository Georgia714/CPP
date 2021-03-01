#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;

/*This program asks the user to enter a number between 1 and 9. If the number is invalid, the program asks the user to enter a valid number. Once the user
has entered a valid number, the program checks if it is the array of numbers (it nums[]). If it is, the program returns the index of that number in the array.*/

void numListChecker() {
    int nums[] {4,6,7,3,8,2,1,5,9};
    const int lengthNums{sizeof(nums)/sizeof(nums[0])}; 
    //bool validNum;
    int userInput;
    cout << "Enter a number from 1 to 9: ";
    cin >> userInput;
    //if (userInput < 1 )
    while (userInput < 1 || userInput > 9) {
        cout << "That is number is not between 1 and 9. Please enter a valid number: ";
        cin >> userInput;
    }
        
    for (int i = 0; i < lengthNums; i++) {
        if (userInput == nums[i]) {
            cout << "You entered " << userInput << " which is in the list.\n";
            cout << "The full list is: ";
            for (int i = 0; i < lengthNums; i++) {
                cout << nums[i] <<" ";
            }
        }
    }
}

int main() {

    numListChecker();
    return 0;
}
