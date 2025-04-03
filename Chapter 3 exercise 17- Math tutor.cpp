// Chapter 3 exercise 17- Math tutor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
File Name: Chapter 3 exercise 17- Math tutor part 2 
/*
File Name: Math tutor part 2
Programmer: Olivia Ruiz
Date: 4/3/25
Requirements: Write a program that can be used as a math tutor for a young student. The program should display two random numbers to be added, such as:
 The program should then pause while the student enters there answer and if the answer is correct
 than a congratuations should be presented, if incorrect then the program should display the correct answer.
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;


int generateRandomNumber() {
    return rand() % 20 + 1;
}


int addNumbers(int num1, int num2) {
    return num1 + num2;
}


int getUserAnswer() {
    int answer;
    cout << "Your answer: ";
    cin >> answer;  
    return answer;
}


void printFeedback(int userAnswer, int correctAnswer) {
    if (userAnswer == correctAnswer) {
        cout << "Congratulations! You got it right!" << endl;
    }
    else {
        cout << "Oops! The correct answer is " << correctAnswer << "." << endl;
    }
}


int main() {
    
    srand(time(0));

   
    int num1 = generateRandomNumber();
    int num2 = generateRandomNumber();

   
    cout << "What is " << num1 << " + " << num2 << "?" << endl;

    
    int userAnswer = getUserAnswer();

    
    int correctAnswer = addNumbers(num1, num2);

    
    printFeedback(userAnswer, correctAnswer);

    return 0;
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
