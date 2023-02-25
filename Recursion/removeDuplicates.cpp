#include<iostream>
using namespace std;

void removeD(char s[])
{
    if(s[0]=='\0')
    {
        return;
    }

    if(s[0]==s[1])
    {
        int i;
        for(i=1;s[i]!='\0';i++)
        {
            s[i-1]=s[i];
        }
        s[i-1]=s[i];
        removeD(s);
    }
    removeD(s+1);
}

int main()
{
    char c[100];
    cin>>c;

    removeD(c);

    cout<<c<<endl;
    return 0;
}