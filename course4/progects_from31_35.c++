#include <iostream>
using namespace std;


const unsigned short GRADE_A = 90;
const unsigned short GRADE_B = 80;
const unsigned short GRADE_C = 70;
const unsigned short GRADE_D = 60;
const unsigned short GRADE_E = 46;


enum enGradeLetters {EXCELLENT = 0, VERY_GOOD = 1, GOOD = 2, PASS = 3, PASS_WITH_HELP = 4, FAIL = 5};
void PrintResult (long long result);
int ReadNumber (string message);
long long PowerOfNumTimes (int base, int exponent);


enGradeLetters GetLetterGrade (unsigned short grade); 
void PrintStudentGrade (enGradeLetters gradeResult);


int main () {

    /*
    progect 31 and 32
    int number = ReadNumber("\nCould you please enter the base:\n");
    int power = ReadNumber("\nCould you enter the exponent:\n");
    PrintResult(PowerOfNumTimes(number, power));
    */

    PrintStudentGrade(GetLetterGrade(ReadNumber("could you please enter your grade:\n")));

}

void PrintStudentGrade (enGradeLetters gradeResult) {
    
    cout << "\nYour Grade Letter: \n";

    switch (gradeResult)
    {
    case enGradeLetters::EXCELLENT:
        cout << "A";
        break;
    
    case enGradeLetters::VERY_GOOD:
        cout << "B";
        break;
    
    case enGradeLetters::GOOD:
        cout << "C";
        break;
    
    case enGradeLetters::PASS:
        cout << "D";
        break;
    
    case enGradeLetters::PASS_WITH_HELP:
        cout << "E";
        cout << "\nAnd you pssed with help, study hard :-)";
        break;
    
    case enGradeLetters::FAIL:
        cout << "F";
        break;
    
    default:
        cout << "\n\nThere is a tecknical error in PrintStudentGrade function :-(";
        break;
    }
}

enGradeLetters GetLetterGrade (unsigned short grade) {

    if (grade >= GRADE_A)
        return enGradeLetters::EXCELLENT;

    else if (grade >= GRADE_B) 
        return enGradeLetters::VERY_GOOD;
        
    else if (grade >= GRADE_C)
        return enGradeLetters::GOOD;
    
    else if (grade >= GRADE_D)
        return enGradeLetters::PASS;
    
    else {
        if (grade >= GRADE_E)
            return enGradeLetters::PASS_WITH_HELP;
        else 
            return enGradeLetters::FAIL;            
    }
    
    
}



long long PowerOfNumTimes (int base, int exponent) {
    long long result = 1;
    for (int i = 0; i < exponent; i++)
        result *= base;
    
    return result;

}

int ReadNumber (string message) {
    int number;

    cout << message;
    cin >> number;

    return number;
}

void PrintResult (long long result) {
    cout << "\nThe result: " << result;
}
