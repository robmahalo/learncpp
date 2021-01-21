// Let's learn about arrays!

// Array -
// a sequential collection of data of similar elements

#include <iostream>

int main() {

    // Here we initialize an array named A 
    // to a size of 5 elements
    int A[5];

    // Here we declare and initialize an array named B
    int B[5] = {2, 4, 6, 8, 10};

    // Let's try to access and display array B
    // We can use a for loop!
    for (int i = 0; i < 5; i++) {
        std::cout << ("%d\n", B[i]);
    }

    // Let's try asking the user to input the size of an array
    int n;
    std::cout << "Enter the size: ";
    std::cin >> n;
    int A[n];

    // Here we add 2 to the first element of array A
    A[0] = 2;

    // Finally, display the result
    std::cout << A[0];

    return 0;
}