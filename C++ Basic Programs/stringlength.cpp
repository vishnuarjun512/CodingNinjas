#include<iostream>
#include<string.h>

using namespace std;
int main()
{
    char name[20];
    cin.getline(name,20);
    
    int n=strlen(name);
    int i=0;
    int count=0;
   
    while(i<n){
        if(name[i]!=' '){
          
          
          name[count] =name[i];
          count++;
          i++;
        }
        else{
            i++;
        
        }
        
    
    }
    name[count]='\0';
    cout<<name;

    

    return 0;
}