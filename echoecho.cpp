#include<iostream>
#include"help.h"

using namespace std;


void insertion_sort(int arr[], int n){

    int temp=0;

    for(int i=1; i<n; i++){

        temp= arr[i];
 
        for(int j=i-1; j>=0; j--){

            if(arr[j]>arr[j+1]){

                arr[j+1]= arr[j];
                arr[j]= temp;
            }

            else{

                break;
            }

        }
    }

    printarray(arr, 7);
}



int main(){

    int arr[7]= {10, 1, 7, 4, 8, 2 ,11};

    insertion_sort(arr, 7);

    return 0;
}