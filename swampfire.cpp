#include<iostream>
using namespace std;

void singlet_finder(int arr[], int size){
    
    bool found= false;
    for(int i=0; i<size; i++){
        int count=0;
        for(int j=0; j<size; j++){

            if(i !=j && arr[i]==arr[j]){
                count++;
            }
        }

        if(count==0){

            found=true;
            cout<<"singlet is present and it is "<<arr[i]<<'\n';
            }
    }
    if(found == false){
            cout<<"there is no singlet";
        }
}

int main (){
    int arr[100] = {1, 2, 3, 4, 5, 2, 3, 1};

    singlet_finder(arr,8);
    // for(int i=0; i<15;i++){

    //     cout<<arr[i]<<" ";
    // }
    return 0;
}