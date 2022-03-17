#include<iostream>
#include<bits/stdc++.h>
using namespace std;
string removeElement(string str)
{
    int n=str.length();
    if(str[0]>str[n])
    {
         str.erase(1, 1);
         count++;
    }
    else{
        str.erase(n,n);
        count += 1;
    }
    return str;

}
int arraySum(string str)
{
    int sum = 0; 
    for (int i = 0; str[i] != '\0'; i++)
       sum = sum + (str[i]-96);
    return sum;
}
int main ()
{
    char str[50];
    int i;
    int k=3;
    int count=0;
    string str="ubrc";
    int sum=arraySum(str);
    cout << "Sum of all characters : " << sum;
    while(sum>k)
    {
        removeElement(str);
        arraySum(str);
    }
    cout<<count;
    return 0;
}