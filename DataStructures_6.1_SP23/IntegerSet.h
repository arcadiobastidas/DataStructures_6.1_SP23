#ifndef _INTEGER_SET
#define _INTEGER_SET
#include "ArrayList.cpp"
#include <iostream>

//create a class called IntegerSet
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
    //declare a constructor
    IntegerSet();
    //declare a constructor with one parameter
    IntegerSet(const ArrayList<bool>& boolList);
    //
    //declare a copy constructor
    IntegerSet(const IntegerSet& integerSet);
    //declare a destructor
    ~IntegerSet();
    //declare a method called add
    void add(int number);
    //declare a method called remove
    void remove(int number);
    //declare a method called contains
    bool contains(int number);
    //declare a method called clear
    void clear();
    //declare a method called getSize
    int getSize();
    //declare a method called unionOfSets
    IntegerSet unionOfSets(IntegerSet& integerSet);
    //declare a method called intersectionOfSets
    IntegerSet intersectionOfSets(IntegerSet& integerSet);
    //declare a method called differenceOfSets
    IntegerSet differenceOfSets(IntegerSet& integerSet);
    //declare a method called isSubsetOf
    bool isSubsetOf(IntegerSet& integerSet);
    //declare a method called isEqualTo
    bool isEqualTo(IntegerSet& integerSet);
    //declare a method called printSet
    void printSet();
    //oveload the operator <<

    friend ostream& operator<<(ostream& out, const IntegerSet& integerSet)
    {
        //loop through the array
        for (int i = 0; i < integerSet.boolList.getLength(); i++) {
            //if the value at the index is true
            if (integerSet.boolList.getEntry(i)) {
                //print the index
                out << i << " ";
            }
        }
        //return the output stream
        return out;
        
    }

    //overload the operator >>
    friend istream& operator>>(istream& in, IntegerSet& integerSet);
    //overload the operator =
    IntegerSet& operator=(const IntegerSet& integerSet);
    //overload the operator +
    IntegerSet operator+(const IntegerSet& integerSet);
    //overload the operator -
    IntegerSet operator-(const IntegerSet& integerSet);
    //overload the operator *
    IntegerSet operator*(const IntegerSet& integerSet);
    //overload the operator ==
    bool operator==(const IntegerSet& integerSet);
    //overload the operator !=
    bool operator!=(const IntegerSet& integerSet);
    //overload the operator <=
    bool operator<=(const IntegerSet& integerSet);
    //overload the operator >=
    bool operator>=(const IntegerSet& integerSet);
    //overload the operator <
    bool operator<(const IntegerSet& integerSet);
    //overload the operator >
    bool operator>(const IntegerSet& integerSet);

    //overload the operator []

    
    



    
}; // end IntegerSet



#endif
