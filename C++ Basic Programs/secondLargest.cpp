#include<iostream>
#include<climits>




int main(){
    int n;
    scanf("%d",&n);
    int max=INT_MIN,secondMax=INT_MIN;
    int num;
    int count=1;
    
    while(count<=n){
        cin>>num;
        if (num>max){
            secondMax=max;
            max=num;
        }
        else if(num>secondMax&&num!=max){
            secondMax=num;
        }
        count++;    
        
        
    }
    printf("%d\n",secondMax);
    
}