#include <iostream>

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

int min(int x, int y){
    if(x<=y){
        return x;
    }
    else{
        return y;
    }
}

int fibonaccisearch(int arr[], int x, int n){
    int fib1=1;
    int fib2=0;
    int fib=fib1+fib2;
    while(fib<n){
        fib2=fib1;
        fib1=fib;
        fib=fib1+fib2;        
    }
    int offset = -1;
    while(fib>1){
        int i = min(offset+fib2, n-1);
        if(arr[i]<x){
            fib=fib1;
            fib1=fib2;
            fib2=fib-fib1;
            offset=i;
        }
        else if(arr[i]>x){
            fib=fib2;
            fib1=fib1-fib2;
            fib2=fib-fib1;
        }
        else{
            return i;
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

    insertionSort(arr,n);
    int x;
    cin>>x;

    cout<<fibonaccisearch(arr,x,n)<<endl;
}