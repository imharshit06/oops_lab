#include<iostream>
#include<cstring>
int main()
{ int i,count=0;
  std::string s;
     std::cout<<"enter your string  ";
   std::cin>>s;
    for(i=0;s[i]!='\0';i++)
    {count++;}
    std::cout<<"the total length of string is "<<count;
}
