#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={12,34,56,78,99};
    bool check = binary_search(arr,arr+5,78);
    cout<<char(check)<<endl;
}