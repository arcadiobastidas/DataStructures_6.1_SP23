#include "IntegerSet.h"

// IntegerSet::IntegerSet() : boolList((MAX_VALUE - MIN_VALUE + 1), false) {
// }

IntegerSet::IntegerSet()
{
    //set all the values in the ArrayList to false
    for (int i = 0; i < boolList.getLength(); i++) {
        boolList.setEntry(i, false);
    }
}

IntegerSet::IntegerSet(const ArrayList<bool>& boolList) {
    if (boolList.getLength() != MAX_VALUE - MIN_VALUE + 1) {
        throw std::invalid_argument("boolList must have length 101.");
    }
    this->boolList = boolList;
}

IntegerSet::IntegerSet(const IntegerSet& set) : boolList(set.boolList) {
    this->boolList = set.boolList;
}

IntegerSet::~IntegerSet() {

}

void IntegerSet::add(int number)
{
    //check if the number is in the range
    if (number < MIN_VALUE || number > MAX_VALUE) {
        throw invalid_argument("number must be between 0 and 100.");
    }
    //set the value at the index of the number to true
    boolList.setEntry(number - MIN_VALUE + 1, true);
}

void IntegerSet::remove(int number)
{
    //check if the number is in the range
    if (number < MIN_VALUE || number > MAX_VALUE) {
        throw invalid_argument("number must be between 0 and 100.");
    }
    //set the value at the index of the number to false
    boolList.setEntry(number - MIN_VALUE + 1, false);
    
}

void IntegerSet::clear()
{
    //loop through the array
    for (int i = 0; i < boolList.getLength(); i++) {
        //set the value at the index to false
        boolList.setEntry(i, false);
    }
    
}

bool IntegerSet::contains(int number)
{
    //check if the number is in the range
    if (number < MIN_VALUE || number > MAX_VALUE) {
        throw invalid_argument("number must be between 0 and 100.");
    }
}

int IntegerSet::getSize()
{
    //declare a variable to store the size
    int size = 0;
    //loop through the array
    for (int i = 0; i < boolList.getLength(); i++) {
        //if the value at the index is true
        if (boolList.getEntry(i)) {
            //increment the size
            size++;
        }
    }
    //return the size
    return size;
}

IntegerSet IntegerSet::unionOfSets(IntegerSet& integerSet)
{
    //declare a new IntegerSet
    IntegerSet newSet;
    //loop through the array
    for (int i = 0; i < boolList.getLength(); i++) {
        //if the value at the index is true
        if (boolList.getEntry(i) || integerSet.boolList.getEntry(i)) {
            //set the value at the index to true
            newSet.boolList.setEntry(i, true);
        }
    }
    //return the new IntegerSet
    return newSet;
    
}

IntegerSet IntegerSet::intersectionOfSets(IntegerSet& integerSet)
{
    //declare a new IntegerSet
    IntegerSet newSet;
    //loop through the array
    for (int i = 0; i < boolList.getLength(); i++) {
        //if the value at the index is true
        if (boolList.getEntry(i) && integerSet.boolList.getEntry(i)) {
            //set the value at the index to true
            newSet.boolList.setEntry(i, true);
        }
    }
    //return the new IntegerSet
    return newSet;
}

IntegerSet IntegerSet::differenceOfSets(IntegerSet& integerSet)
{
    //declare a new IntegerSet
    IntegerSet newSet;
    //loop through the array
    for (int i = 0; i < boolList.getLength(); i++) {
        //if the value at the index is true
        if (boolList.getEntry(i) && !integerSet.boolList.getEntry(i)) {
            //set the value at the index to true
            newSet.boolList.setEntry(i, true);
        }
    }
    //return the new IntegerSet
    return newSet;
}

bool IntegerSet::isSubsetOf(IntegerSet& integerSet)
{
    //loop through the array
    for (int i = 0; i < boolList.getLength(); i++) {
        //if the value at the index is true
        if (boolList.getEntry(i) && !integerSet.boolList.getEntry(i)) {
            //return false
            return false;
        }
    }
    //return true
    return true;
}

bool IntegerSet::isEqualTo(IntegerSet& integerSet)
{
    //loop through the array
    for (int i = 0; i < boolList.getLength(); i++) {
        //if the value at the index is true
        if (boolList.getEntry(i) != integerSet.boolList.getEntry(i)) {
            //return false
            return false;
        }
    }
    //return true
    return true;
}

