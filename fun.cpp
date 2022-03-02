#include<bits/stdc++.h>
using namespace std;
int main()
{
    system("cls");
    char s[]="My-name-is-abc";
    char *token = strtok(s, "-");
    while (token != NULL)
	{
		cout<<token<<endl;
		token = strtok(NULL, "-");
	}
    char c[]="sign-in:10am sign_out:2pm";
    char *t =strtok(c," ");
    while(t!=NULL)
    {
        cout<<t<<endl;
        t=strtok(NULL," ");
    }

}