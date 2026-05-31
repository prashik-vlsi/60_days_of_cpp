#include <iostream>
using namespace std;

void printReverse(int *p, int size)
{
    int *ptr = p + size - 1;   // point to last element

    while(ptr >= p)
    {
        cout << *ptr << " ";
        ptr--;
    }
}

int main()
{
    int arr[] = {10, 20, 30, 40, 50};
    int size = 5;

    printReverse(arr, size);

    return 0;
}