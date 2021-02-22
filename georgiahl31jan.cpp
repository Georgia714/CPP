#include <iostream>
#include <string>

//competition winners exercise slide37
void competition_winners() {
    int count = 0;
    std::string name, winner1, winner2, winner3;
    int score, winner1_score, winner2_score, winner3_score;

    while (count != 3) {
        std::cout << "Enter the name of the competition winner: ";
        std::cin >> name;
        std::cout << "\nEnter the competition winner's score: ";
        std::cin >> score;

        if (score >= 900 && score <= 1000) {
            winner1 = name;
            winner1_score = score;
            count++;
            }

        else if (score >= 800 && score < 900) {
            winner2 = name;
            winner2_score = score;
            count++;
            }

        else if (score >= 700 && score < 800) {
            winner3 = name;
            winner3_score = score;
            count++;
            }
        else /*if (score < 700 && score > 1000)*/ {
            std::cout << "\nThat score is invalid. The three competition winners' scores should be between 700 and 1,000.\n";
        }
}
        std::cout << "\n" << winner1 << " is the winner with a score of " << winner1_score << ".\n\n";
        std::cout << winner2 << " is second place with a score of " << winner2_score << ".\n\n";
        std::cout << winner3 << " is third place with a score of " << winner3_score << ".\n\n";
}




//slide38 no.1 print the sum of all odd numbers 0-30
void odd_sum_30() {
    int total_sum_odd;
    for (int i = 0; i<=30; i++) {
        if (i % 2 != 0) {
            total_sum_odd += i;
        }
    }
    std::cout << "The total sum of all the odd numbers between 0 and 30 is: " << total_sum_odd << "\n";
}

//slide38 no.2 multiple each even number 0-30 by three
void even_times_three30() {
    for (int i = 0; i < 30; i++) {
        if (i % 2 == 0) {
            std::cout << i*3 << " ";
        }
    }
}

//slide38 no.3
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
    competition_winners();

return 0;
}