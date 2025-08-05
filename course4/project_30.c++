#include <iostream>
using namespace std;


void PrintResult (int number);
int ReadNumber ();
int GetFactorialNumber (int number);

int main () {
    PrintResult(GetFactorialNumber(ReadNumber()));
}

int ReadNumber () {
    int number;

    cout << "Could you please enter N:\n";
    cin >> number;

    return number;
}

void PrintResult (int number) {
    cout << "\nThe result: " << number;
}

int GetFactorialNumber (int number) {
    
    int sum = 1;
    for (int i = 1; i <= number; i++)
        sum *= i;
        

    return sum;
}




