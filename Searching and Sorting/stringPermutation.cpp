#include <iostream>
#include <cstring>
#include <string.h>
using namespace std;

bool isPermutation(char input1[],char input2[]){
    int i,j;
    int freq[256]={0};
    for ( i = 0; input1[i] != '\0'; i++)
    {   
        j=int(input1[i]);
        freq[j]++;
    }
    for ( i = 0; input2[i] != '\0'; i++)
    {   
        j=int(input2[i]);
        freq[j]--;
    }
    for ( i = 0; i<255; i++)
    {   
        if(freq[i]!=0)
        {
            return false;
        }
       
    }
    return true;
}

int main()
{
    int size=1e6;
    char input1[size];
    char input2[size];
    cin>>input1>>input2;
    cout << (isPermutation(input1, input2) ? "true" : "false");
    return 0;
}