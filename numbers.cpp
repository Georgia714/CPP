#include <iostream>
#include <string>

//This function takes in numbers between 0 and 30 and outputs the total sum of the odd numbers only.
void odd_sum_30() {
    int total_sum_odd;
    for (int i = 0; i<=30; i++) {
        if (i % 2 != 0) {
            total_sum_odd += i;
        }
    }
    std::cout << "The total sum of all the odd numbers between 0 and 30 is: " << total_sum_odd << "\n";
}

//This function takes in numbers between 0 and 30 and outputs each even number multiplied by 3.
void even_times_three30() {
    for (int i = 0; i < 30; i++) {
        if (i % 2 == 0) {
            std::cout << i*3 << " ";
        }
    }
}

//While the counter is less than 10, this function outputs the number.
void count_to_ten() {
    int count = 0;
    while (count < 9) {
        count++;
        if (count == 5) {
            std::cout << "The number is: " << count << ". We are halfway through.\n";
        }
        else {
            std::cout << "The number is: " << count << "\n";
        }
    }
    std::cout << "This is the end of the program.\n";
}

int main() {

    //odd_sum_30();
    //even_times_three30();
    //count_to_ten();

return 0;
}
