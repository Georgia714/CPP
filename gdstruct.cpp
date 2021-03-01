#include <iostream>
#include <string>
#include <typeinfo>
using namespace std;


/*In this program, I created a struct for a company with individual employee details, 
then created a function which makes it possible to identify which department an employee works in by searching their employee ID number*/

struct Employees{
    string name;
    string surname;
    int employee_number;
    string department;

};

Employees employee_1{"George", "Rogers", 1254325, "IT"};
Employees employee_2{"Matthew", "Clarke", 2354268, "HR"};
Employees employee_3{"Sarah", "Medows", 6521538, "Development"};
Employees employee_4{"Anita", "Singh", 5678456, "Marketing"};
Employees employee_5{"Patrick", "Smith", 5236863, "HR"};
Employees employee_6{"Samantha", "Xi", 3046576, "Development"};
Employees employee_7{"Bruce", "Vegas", 5476378, "Marketing"};
Employees employee_8{"Riona", "Ablah", 7953134, "IT"};

void department_searcher() {

    /*creates an array to iterate through the employees created with the Employee struct, check if the employee exists, 
    and if true return the employee's name and department based on the ID number entered by the user.*/
    Employees employeeRecord[] {employee_1, employee_2, employee_3, employee_4, employee_5, employee_6, employee_7, employee_8};
    const int numEmployees{sizeof(employeeRecord)/sizeof(employeeRecord[0])};
    int id_number{0};
    bool employeeExists;
    int count{0};

    cout << "Enter the employee's ID number: ";
    cin >> id_number;

    for (int i = 0; i < numEmployees; i++) {
        if (employeeRecord[i].employee_number == id_number) {
            cout << "Employee number: " << employeeRecord[i].employee_number << ".\n";
            cout << employeeRecord[i].name << " " << employeeRecord[i].surname << " works in the " << employeeRecord[i].department << " department.\n";
            employeeExists = true;
            }
        count++;
        }
        if (count == numEmployees && employeeExists == false) {
            cout << "No employee exists with that ID number.\n";
        }
    }



int main() {

    department_searcher();
    return 0;
}
