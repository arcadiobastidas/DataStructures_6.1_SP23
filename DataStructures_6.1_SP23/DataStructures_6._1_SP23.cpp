#include "IntegerSet.h"

#include <iostream>

using namespace std;


int main()
{
    IntegerSet set1;
    IntegerSet set2;

    //Implement an options Menu in the main program with the following operations:
    //1. Add an element to set1
    //2. Add an element to set2
    //3. Remove an element from set1
    //4. Remove an element from set2
    //5. Clear set1
    //6. Clear set2
    //7. Check if an element is in set1
    //8. Check if an element is in set2
    //9. Print set1
    //10. Print set2
    //11. Print the union of set1 and set2
    //12. Print the intersection of set1 and set2
    //13. Print the difference of set1 and set2
    //14. Print the difference of set2 and set1
    //15. Exit

    int choice;
    bool exit = false;

    do
    {
        switch (choice)
        {
            //1. Add an element to set1
            case 1:
                int element;
                cout << "Enter an element to add to set1: ";
                cin >> element;
                set1.add(element);
                break;
            //2. Add an element to set2
            case 2:
                cout << "Enter an element to add to set2: ";
                cin >> element;
                set2.add(element);
                break;
            //3. Remove an element from set1
            case 3:
                cout << "Enter an element to remove from set1: ";
                cin >> element;
                set1.remove(element);
                break;
            //4. Remove an element from set2
            case 4:
                cout << "Enter an element to remove from set2: ";
                cin >> element;
                set2.remove(element);
                break;
            //5. Clear set1
            case 5:
                set1.clear();
                break;
            //6. Clear set2
            case 6:
                set2.clear();
                break;
            //7. Check if an element is in set1
            case 7:
                cout << "Enter an element to check if it is in set1: ";
                cin >> element;
                if (set1.contains(element))
                {
                    cout << element << " is in set1." << endl;
                }
                else
                {
                    cout << element << " is not in set1." << endl;
                }
                break;
            //8. Check if an element is in set2
            case 8:
                cout << "Enter an element to check if it is in set2: ";
                cin >> element;
                if (set2.contains(element))
                {
                    cout << element << " is in set2." << endl;
                }
                else
                {
                    cout << element << " is not in set2." << endl;
                }
                break;
            //9. Print set1
            case 9:
                cout << "Set1: ";
                cout << set1;
                break;
            //10. Print set2
            case 10:
                cout << "Set2: ";
                cout << set2;
                break;
            //11. Print the union of set1 and set2
            case 11:
                cout << "Union of set1 and set2: ";
                cout << set1 + set2;
                break;
            //12. Print the intersection of set1 and set2
            case 12:
                cout << "Intersection of set1 and set2: ";
                cout << set1 * set2;
                break;
            //13. Print the difference of set1 and set2
            case 13:
                cout << "Difference of set1 and set2: ";
                cout << set1 - set2;
                break;
            //14. Print the difference of set2 and set1
            case 14:
                cout << "Difference of set2 and set1: ";
                cout << set2 - set1;
                break;
            //15. Exit



            
        }
    }
    while (true);
    
    

    
}
