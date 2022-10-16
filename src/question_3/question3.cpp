#include "question3.h"
#include <iostream>
#include <vector>
using namespace std;

vector <float> get_cookie_ingredients(int cookies){
    double sugar;
    double butter;
    double flour;
    sugar = cookies * (1.5/48);
    butter = cookies * (1.0/48);
    flour = cookies * (2.75/48);
    vector <float> result;
    result.push_back(sugar);
    result.push_back(butter);
    result.push_back(flour);
    return result;
}