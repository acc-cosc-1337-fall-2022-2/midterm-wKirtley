#include <iostream>
#include "question2.h"
#include <cmath>
using namespace std;

int main()
{
    double ratio = get_dna_p_distance("GAGCCTACTAACGGGAT", "CATCGTAATGACGGCCT");
    cout << "p-distance: " << ratio << "\n";

    return 0;
}