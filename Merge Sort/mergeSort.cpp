#include<bits/stdc++.h>
using namespace std;

void merge(int arr[], int start, int mid, int end){
    int sizeA = mid-start+1;
    int sizeB = end-mid;

    int subArrA[sizeA];
    int subArrB[sizeB];

    for(int i=0;i<sizeA;i++){
        subArrA[i]=arr[start+i];
    }

    for(int i=0;i<sizeB;i++){
        subArrB[i]=arr[mid+1+i];
    }

    int indexA = 0;
    int indexB = 0;
    int indexArr = start;

    while(indexA<sizeA && indexB<sizeB){
        if(subArrA[indexA] <= subArrB[indexB]){
            arr[indexArr]=subArrA[indexA];
            indexArr++;
            indexA++;
        }
        else{
            arr[indexArr] = subArrB[indexB];
            indexB++;
            indexArr++;
        }
    }

    while(indexA < sizeA){
        arr[indexArr] = subArrA[indexA];
        indexA++;
        indexArr++;
    }

    while(indexB < sizeB){
        arr[indexArr] = subArrB[indexB];
        indexB++;
        indexArr++;
    }
}

void mergeSort(int arr[], int start, int end){
    int mid = start+(end-start)/2;

    if(start<end){
    mergeSort(arr,start,mid);
    mergeSort(arr,mid+1,end);

    merge(arr,start,mid,end);
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    mergeSort(arr,0,n-1);

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}