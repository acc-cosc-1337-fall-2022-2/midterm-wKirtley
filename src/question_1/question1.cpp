#include "question1.h"
#include <iostream>

char gpa_to_letter_grade(double gpa){
    char letter;
    if (gpa >= 3.5 && gpa <= 4.0){
        letter = 'A';
    }
    else if (gpa >= 3 && gpa < 3.5){
        letter = 'B';
    }
    else if (gpa >= 2 && gpa < 3){
        letter = 'C';
    }
    else if (gpa >= 1 && gpa < 2){
        letter = 'D';
    }
    else if (gpa >= 0 && gpa <1){
        letter = 'F';
    }

    return letter;
}