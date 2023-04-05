#include <iostream>
#include "ArrayList.cpp"

using namespace std;

class IntegerSet {
private:
    ArrayList<bool> boolList;
public:
    IntegerSet() {
        // Initialize boolList with all elements set to false
        for (int i = 0; i < 100; i++) {
            boolList.insert(i,false);
        }
    }

    void add(int n) {
        // Add n to the set by setting the corresponding element in boolList to true
        boolList.insert(n, true);
    }

    void remove(int n) {
        // Remove n from the set by setting the corresponding element in boolList to false
        boolList.remove(n);
    }

    bool contains(int n) {
        // Check if n is in the set by checking the corresponding element in boolList
        return boolList.getEntry(n);
    }

    IntegerSet Union(IntegerSet other) {
        // Compute the union of this set and another set
        IntegerSet result;
        for (int i = 0; i < 100; i++) {
            if (boolList.getEntry(i) || other.contains(i)) {
                result.add(i);
            }
        }
        return result;
    }

    IntegerSet intersection(IntegerSet other) {
        // Compute the intersection of this set and another set
        IntegerSet result;
        for (int i = 0; i < 100; i++) {
            if (boolList.getEntry(i) && other.contains(i)) {
                result.add(i);
            }
        }
        return result;
    }

    IntegerSet difference(IntegerSet other) {
        // Compute the difference of this set and another set
        IntegerSet result;
        for (int i = 0; i < 100; i++) {
            if (boolList.getEntry(i) && !other.contains(i)) {
                result.add(i);
            }
        }
        return result;
    }

    IntegerSet symmetricDifference(IntegerSet other) {
        // Compute the symmetric difference of this set and another set
        IntegerSet result;
        for (int i = 0; i < 100; i++) {
            if (boolList.getEntry(i) != other.contains(i)) {
                result.add(i);
            }
        }
        return result;
    }

    friend ostream& operator<<(std::ostream& os, const IntegerSet& set) {
        os << "{ ";
        for (int i = 0; i < 100; i++) {
            if (set.boolList.getEntry(i)) {
                os << i << " ";
            }
        }
        os << "}";
        return os;
    }
};
