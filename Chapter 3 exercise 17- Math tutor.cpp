// Chapter 3 exercise 17- Math tutor.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/*
File Name: Chapter 3 exercise 17- Math tutor
GitHub:
Programmer: Olivia Ruiz
Date: 2/11/25
Requirments: Write a program that can be used as a math tutor for a young student. The program should display two random numbers to be added, such as:
 The program should then pause while the student works on the problem. When the student is ready to check the answer, he or she can press a key and the program will display the correct solution.                                                   
*/
#include <iostream>
#include <cstdlib>  
#include <ctime>    
#include <conio.h>  
using namespace std;

int main() {
    
    srand(static_cast<unsigned int>(time(0)));

    
    int num1 = rand() % 900 + 1;
    int num2 = rand() % 900 + 1;

   
    cout << "What is " << num1 << " + " << num2 << "?" << endl;

 
    cout << "Press any key when you're ready to check your answer..." << endl;
    while (!_kbhit()) {
        
    }


    _getch();  


    int correctAnswer = num1 + num2;

 
    cout << num1 << " + " << num2 << " = " << correctAnswer << endl;

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
