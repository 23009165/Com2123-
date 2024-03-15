#include <iostream>
#include <cmath>
using namespace std;
int main(){
cout<<"Enter the height(in inches) of your eye when peering into your angle-measuring device"<<endl;
double hi;
cin>>hi;
//h= height in feet
double h = hi*(1/12);

cout<<"Enter the angle measured (in degrees)"<<endl;
double angle;
cin>>angle;

cout<<"Enter the distance (in feet and inches)"<<endl;
double d;
cin>> d;

cout<<"Type i for inches and f for feets"<<endl;

string str;
cin>>str;
// i = inches;
double i;
if(str == "i"){
    d=d*(1/12);


}
//Height = the height of the tree in feet
double Height = h + d*tan(angle);
cout<<" The height is "<<Height<<endl;
}


