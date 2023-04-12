#include "IntegerSet.h"

#include <iostream>
#include <set>

using namespace std;


int main()
{
    IntegerSet set1;
    IntegerSet set2;
    IntegerSet unionOfSets;
    int item = 1;

    int test[3] = {1,2,3};
    int test2[3] = {4,2,3};
    

    set1.add(test, 3);
    set2.add(test2, 3);
    unionOfSets = set1 + set2;

    cout << unionOfSets << endl;


    
    

    return 0;
    
}
