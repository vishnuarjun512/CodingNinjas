#include <iostream>
using namespace std;

int duplicateNumber(int *arr, int n)
{
    int INT_SIZE = 8 * sizeof(unsigned int);
    int count[INT_SIZE];
    memset(count, 0, sizeof(count));
 
    // AND(bitwise) each element of the array
    // with each set digit (one at a time)
    // to get the count of set bits at each
    // position
    for (int i = 0; i < INT_SIZE; i++)
        for (int j = 0; j < n; j++)
            if ((a[j] & (1 << i)) != 0)
                count[i] += 1;
 
    // Now consider all bits whose count is
    // not multiple of k to form the required
    // number.
    unsigned res = 0;
    for (int i = 0; i < INT_SIZE; i++)
        res += (count[i] % k) * (1 << i);
 
    // Before returning the res we need
    // to check the occurrence  of that
    // unique element and divide it
    res = res / (n % k);
    return res;
}

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

		cout << duplicateNumber(input, size) << endl;
	}

	return 0;
}