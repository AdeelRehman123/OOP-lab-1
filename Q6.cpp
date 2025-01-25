#include <iostream>
#include <iomanip>
#include <string>

int main() {
   
    std::string firstName, lastName;
    double score1, score2, score3, score4, score5;

    std::cout << "Enter student's first name, last name, and five test scores: ";
    std::cin >> firstName >> lastName >> score1 >> score2 >> score3 >> score4 >> score5;

    double average = (score1 + score2 + score3 + score4 + score5) / 5;

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Student name: " << firstName << " " << lastName << std::endl;
    std::cout << "Test scores: " << score1 << " " << score2 << " " << score3 << " " << score4 << " " << score5 << std::endl;
    std::cout << "Average test score: " << average << std::endl;

    return 0;
}

