/*Practice Question 1:
You have this array:
cppint arr[] = {5, 15, 25, 35, 45};
Using only pointer arithmetic — no index notation like arr[i] — calculate and print the sum of all elements.
Write the complete program. Show me your code.*/

#include<iostream>
using namespace std;

int total(int *p, int size){
    int sum=0;

    for (int i=0; i<size; i++){
       sum += *(p+i);

    } return sum;
}

int main(){
    int arr[] = {5, 15, 25, 35, 45};
    int size=5;

    int sum= total(arr, size);

    cout<<"the sum of number is: "<<sum<<endl;

}