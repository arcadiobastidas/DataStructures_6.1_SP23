#include "IntegerSet.h"



 IntegerSet::IntegerSet()
{

     for(int i = 1; i <= 100; i++)
     {
            this->boolList.insert(i, false);
     }
        
}

IntegerSet::IntegerSet(const IntegerSet& other)
{
   this->boolList = other.getBoolSet();
}

 IntegerSet::~IntegerSet()
{
     //destructor
}

bool IntegerSet::isEmpty() const
{
     return boolList.isEmpty();
}

int IntegerSet::getLength() const
{
     return boolList.getLength();
}

bool IntegerSet::contains(int position) const
{
     return boolList.getEntry(position);
}

void IntegerSet::add(int positions[],int size)
{
    //add to set
     for(int i = 0; i < size; i++)
     {
         this->boolList.setEntry(positions[i], true);
     }

           
}

ArrayList<bool> IntegerSet::getBoolSet() const
{
    return boolList;
}


void IntegerSet::remove(int position)
{
      boolList.setEntry(position, false);
}

void IntegerSet::clear()
{
     boolList.clear();
}

IntegerSet IntegerSet::unionOfSets(const IntegerSet& other) const
{
  //create union of sets
      IntegerSet temp;
     
     for(int i = 1; i < 100; i++)
     {
         if(boolList.getEntry(i) || other.boolList.getEntry(i))
             if(boolList.getEntry(i))
                 temp.boolList.insert(i, true);

         if (other.boolList.getEntry(i))
             temp.boolList.insert(i, true);
     }
     return temp;
}

IntegerSet IntegerSet::intersectionOfSets(const IntegerSet& other) const
{
    //create intersection of sets
      IntegerSet temp;
     
     for(int i = 1; i < 100; i++)
     {
         if(boolList.getEntry(i) || other.boolList.getEntry(i))
             if(boolList.getEntry(i))
                 temp.boolList.insert(i, true);

         if (other.boolList.getEntry(i))
             temp.boolList.insert(i, true);
     }
     return temp;
    
}

IntegerSet IntegerSet::differenceOfSets(const IntegerSet& other) const
 {
     IntegerSet result;
     for (int i = 1; i <= 100; i++) {
         if (boolList.getEntry(i) && !other.boolList.getEntry(i)) {
             result.boolList.setEntry(i, true);
         }
     }
     return result;
 }


IntegerSet IntegerSet::symmetricDifferenceOfSets(const IntegerSet& other) const
{
     IntegerSet result;
     for (int i = 1; i <= 100; i++) {
         if (boolList.getEntry(i) != other.boolList.getEntry(i)) {
             result.boolList.setEntry(i, true);
         }
     }
     return result;
}



IntegerSet IntegerSet::operator+(const IntegerSet& other) const
{
     IntegerSet result;
     for (int i = 1; i <= 100; i++) {
         if (boolList.getEntry(i) || other.boolList.getEntry(i)) {
             result.boolList.setEntry(i, true);
         }
     }
     return result;
}



IntegerSet IntegerSet::operator-(const IntegerSet& other) const
{
     IntegerSet temp = *this;
     for (int i = 1; i < 100; i++)
         if (boolList.getEntry(i) && other.boolList.getEntry(i))
             temp.boolList.setEntry(i, false);

     return temp;
}


bool IntegerSet::operator==(const IntegerSet& other) const
{
     if (this->boolList.getLength() != other.boolList.getLength()) {
         return false;
     }
     for (int i = 1; i <= this->boolList.getLength(); i++) {
         if (this->boolList.getEntry(i) != other.boolList.getEntry(i)) {
             return false;
         }
     }
     return true;
}



ostream& operator<<(ostream& out, const IntegerSet& other)
 {
     out << "The set contents: { ";
     for (int i = 1; i <= 100; i++) {
         if (other.contains(i)) {
             out << i << " ";
         }
     }
     out << "}";
     return out;

     
 }

istream& operator>>(istream& in, IntegerSet& other)
 {
     int num;
     while (in >> num) {
         if (num >= 1 && num <= 100)
             {
             other.boolList.setEntry(num, true);
             }
     }
     return in;
 }