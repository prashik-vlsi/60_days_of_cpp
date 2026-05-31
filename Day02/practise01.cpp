/* Q5:
Write a function findMin that:

Takes an array and size as pointer parameters
Returns the minimum element
Main prints the result*/


#include <iostream>
using namespace std;

int findMin( int *p, int size){

    int min=p[0];
    for(int i=0; i<size; i++){
        if(*(p+i)<min){
            min=*(p+i);
        }
    }
    return min;
}

int main(){

   int  array[]={34, 35, 56, 345, 234};

   int size=5;

  int min = findMin(array, size);

  cout<<"the minimum number in the array is : "<<min<<endl;

  return 0;



}