void IntegerSet::printSet()
{
    //loop through the array
    for (int i = 0; i < boolList.getLength(); i++) {
        //if the value at the index is true
        if (boolList.getEntry(i)) {
            //print the index
            cout << i + MIN_VALUE - 1 << " ";
        }
    }
}



istream& operator>>(istream& in, IntegerSet& integerSet)
{
    //declare a variable to store the input
    int input = 0;
    //loop until the user enters -1
    while (input != -1) {
        //get the input
        in >> input;
        //if the input is not -1
        if (input != -1) {
            //add the input to the IntegerSet
            integerSet.add(input);
        }
    }
    //return the input stream
    return in;
}

IntegerSet& IntegerSet::operator=(const IntegerSet& integerSet)
{
    //check if the IntegerSet is not equal to the IntegerSet being assigned
    if (this != &integerSet) {
        //loop through the array
        for (int i = 0; i < boolList.getLength(); i++) {
            //set the value at the index to the value at the index of the IntegerSet being assigned
            boolList.setEntry(i, integerSet.boolList.getEntry(i));
        }
    }
    //return the IntegerSet
    return *this;
    
}

IntegerSet IntegerSet::operator+(const IntegerSet& integerSet)
{
    //declare a new IntegerSet
    IntegerSet newSet;
    //loop through the array
    for (int i = 0; i < boolList.getLength(); i++) {
        //if the value at the index is true
        if (boolList.getEntry(i) || integerSet.boolList.getEntry(i)) {
            //set the value at the index to true
            newSet.boolList.setEntry(i, true);
        }
    }
    //return the new IntegerSet
    return newSet;
    
}

IntegerSet IntegerSet::operator-(const IntegerSet& integerSet)
{
    //declare a new IntegerSet
    IntegerSet newSet;
    //loop through the array
    for (int i = 0; i < boolList.getLength(); i++) {
        //if the value at the index is true
        if (boolList.getEntry(i) && !integerSet.boolList.getEntry(i)) {
            //set the value at the index to true
            newSet.boolList.setEntry(i, true);
        }
    }
    //return the new IntegerSet
    return newSet;
    
}

IntegerSet IntegerSet::operator*(const IntegerSet& integerSet)
{
    //declare a new IntegerSet
    IntegerSet newSet;
    //loop through the array
    for (int i = 0; i < boolList.getLength(); i++) {
        //if the value at the index is true
        if (boolList.getEntry(i) && integerSet.boolList.getEntry(i)) {
            //set the value at the index to true
            newSet.boolList.setEntry(i, true);
        }
    }
    //return the new IntegerSet
    return newSet;
}

bool IntegerSet::operator==(const IntegerSet& integerSet)
{
    //loop through the array
    for (int i = 0; i < boolList.getLength(); i++) {
        //if the value at the index is true
        if (boolList.getEntry(i) != integerSet.boolList.getEntry(i)) {
            //return false
            return false;
        }
    }
    //return true
    return true;
    
}

bool IntegerSet::operator!=(const IntegerSet& integerSet)
{
    //loop through the array
    for (int i = 0; i < boolList.getLength(); i++) {
        //if the value at the index is true
        if (boolList.getEntry(i) != integerSet.boolList.getEntry(i)) {
            //return true
            return true;
        }
    }
    //return false
    return false;
    
}

bool IntegerSet::operator<=(const IntegerSet& integerSet)
{
    //loop through the array
    for (int i = 0; i < boolList.getLength(); i++) {
        //if the value at the index is true
        if (boolList.getEntry(i) != integerSet.boolList.getEntry(i)) {
            //return false
            return false;
        }
    }
    //return true
    return true;
    
}

bool IntegerSet::operator>=(const IntegerSet& integerSet)
{
    //loop through the array
    for (int i = 0; i < boolList.getLength(); i++) {
        //if the value at the index is true
        if (boolList.getEntry(i) != integerSet.boolList.getEntry(i)) {
            //return false
            return false;
        }
    }
    //return true
    return true;
    
}

bool IntegerSet::operator<(const IntegerSet& integerSet)
{
    // loop through the array
    for (int i = 0; i < boolList.getLength(); i++) {
        // if the value at the index is true
        if (boolList.getEntry(i) != integerSet.boolList.getEntry(i)) {
            // return false
            return false;
        }
    }
    // return true
    return true;
    
}

bool IntegerSet::operator>(const IntegerSet& integerSet)
{
    // loop through the array
    for (int i = 0; i < boolList.getLength(); i++) {
        // if the value at the index is true
        if (boolList.getEntry(i) != integerSet.boolList.getEntry(i)) {
            // return false
            return false;
        }
    }
    // return true
    return true;
    
}


