void pushZeroesEnd(int *input, int size)
{
    int start=0;
    int end=size-1;
    int temp;
    while(start<end){
        if(input[start]==0 && input[end]!=0)
        {

            input[start]=input[end];
            input[end]=0;
            start++;
            end--;
        }
        else if(input[start]!=0 && input[end]==0){
            start++;
            end--;
           
        }
        else if(input[start]!=0 && input[end]!=0){
            start++;
        }
        else{
            if(input[end--]!=0){
                input[end--]=0;
            }
        
        }

        
    }
}
#include <iostream>
using namespace std;


int main()
{

	int t;
	cin >> t;
	
	while (t--)
	{

		int size;

		cin >> size;
		int *input = new int[size];

		for (int i = 0; i < size; i++)
		{
			cin >> input[i];
		}

		pushZeroesEnd(input, size);

		for (int i = 0; i < size; i++)
		{
			cout << input[i] << " ";
		}

		cout << endl;
		delete[] input;
	}

	return 0;
}