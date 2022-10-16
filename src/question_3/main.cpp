#include <iostream>
#include "question3.h"
#include <vector>
using namespace std;

int main()
{
    int cookies;
    vector <float> resultvector;
    cout<<"Enter number of cookies to be made: "; cin>>cookies;
    resultvector = get_cookie_ingredients(cookies);
    cout<<"Cups of Sugar: "<<resultvector[0]<<"\n";
    cout<<"Cups of Butter: "<<resultvector[1]<<"\n";
    cout<<"Cups of Flour: "<<resultvector[2]<<"\n";
    return 0;
}