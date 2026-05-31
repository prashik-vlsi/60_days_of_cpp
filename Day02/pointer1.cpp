#include<iostream>
using namespace std;
int findMax(int *p, int size){
    int max=p[0];

        for(int i=0; i<size; i++){

            if(p[i]>max){
                max=p[i];
            }            
        }
                    return max;


}
int main(){

    int arr[]={2, 3, 56,67,43,62};

    int size=6;

int max = findMax(arr, size);
cout<<"the largest value is: "<<max<<endl;
    return 0;
}