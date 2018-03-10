#include<iostream>
using namespace std;

#include "SimpleVector.h"


// Function prototypes
void printVector(SimpleVector<int> v);


// Execution begins here!
int main() {
    int userInt;

    // Test an empty vector and append 1
    SimpleVector<int> vector1;
    cout << "\n\nEnter a number: ";
    cin >> userInt;
    vector1.push(userInt);
    cout << "======= This vector should contain 1 element ========" << endl;
    printVector(vector1);
    cout << "=====================================================\n" << endl;

    // Test a vector of size 10 and append 1
    SimpleVector<int> vector2(10);
    cout << "Enter a number: ";
    cin >> userInt;
    vector2.push(userInt);
    cout << "====== This vector should contain 11 elements =======" << endl;
    printVector(vector2);
    cout << "=====================================================\n" << endl;

    // Test a vector of max size 12 and double it.
    SimpleVector<int> vector3(12, 12);
    cout << "Enter a number: ";
    cin >> userInt;
    vector3.pushWithMax(userInt); // 12 items
    cout << "====== This vector should contain 24 elements =======" << endl;
    printVector(vector3);
    cout << "=====================================================\n" << endl;

    return 0;
}

void printVector(SimpleVector<int> v) {
    cout << "\nVector contains " << v.size() << " items." << endl;
    cout << "[";
    for (int i = 0; i < v.size(); ++i) {
        cout << v.getElementAt(i) << " ";
    }
    cout << "]" << endl;
}