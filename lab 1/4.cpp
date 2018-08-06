#include<iostream>
int factorial(int n);
int main()
{
    int n;
std::cout<<"enter the number you want to calculate factorial";
    std::cin>>n;
    std::cout<<"factorial is "<<factorial(n);
    return 0;
}
int factorial(int n)
{
    if(n>1)
        return n*factorial(n-1);
    else
        return 1;

}
