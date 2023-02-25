#include <iostream>
#include<time.h>
using namespace std;

void merge(int input[], int start, int mid, int end)
{
    int n1 = (mid - start) + 1;
    int n2 = (end - mid);

    int *a=new int[n1];
    int *b=new int[n2];
    for (int i = 0; i < n1; i++)
    {
        a[i] = input[start + i];
    }
    for (int j = 0; j < n2; j++)
    {
        b[j] = input[mid + j + 1];
    }
    int count = start, i = 0, j = 0;
    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            input[count] = a[i];
            i++;
            count++;
        }
        else
        {
            input[count] = b[j];
            j++;
            count++;
        }
    }
    while (i < n1)
    {
        input[count] = a[i];
        i++;
        count++;
    }
    while (j < n2)
    {
        input[count] = b[j];
        j++;
        count++;
    }
}

void mergeSort(int input[], int start, int end)
{
    if (start >= end)
    {
        return;
    }
    if (start < end)
    {
        int mid = (start + end) / 2;
        mergeSort(input, start, mid);
        mergeSort(input, mid + 1, end);
        merge(input, start, mid, end);
    }
}

void mergeSort(int input[], int size)
{
    mergeSort(input, 0, size - 1);
}

void bubbleSort(int input[],int length)
{
    for(int i=0;i<length-1;i++)
    {
        for(int j=i+1;j<length;j++)
        {
            if(input[i]>input[j])
            {
                int swap=input[i];
                input[i]=input[j];
                input[j]=swap;
            }
        }
    }
}

int main()
{
    int length1;
    cin >> length1;
    int *input = new int[length1];
    for (int i = 0; i < length1; i++){
        input[i]=rand()%1000;
    }



    clock_t start=clock();
    bubbleSort(input, length1);
    cout<<"\nBubble Sorted Array->";
    for (int i = 0; i < length1; i++)
    {
        cout << input[i] << " ";
    }
    clock_t end=clock();


    double bubbleTime=((double)(end-start))/CLOCKS_PER_SEC;
    int *input2= new int[length1];
    for(int i=0;i<length1;i++)
    {
        input2[i]=rand()%1000;
    }
    clock_t mstart=clock();
    mergeSort(input2,length1);

    cout<<"\nMerge Sorted Array->";
    for (int i = 0; i < length1; i++)
    {
        cout << input2[i] << " ";
    }
    clock_t mend=clock();



    double mergeTime=((double)(mend-mstart))/CLOCKS_PER_SEC;
    cout<<"\nTime for BubbleSort=>"<<fixed<<bubbleTime<<endl;
    cout<<"Time for Merge sort=>"<<fixed<<mergeTime<<endl;

    if(bubbleTime>mergeTime)
    {
        cout<<"MergeTime is small"<<endl;
    }
    else{

        cout<<"bubbleTime is small"<<endl;
    }

    return 0;


}
