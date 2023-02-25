#include <iostream>
using namespace std;

void rotate(int *input, int d, int n)
{
    int input2[d];
    for (int i = 0; i < d; i++)
    {
        input2[i] = input[i];
    }
    int start = 0;
    for (int i = 0; i < n; i++)
    {
        if (i <= n - d)
        {
            input[i] = input[d++];
        }
        else
        {
            input[i] = input2[start++];
        }
    }
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

        for (int i = 0; i < size; ++i)
        {
            cin >> input[i];
        }

        int d;
        cin >> d;

        rotate(input, d, size);

        for (int i = 0; i < size; ++i)
        {
            cout << input[i] << " ";
        }

        delete[] input;
        cout << endl;
    }

    return 0;
}