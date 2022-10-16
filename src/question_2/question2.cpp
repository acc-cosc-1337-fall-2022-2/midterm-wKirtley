#include "question2.h"
#include <iostream>
#include <cmath>
using namespace std;

double get_dna_p_distance(const string &str1, const string &str2){
    double diff = 0.0;
    for (int i = 0; i < str1.length(); i++){
        if(str1[i] != str2[i]){
            diff += 1.0;
        }
    }
    double ratio = diff / str1.length();
    ratio = std::round(ratio * 10000.0) / 10000.0;
    return ratio;
}

