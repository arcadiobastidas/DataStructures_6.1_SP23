#include "IntegerSet.h"


IntegerSet::IntegerSet()
{
  //TODO create a method to create an empty set
}

inline IntegerSet::IntegerSet(int item)
{
  //TODO create a method to create a set with one item
}

 IntegerSet::~IntegerSet()
{
 //TODO create a method to delete a set
}

 IntegerSet::IntegerSet(const IntegerSet& set)
{
 //TODO create a method to copy a set
}

 IntegerSet IntegerSet::operator+(const IntegerSet& set)
{
 //TODO create a method to add two sets
 //overload the + operator to add two sets while removing duplicates
 
 return set;
}

 IntegerSet IntegerSet::operator-(const IntegerSet& set)
{
  //TODO create a method to subtract two sets
 return set;
}

 bool IntegerSet::operator==(const IntegerSet& set)
{
 //TODO create a method to check if two sets are equal
 
 return true;
}
 void IntegerSet::add(int item)
{
  //TODO create a method to add an item to the set

}


