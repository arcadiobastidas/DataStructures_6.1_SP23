#ifndef _INTEGER_SET
#define _INTEGER_SET
#include "ArrayList.cpp"
#include <iostream>

using namespace std;



class IntegerSet
{
//declare one attribute called boolList of ArrayList<bool> type
    private:
    ArrayList<bool> boolList;
    //declare a constant called MIN_VALUE
    static const int MIN_VALUE = 0;
    //declare a constant called MAX_VALUE
    static const int MAX_VALUE = 100;

     

public:
    //define a constructor
IntegerSet()
{
}

//define a constructor with one parameter
IntegerSet(ArrayList<bool> boolList)
{
    //set the attribute boolList to the parameter boolList
    this->boolList=boolList;
}

//define a function called add
void add(int element)
{
    //add the element to the boolList
    boolList.insert(element, true);
}

//define a function called remove
void remove(int element)
{
    //create a for loop that iterates through the boolList to find the element
    for(int i=0; i<boolList.getLength(); i++)
    {
        //if the element is found
        if(boolList[i]==element)
        {
            //remove the element from the boolList
            boolList.remove(i);
        }
    }
}

//define a function called clear
void clear()
{
    boolList.clear();
}

//define a function called isEmpty
bool isEmpty()
{
    if(boolList.isEmpty())
    {
        return true;
    }
    return false;
}

//define a function called contains
bool contains(int element)
{
    //create a for loop to find the element using getEntry
    for(int i=0; i<boolList.getLength(); i++)
    {
        //if the element is found
        if(boolList[i]==element)
        {
            return true;
        }
    }
    return false;
}

//define a function called unionOfSets
IntegerSet unionOfSets(IntegerSet& set2)
{
    //create a new IntegerSet called unionSet
    IntegerSet unionSet;
    //create a for loop to iterate through the boolList
    for(int i=0; i<boolList.getLength(); i++)
    {
        //add the element to the unionSet
        unionSet.add(boolList[i]);
    }
    //create a for loop to iterate through the boolList of set2
    for(int i=0; i<set2.boolList.getLength(); i++)
    {
        //add the element to the unionSet
        unionSet.add(set2.boolList[i]);
    }
    //return the unionSet
    return unionSet;
}

//define a function called intersectionOfSets
IntegerSet intersectionOfSets(IntegerSet& set2)
{
    //create a new IntegerSet called intersectionSet
    IntegerSet intersectionSet;
    //create a for loop to iterate through the boolList
    for(int i=0; i<boolList.getLength(); i++)
    {
        //if the element is found in set2
        if(set2.contains(boolList[i]))
        {
            //add the element to the intersectionSet
            intersectionSet.add(boolList[i]);
        }
    }
    //return the intersectionSet
    return intersectionSet;
    
}

//define a function called differenceOfSets
IntegerSet differenceOfSets(IntegerSet& set2)
{
    //create a new IntegerSet called differenceSet
    IntegerSet differenceSet;
    //create a for loop to iterate through the boolList
    for(int i=0; i<boolList.getLength(); i++)
    {
        //if the element is not found in set2
        if(!set2.contains(boolList[i]))
        {
            //add the element to the differenceSet
            differenceSet.add(boolList[i]);
        }
    }
    //return the differenceSet
    return differenceSet;
}

//define a function called printSet
void printSet()
{
    //create a for loop to iterate through the boolList
    for(int i=0; i<boolList.getLength(); i++)
    {
        //print the element
        cout<<boolList.getEntry(i)<<" ";
    }
    cout<<endl;
    
}
    //overload the operator<<
    friend ostream& operator<<(ostream& out, const IntegerSet& set)
    {
        //create a for loop to iterate through the boolList
        for(int i=0; i<set.boolList.getLength(); i++)
        {
            //print the element
            out<<set.boolList.getEntry(i)<<" ";
        }
        out<<endl;
        return out;
    }

    //overload the operator>>
    friend istream& operator>>(istream& in, IntegerSet& set)
    {
        //declare an integer called element
        int element;
        //read the element
        in>>element;
        //add the element to the boolList
        set.add(element);
        return in;
    }
};
#endif
