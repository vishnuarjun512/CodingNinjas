#include<iostream>
#include<unordered_map>
using namespace std;

int highestFrequency(int arr[], int n)
{
    unordered_map<int, int> m;
    int index = 0, max = 0;
    for (int i = n - 1; i >= 0; i--)
    {
        if (m.count(arr[i]) == 0)
            m[arr[i]] = 1;
        else
        {
            m[arr[i]] += 1;
            if (max <= m[arr[i]])
            {
                max = m[arr[i]];
                index = i;
            }
        }
    }
    return arr[index];
}

int main(){
  int a[] = {2 ,12 ,2 ,11 ,12, 2 ,1 ,2 ,2 ,11 ,12 ,2, 6};
  cout<<"Maximum -> " << highestFrequency(a,13);
  return 0;
}
