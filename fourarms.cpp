#include<iostream>
#include<vector>

#include"help.h"
using namespace std;


void selection_sort(int arr[], int n){

    int min=0;

    for(int i=0; i<n-1; i++){

        for(int j=i; j<n; j++){

            min=i;

            if(arr[j]<arr[min]){

                min = j;
            }

            swap(arr[i], arr[min]);
        }
    }

    printarray(arr, n);
}

int main(){

    int arr[5]= {12,3,56,7,34};

    selection_sort(arr, 5);
}