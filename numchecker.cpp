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

