#include <iostream>
#include "ArrayList.cpp"

using namespace std;

class IntegerSet {
private:
    ArrayList<bool> boolList;
public:
    //constructors & destructor
    IntegerSet();
    IntegerSet(int item);
    IntegerSet(const IntegerSet& set);
    ~IntegerSet();

    //operator overload
    IntegerSet operator+(const IntegerSet& set);
    IntegerSet operator-(const IntegerSet& set);
    bool operator==(const IntegerSet& set);

    //add item to the set
    void add(int item);

    friend istream& operator>>(istream& in, IntegerSet& set)
    {
        //TODO overload the >> operator to read the set
        return in;
    }
    friend ostream& operator<<(ostream& out, const IntegerSet& set)
    {
        //TODO overload the << operator to print the set
        return out;
    }
  
};


