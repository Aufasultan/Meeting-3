#include <iostream>
using namespace std;

int main() {
    
   cout<<"THE LARGEST NUMBER"<<endl;
   cout<<"Please Input 3 Number to a, b, and c"<<endl;
   float a, b, c;
   cin>>a>>b>>c;
   
   float large = a;
   if (large<b)
   {
       large = b;
       if(large<c)
       {
           large = c;
       }
   }
    else
    {
        if(large<c)
        {
            large = c;
        }
    }
    cout<<"The Largest Number Is = "<<large<<endl;
}
