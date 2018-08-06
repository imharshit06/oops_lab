#include<iostream>
using namespace std;
int main()
{ int n,i=0;
    cout<<"enter the number";
    cin>>n;
    while(n>0)
    { n=n/10;
       i++;
        }
        cout<<"the number of digits are/is "<<i<<endl;
        return 0;
}
