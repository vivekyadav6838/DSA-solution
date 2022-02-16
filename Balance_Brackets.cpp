#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t=0;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int n=s.length();
        string y="YES";
        string z="NO";
        stack<int>st;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='{' || s[i]=='[' || s[i]=='(')
            {
                st.push(s[i]);
            
            }
            else{
                if(st.empty())
                {
                  cout<<z<<endl;
                  break;
                }
                if(s[i]=='}')
                {
                    if(st.top()=='{')
                    st.pop();
                    else{
                        cout<<z<<endl;
                        break;

                    }
                    
                    
                }
                if(s[i]==']')
                {
                    if(st.top()=='[')
                    st.pop();
                    else{
                        cout<<z<<endl;
                        break;

                    }
                }
                if(s[i]==')')
                {
                    if(st.top()=='(')
                    st.pop();
                    else{
                        cout<<z<<endl;
                        break;
                    }
                }

            }
        }
       if(st.empty())
       {
           cout<<y<<endl;
           break;
           
       }
       else{
           cout<<z<<endl;
           break;
       }
            
             
        
    }


          
}