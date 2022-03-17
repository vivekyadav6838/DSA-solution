#include<bits/stdc++.h>
#define for(i,n) for (int i = 0; i < n; ++i)
using namespace std;

void rev(char s[],int low,int high)
{
    while(low<=high)
    {
        swap(s[low++],s[high--]);
    }
}


void reverseAword(char s[],int n)
{
int start=0;
for(end,n){
    if(s[end]==' ')
    {
        rev(s,start,end-1);
        start=end+1;
    }
    

}
rev(s,start,n-1);
reverse(s,s+n);
cout<<s<<endl;
}

int main()
{
char s[]="Welcome to India";
int n = sizeof(s)/sizeof(s[0]);

reverseAword( s,n-1);
    return 0;
}