#include<iostream>
#include<cmath>
using namespace std;

int main()
{

    double Volume , r, height;

    cout<<"Enter Radius of Tank or Cylinder; "<<endl;
    cin>>r;

    cout<<"Now Enter Height of Cylinder; "<<endl;
    cin>>height;

    Volume=3.14*pow(r,2)*height;

    cout<<"The Volume of Cylinder is: "<<Volume<<endl;

    return 0;
}
