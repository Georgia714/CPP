#include <iostream>
#include <fstream>
#include <string>
using namespace std;

//This program creates a file that contains a username and password. It then checks the username and password supplied to log into the file.

string username, password, un, pw;

bool isLoggedIn() {
    cout << "Enter your username: ";
    cin >> un;
    cout << endl << "Enter your password: ";
    cin >> pw;
    ifstream read("C:\\" + username + ".txt");
    getline(read, username);
    getline(read, password);
    
    if (un == username && pw == password) {
        return true;
    }
    else {
        return false;
    }

}


int main() {

    int choice;
    cout << "1. Register" << endl;
    cout << "2. Login" << endl;
    cout << "Please choose 1 or 2" << endl;
    cin >> choice;

    if (choice == 1) {
        cout << "Select a username: "; cin >> username;
        cout << endl << "Select a password: "; cin >> password;
        fstream my_file;
        my_file.open("confidential.txt", ios::out);
        my_file << username << endl << password;
        my_file.close();

        main();
    }

    else if (choice == 2) {

        bool status = isLoggedIn();
        if (!status) {
            cout << "False Login!" << endl;
            system("PAUSE");
            return 0;
        }
        if (status) {
            cout << "Successfully logged in!" << endl;
            system("PAUSE");
        }

    }
    
    return 1;
    
}
