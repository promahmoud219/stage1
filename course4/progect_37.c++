#include <iostream>
using namespace std;


int ReadNumber (string message);
int SumOfNumbersUntilExactNumber (int guessNumber);
void PrintResult (int result);


int main () {
    PrintResult(SumOfNumbersUntilExactNumber(ReadNumber("\nCould you please enter the number until write it:\n")));
}


int SumOfNumbersUntilExactNumber (int guessNumber) {

    int number = 0;
    int counter = 0;
    
    do {
        
        counter += number;
        number = ReadNumber("\nEnter number please: \n");

    } while (number != guessNumber);

    return counter;
}

void PrintResult (int result) {
    cout << "\nthe result is:\n" << result;
}

int ReadNumber (string message) {
    int number;

    cout << message;
    cin >> number;

    return number;
}
