#include <iostream>
using namespace std;


enum enOddOrEven {odd = 0, even = 1};

short ReadNumber ();
short SumOddNumbersFromOneToN (short number);
enOddOrEven IsOddNumber (short number);
void PrintResult (short number);


int main () {


    PrintResult(SumOddNumbersFromOneToN(ReadNumber()));

}


void PrintResult (short number) {
    cout << "\nThe result: " << number;
}

enOddOrEven IsOddNumber (short number) {

    if (number % 2 != 0) 
        return enOddOrEven::odd;
    else
        return enOddOrEven::even;

}
short ReadNumber () {
    short number;

    cout << "Could you please enter N:\n";
    cin >> number;

    return number;
}

short SumOddNumbersFromOneToN (short number) {
    
    short count = 0;

    for (short i = 1; i <= number; i++) {
        if (IsOddNumber(i) == enOddOrEven::odd)
            count += i;
    }

    return count;
}