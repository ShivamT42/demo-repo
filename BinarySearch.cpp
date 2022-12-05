#include<iostream>
using namespace std;

void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int curr = arr[i];
        int j=i-1;
        while(arr[j]>curr && j>=0){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=curr;
    }
}

int binarySearch(int arr[], int n, int key){
    int s=0;
    int e=n;

    while(s<=e){
        int m=(s+e)/2;
        if(arr[m]==key){
            return m;
        }
        else if(arr[m]>key){
            e=m-1;
        }
        else if(arr[m]<key){
            s=m+1;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int key;
    cin>>key;
    
    insertionSort(arr, n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl<<binarySearch(arr, n, key);
    return 0;

}