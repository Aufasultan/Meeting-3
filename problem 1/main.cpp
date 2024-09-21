#include <iostream>
#include <cmath>
using namespace std;

int main() {
    
    double a, b, c;
    cout<<"Input number for a, b, c :"<<endl;
    cin>>a>>b>>c;
    
    double D = b*b -(4*a*c);
    if (D>0) 
    {
        double x1 = ((b*-1)+ sqrt(D))/(2*a);
        double x2 = ((b*-1)- sqrt(D))/(2*a);
        cout<<"D ="<<D<<endl;
        cout<<"The Discriminant is Greater Than 0, then x1 and x2 are real and distinc"<<endl;
        cout<<"X1 ="<<x1<<endl;
        cout<<"X2 ="<<x2<<endl;
    }
    else if (D<0)
    {
        cout<<"D ="<<D<<endl;
        cout<<"The Discriminant is less Than 0, then x1 and x2 are Imaginary"<<endl;

    }
    else{
        double x = (b*-1) / 2*a;
        cout<<"D ="<<D<<endl;
        cout<<"The Discriminant is equal Than 0, then x1 and x2 are real and equal"<<endl;
        cout<<"x = "<<endl;

    }
    
}
