#include "IntegerSet.h"

#include <iostream>

using namespace std;


int main()
{
    IntegerSet set1;
    IntegerSet set2;
    IntegerSet result;
    int firstSet[5] = {1, 2, 3, 4, 5};
    int secondSet[5] = {3, 4, 5, 6, 7};
    for (int i = 0; i < 5; i++) {
        set1.add(firstSet[i]);
        set2.add(secondSet[i]);
    }

    
}
