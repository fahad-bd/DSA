#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){

    for(int i=0;i<size;i++){
        for(int j=0;j<size-i;j++){
            if(arr[j]<arr[j-1]){
                int temp = arr[j];
                arr[j] = arr[j-1];
                arr[j-1] = temp;
            }
        }
    }
}

int main()
{
    int arr[]={1,7,5,3,5,7,8,0,26};
    bubbleSort(arr,9);

    for(int i=0;i<9;i++) cout<<arr[i]<<" ";

    cout<<endl;
    return 0;
}