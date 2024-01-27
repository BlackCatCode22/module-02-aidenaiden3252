#include <iostream>
using namespace std;

int main(){

    string input;
    cout << "Please enter a word or sentence!: \n";
    cin >> input;
    
    
    int inputLength = input.length();
    int s = inputLength - 1;
    for (int i = 0; i < inputLength/2; i++ ){
        swap(input[i], input[s]);
        s = s-1;
    }
    cout << input << endl;

    return 0;
}