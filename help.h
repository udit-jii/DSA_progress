#include<iostream>
#include<vector>
using namespace std;

void printarray(int arr[], int n){

    for(int i=0; i<n; i++){

        cout<<arr[i]<<" ";
    }
}

void printvector(vector <int> arr){

    for(int i=0; i<arr.size(); i++){

        cout<<arr[i]<<" ";
    }
}

int b_search(int arr[], int n, int k){

    int s=0;
    int e= n-1;

    while(s<=e){

        int mid= (e+s)/2;

        if(arr[mid]> k){

            e=mid-1;
        }

        else if(arr[mid]< k){

            s= mid+1;
        }

        else{

            return mid;
        }
    }
    return -1;
}