
#include <iostream>
using namespace std;

void swap(int *a , int *b){

 int temp = *a;
    *a = *b;
    *b = temp;




}

int main(){

    int num1, num2;

    cout<<"enter two numbers: "<<endl;
    cin>>num1>>num2;
        swap(&num1, &num2);

    cout << "After swapping: " << num1 << " " << num2 << endl;

    return 0;



}