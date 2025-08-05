#include <iostream>
#include <string>
using namespace std;

short ReadNumber ();
void PrintNumbersFromOneToN_ForLoop (short number, bool reversed);
void PrintNumbersFromOneToN_WhileLoop (short number, bool reversed);
void PrintNumbersFromOneToN_DoWhileLoop (short number, bool reversed);
int main () {

    short number = ReadNumber();

    cout << "Using For Loop: ";
    PrintNumbersFromOneToN_ForLoop(number, false);

    cout << "\nUsing While Loop: ";
    PrintNumbersFromOneToN_WhileLoop(number, false);
    
    cout << "\nUsing Do While Loop: ";
    PrintNumbersFromOneToN_DoWhileLoop(number, false);

    cout << "\nThis is with reversed:\n";

    cout << "Using For Loop: ";
    PrintNumbersFromOneToN_ForLoop(number, true);

    cout << "\nUsing While Loop: ";
    PrintNumbersFromOneToN_WhileLoop(number, true);
    
    cout << "\nUsing Do While Loop: ";
    PrintNumbersFromOneToN_DoWhileLoop(number, true);
    
}

short ReadNumber () {
    short number;

    cout << "Could you please enter N:\n";
    cin >> number;

    return number;
}

void PrintNumbersFromOneToN_ForLoop (short number, bool reversed) {
   
    
    if (reversed) {
        for (short i = 1; i <= number; number--)
            cout << number << " "; 
    }

    else {
        for (short i = 1; i <= number; i++)
            cout << i << " "; 
    }
     
}

void PrintNumbersFromOneToN_WhileLoop (short number, bool reversed) {
    short count = 1;

    if (reversed) {
        while (count <= number) {
            cout << number << " ";
            number--;
        }
    }
    else {
        while (count <= number) {
            cout << count << " ";
            count++;
        }
    }
    
}
void PrintNumbersFromOneToN_DoWhileLoop (short number, bool reversed) {
    
    short count = 1;
    
    if (reversed) {
        do {
        
        cout << number << " ";
        number--;

    } while (count <= number);

    }
    do {
        cout << count << " ";
        count++;

    } while (count <= number);
    
}