#include<iostream>
#include<ctime>
using namespace std;

int length(char s[])
{
    if(s[0]=='\0')
    {
        return 0;
    }
    return 1+length(s+1);
}
void removeX(char s[])
{
    if(s[0]=='\0')
    {
        return;
    }

    if(s[0]!='x')
    {
        return removeX(s+1);
    }
    else{
        int i;
        for(i=1;s[i]!='\0';i++)
        {
            s[i-1]=s[i];
        }
        s[i-1]=s[i];
        removeX(s);
    }
}
int main()
{
    char S[100];
    clock_t start=clock();

    cin>>S;

    int l=length(S);
    cout<<l<<endl;

    removeX(S);
    l=length(S);
    cout<<S<<endl;
    cout<<l<<endl;

    clock_t end=clock();
    double totaltime=(double)(end-start)/CLOCKS_PER_SEC;
    cout<<"Total time took ->"<<totaltime<<endl;
    
    return 0;
}