#include <iostream>
#include "question4.h"
using namespace std;

int get_fib_sequence(int num){
    if(num == 0){
        return 0;
    }
    else if(num==1){
        return 1;
    }

    return get_fib_sequence(num - 1)+get_fib_sequence(num - 2);


}

