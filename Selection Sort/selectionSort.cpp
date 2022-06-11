#include<iostream>
using namespace std;

void swap(int arr[], int a, int b){
    int temp = arr[a];
    arr[a]=arr[b];
    arr[b]=temp;
}

int getMax(int arr[], int start, int end){
    int max = start;
    for (int i = start; i <= end; i++)
    {
        if(arr[max] < arr[i]){
            max = i;
        }
    }
    return max;
}

void selectionSort(int arr[],int n){
    for (int i = 0; i < n; i++)
    {
        int last = n - i -1;
        int maxIndex = getMax(arr,0,last);
        swap(arr,maxIndex,last);
    }
    
}

int main()
{
    int n;

    cout<<"Enter size: ";
    cin>>n;
    cout<<"Enter element: ";
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];

    selectionSort(arr,n);

    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    return 0;
}