#include <iostream>
using namespace std;

void die(){
    if(cin.fail()){
        cout << "Only enter numbers or decimals!";
        exit(0);
    }
}

void largestOfThree(float input1, float input2, float input3){

    if(input1 > input2 && input1 > input3){
        cout << "The highest number is " << input1 << "!\n";
        die();
    }
    else if(input2 > input1 && input2 > input3){
        cout << "The highest number is " << input2 << "!\n";
        die();
    }
    else if(input3 > input1 && input3 > input2){
        cout << "The highest number is " << input3 << "!\n";
        die();
    }
    else if(input1 == input2 && input1 == input3){
        cout << "All numbers are equal!";
        die();
    }
    else if (input1 == input2 && input1 != input3){
        cout << "Both of these numbers are equal " << input1 << ", " << input2 << endl;
        die();
    }
    else if(input2 == input3 && input1 != input2){
        cout << "Both of these numbers are equal " << input2 << ", " << input3 << endl;
        die();
    } 

} 


int main(){

    float input1, input2, input3 = 0;

    cout << "Please enter three numbers and I will tell you the largest number of the three!: \n";
    cout << "Enter first number: "; cin >> input1;
    cout << "Enter second number: "; cin >> input2;
    cout << "Enter third number: "; cin >> input3;

    largestOfThree(input1, input2, input3);


    return 0;
}