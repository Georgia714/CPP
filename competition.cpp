#include <iostream>
#include <string>

/*This program was created for a fictional company that runs competitions. The task was to create a function to enable the company
to enter data (name and score) for the three finalists in a competition (first place, second place and third place). The n range is between 0 and 1000.
If a finalist scores between 900 and 1000, they are the winner; if their score is between 800 and 900, they are second place; and if their score is between
700 and 800, they are third place. The program uses a while loop which runs until three finalists and three valid scores have been entered; if the user enters a score that 
is under 700 or above 1000, the program throws up an error message and they are asked to re-enter a valid score. Once the conditions of the while loop are met,
the program outputs the name of each of the finalists and their score, in order of first place, second place, third place */


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


int main() {
    
    competition_winners();

return 0;
}
