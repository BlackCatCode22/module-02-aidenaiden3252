#include <iostream>
#include <algorithm>
using namespace std;

void die(){
    if(cin.fail()){
        cout << "Only enter numbers!";
        exit(0);
    }
}

void getAnIntFromTheUser(){
    int intInput = 0;
    cout << "Please enter a number and i'll print you what you put: ";
    cin >> intInput;
    die();
    cout << "The number you chose was " << intInput << ".\n" << endl;
}

void compareTwoInts(){
    int compareInput1, compareInput2 = 0;
    cout << "Please enter two numbers and I will tell you which one is higher than the other! \n";
    cout << "Enter first number: "; cin >> compareInput1; die();
    cout << "Enter second numnber: "; cin >> compareInput2; die(); 
    int intResult = max(compareInput1, compareInput2);
    cout << "The highest number you have given me is " << intResult << "!\n" << endl;
}

void sumTwoInts(){
    int input1, input2 = 0;
    cout << "Give me two numbers and I will give you the sum of them!: \n";
    cout << "Enter first number: "; cin >> input1; die();
    cout << "Enter second number: "; cin >> input2; die();
    cout << (input1 + input2) << endl << endl;
}

int main(){

    getAnIntFromTheUser();
    compareTwoInts();
    sumTwoInts();


    return 0;
}