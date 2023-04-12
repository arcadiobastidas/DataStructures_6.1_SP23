#include <iostream>
#include "ArrayList.cpp"
#include <string>

using namespace std;

class IntegerSet {
private:
    ArrayList<bool> boolList;
public:
    //default constructor
    IntegerSet();
    //copy constructor
    IntegerSet(const IntegerSet & other);
    //destructor
    ~IntegerSet();

    //accessors
    bool isEmpty() const;
    int getLength() const;
    bool contains(int position) const;
    ArrayList<bool> getBoolSet() const;

    //mutators
    void add(int position[], int size);
    void remove(int position);
    void clear();

    //union, intersection, difference, symmetric difference operators
    IntegerSet unionOfSets(const IntegerSet & other) const;
    IntegerSet intersectionOfSets(const IntegerSet & other) const;
    IntegerSet differenceOfSets(const IntegerSet & other) const;
    IntegerSet symmetricDifferenceOfSets(const IntegerSet & other) const;

    
    //overloaded operators
    IntegerSet operator+(const IntegerSet & other) const;
    IntegerSet operator-(const IntegerSet & other) const;
    bool operator==(const IntegerSet & other) const;
    friend ostream & operator<<(ostream & out, const IntegerSet & other);
    friend istream & operator>>(istream & in, IntegerSet & other);
    
    
    
};



