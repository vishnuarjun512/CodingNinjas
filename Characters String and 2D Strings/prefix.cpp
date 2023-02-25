#include <iostream>
#include<cstring>
#include<string.h>


using namespace std;
int main()
{
    char input[20];

    cin.getline(input, 20);

    int n = strlen(input);
   
    for (int i = 0; input[i]!='\0'; i++){
      for(int j=i;input[j]!='\0';j++)
      {
        for(int k=i;k<=j;k++){
          cout<<input[k];
        }
        cout<<endl;
      }
      
    }

    return 0;
}