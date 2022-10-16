#include <iostream>
#include "question1.h"

using namespace std;

int main()
{
    char letter, choice;
    double gpa;
    do{
        cout << "Enter a value for GPA: "; cin >> gpa;
        letter = gpa_to_letter_grade(gpa);
        cout << "Letter Grade: " << letter << endl;

    }
    while (gpa < 4 && gpa > 0);
    {
        cout << "N/A" << endl;
        cout << "GPA must be between 0 and 4.0." << endl;
        cout << "Do you wish to continue? (y/n): "; cin >> choice;
        if (choice == 'y' || choice == 'Y'){
            main();
        }
        else if (choice == 'n' || choice == 'N'){
            return 0;
        }
    }

    return 0;
}
