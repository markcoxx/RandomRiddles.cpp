#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>

std::vector<std::string> riddles;
std::vector<std::string> answers;

void initRiddles() {
    riddles.push_back("I am not alive, but I grow; I don't have lungs, but I need air; I don't have a mouth, but water kills me. What am I?");
    answers.push_back("fire");
    riddles.push_back("I am taken from a mine, and shut up in a wooden case, from which I am never released, and yet I am used by almost every person. What am I?");
    answers.push_back("pencil lead");
    riddles.push_back("I am not alive, but I grow; I don't have lungs, but I need air; I don't have a mouth, but water kills me. What am I?");
    answers.push_back("fire");
}

void generateRiddle() {
    srand(time(0));
    int index = rand() % riddles.size();
    std::cout << "Riddle: " << riddles[index] << std::endl;
    std::cout << "Answer: ";
    std::string guess;
    std::cin >> guess;
    if (guess == answers[index]) {
        std::cout << "Correct!" << std::endl;
    } else {
        std::cout << "Incorrect, the answer is " << answers[index] << "." << std::endl;
    }
}

int main() {
    initRiddles();
    generateRiddle();
    return 0;
}
