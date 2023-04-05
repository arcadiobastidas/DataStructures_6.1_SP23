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
    int choice;
    bool exit = false;
    
    //add firstSet to set1
     for(int i = 0; i < 5; i++)
     {
         set1.add(firstSet[i]);
     }
     //add secondSet to set2
     for(int i = 0; i < 5; i++)
     {
         set2.add(secondSet[i]);
     }



    //Implement an options Menu in the main program with the following operations:
    // 1.Print the two sets
    // 2.Union of two sets
    // 3.The intersection of two sets.
    // 4.Difference between two sets.
    // 5.Symmetric difference between two sets.
    // 6.Verify if two sets are equal.
    // 7.Print the set.
    // 8.Quit the program.


    do
    {
        cin >> choice;
        switch (choice)
        {
            // 1.Print the two sets
            case 1:
               
               cout << set1;
                break;
            // 2.Union of two sets
            case 2:
                result = set1.Union(set2);
                cout << "Union of two sets: ";
                cout <<result;
                cout << endl;
                break;
            

            default:
                cout << "Invalid choice" << endl;

            
        }
    }
    while (choice <3);
    
    

    
}
