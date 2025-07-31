#include<iostream>
using namespace std;

void wave_print(int arr[][3], int row){

    for(int col=0; col<3; col++){

        for(int row=0; row<3; row++){

            if(col%2==0){

                cout<<arr[row][col]<<" ";
            }

            else{

                cout<<arr[2- row][col]<<" ";
            }
        }

        // cout<<'\n';
    }

}



int main(){

    int arr[3][3]= {1,2,3,4,5,6,7,8,9};

    for(int row=0; row<3; row++){

        for(int col=0; col<3; col++){

            cout<<arr[row][col]<<" ";
        }
        cout<<'\n';
    }

    cout<<'\n'<<'\n';

    wave_print(arr, 3);
}