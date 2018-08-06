#include <iostream>
int main()
{ int i,n,j;
std::cout<<"enter two integers";
std::cin>>i;
std::cin>>j;
n=(i+j)-(i%j);
std::cout<<"the nearest number is "<<n;
return 0;

}
