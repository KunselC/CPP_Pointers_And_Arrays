#include <iostream>
using namespace std;

void display(int*, int);

int main()
{
    int num[4] = { 10, 20, 40, 60 };
    display(num, 4);  /* Sets the value of the pointer (which is the address) as num, the name of
    the array. This means that the value will be the first element */
    return 0;
}

void display(int* ptr, int size) {
    for (int i = 0; i < size; i++) {
        cout << *(ptr + i) << " ";
    }
}