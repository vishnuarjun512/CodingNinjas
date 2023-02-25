#include <iostream>
#include <time.h>
#include <iomanip>
using namespace std;

void swap(int a[], int start, int pivot)
{
    int swap = a[start];
    a[start] = a[pivot];
    a[pivot] = swap;
    cout << "Exchanging " << a[start] << " with " << a[pivot] << endl;
}
int partition1(int a[], int start, int end)
{
    cout << endl;
    cout << endl;
    cout << "-------------New Partition----------------------" << endl;
    cout << "Before->";
    for (int i = start; i <= end; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    int pivot = 0;
    for (int i = start + 1; i <= end; i++)
    {
        if (a[start] >= a[i])
        {
            pivot++;
        }
    }
    int p = 0;
    p = start + pivot;
    cout << "Pivot=>" << p << endl;
    swap(a, start, p);
    cout << endl;
    cout << "Start>>>>>>>>>>>>>>>" << endl;
    cout << "After pivot swap->";
    for (int i = start; i <= end; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "<<<<<<<<<<<<<<<<<End" << endl;

    int s = start, e = end;

    cout << "<--------------While--------------->" << endl;
    while (s < p && p < e)
    {

        while (a[s] <= p)
        {
            s++;
        }
        while (a[e] > p)
        {
            e--;
        }

        if (s < p && e > p)
        {
            swap(a[s++], a[e--]);
        }
    }
    cout << "<--------------While Ended--------------->" << endl;

    cout << endl;
    cout << "Start->>>>>>>>>>" << endl;
    for (int i = start; i <= end; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    cout << "<-----------------End" << endl;
    return p;
}

// void QS1(int a[], int start, int end)
// {
//     if (start < end)
//     {

//         int pivot = partition1(a, start, end);
//         cout << "Pivot=>" << pivot << endl;

//         QS1(a, start, pivot - 1);
//         QS1(a, pivot + 1, end);

//     }
// }

// int partition(int input[],int start, int end){

//     int x = input[end];
//     int i = start-1;
//     for(int j =start;j<=end;j++){
//         if(input[j]<x){
//             i++;
//             int temp = input[i];
//             input[i]=input[j];
//             input[j]=temp;
//         }
//     }
//     int temp2 = input[i+1];
//     input[i+1]=input[end];
//     input[end]=temp2;
//     return i+1;
// }
// void quickSort(int input[],int start,int end){
//     if(start>=end){ return; }
//     if(start<end){
//         for(int i=0;i<=end;i++)
//         {
//             cout<<input[i]<<" ";
//         }
//         cout<<endl;
//         int pivot = partition(input,start,end);
//         quickSort(input,start,pivot-1);
//         quickSort(input,pivot+1,end);
//     }
// }
// void quickSort(int input[], int size) {
//   quickSort(input,0,size-1);

// }
int partition(int input[], int start, int end)
{
    int x = input[end];
    int i = start - 1;
    for (int i = 0; i <= end; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;
    for (int j = start; j <= end; j++)
    {
        if (input[j] < x)
        {
            i++;
            int temp = input[i];
            input[i] = input[j];
            input[j] = temp;
            // cout<<temp<<endl;
        }
    }
    int temp2 = input[i + 1];
    input[i + 1] = input[end];
    input[end] = temp2;
    return i + 1;
}
void quickSort(int input[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    if (start < end)
    {
        int pivot = partition(input, start, end);
        quickSort(input, start, pivot - 1);
        quickSort(input, pivot + 1, end);
    }
}
void quickSortOwn(int input[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    if (start < end)
    {
        int pivot = partition1(input, start, end);
        quickSortOwn(input, start, pivot - 1);
        quickSortOwn(input, pivot + 1, end);
    }
}
void quickSort(int input[], int size)
{
    quickSort(input, 0, size - 1);
}
void quickSortOwn(int input[], int size)
{

    quickSortOwn(input, 0, size - 1);
}

int main()
{
    int n;
    cin >> n;

    int *input = new int[n];

    for (int i = 0; i < n; i++)
    {
        input[i] = rand() % 1000;
    }
    cout << "\nCN method array=>";
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }
    cout << endl;

    clock_t start = clock();
    quickSort(input, n);
    clock_t end = clock();
    for (int i = 0; i < n; i++)
    {
        cout << input[i] << " ";
    }

    cout << endl;
    cout << endl;
    cout << endl;

    double CN = ((double)(end - start)) / CLOCKS_PER_SEC;

    // Own Method
    int *input2 = new int[n];
    for (int i = 0; i < n; i++)
    {
        input2[i] = rand() % 1000;
    }
    cout << "--------------------------------------------------" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "\nOwn Method Array=>";
    cout << "--------------------------------------------------" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "--------------------------------------------------" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << input2[i] << " ";
    }
    cout << endl;
    clock_t Ostart = clock();
    quickSortOwn(input2, n);
    for (int i = 0; i < n; i++)
    {
        cout << input2[i] << " ";
    }
    clock_t Oend = clock();
    printf("\nOwn Method=>%0.5fms", (Oend - Ostart) * 1000.0 / CLOCKS_PER_SEC);
    printf("\nCN Method=>%0.5fms", (end - start) * 1000.0 / CLOCKS_PER_SEC);

    // double ownMethod = ((double)(Oend - Ostart)) / CLOCKS_PER_SEC;
    cout << endl;
    // cout << "CN method=>" << fixed << CN << endl;
    // cout << "Own Method=>" << fixed << ownMethod << endl;

    // if (CN == ownMethod)
    // {
    //     cout << "Both methods are equal";
    // }
    // if (CN < ownMethod)
    // {
    //     cout << endl;
    //     cout << "CN Method is faster" << endl;
    // }
    // else
    // {
    //     cout << "Own Method is faster" << endl;
    // }

    delete[] input;

    delete[] input2;
}