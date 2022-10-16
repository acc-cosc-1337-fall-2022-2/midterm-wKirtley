#include "question4.h"
#include <iostream>
using namespace std;


int main()
{
    int num;
    int fib;
    cout << "Enter value for fib sequence: "; cin >> num;
    fib = get_fib_sequence(num);
    cout << fib << endl;
}