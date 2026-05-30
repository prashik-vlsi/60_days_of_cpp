#include <iostream>
using namespace std;

void area(double r){
  double totarea= 3.14*r*r;
   cout<<"the area of circle is: "<<totarea<<endl;
}
void area(double b, double l){
    double areaa=l*b;
  cout<<"the area of rectangle is: "<<areaa<<endl;


}
int main(){
    area(4);
    area(2.2, 2.2);
    return 0;

}