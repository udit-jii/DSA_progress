#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //left
    // for(int i=0;i<n;i++){
    //     int num =1;
    //     for(int j=0;j<i+1;j++){//stars 
    //         cout<<"*"<<" ";
    //     }

    //     for(int j=i+1;j<2*n-(i+1);j++){//spaces  
    //         cout<<"  ";
    //     }

    //     for(int j=2*n-(i+1);j<2*n;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<'\n';
    // }
    
    // //right
    // // for(int i=0;i<n;i++){
        
    // //     for(int j=2*n -(i+1);j<2*n;j++){
    // //         cout<<"*"<<" ";
    // //     }
    // //     cout<<'\n';
    // // }
    
    // for(int i=0;i<n;i++){

    //     for(int j=0;j<n-i;j++){
    //         cout<<"*"<<" ";
    //     }
    //     for(int j=n-i;j<n+i;j++){
    //         cout<<"  ";
    //     }
    //     for(int j=n+i;j<2*n;j++){
    //         cout<<"*"<<" ";
    //     }
    //     cout<<'\n';
    // }
    for(int i=0; i<n; i++){
        for(int j=0; j<(i+1); j++){
            cout<<"* ";
        }
        for(int j=0; j<(2*(n-i)-2); j++){
            cout<<"  ";
        }
        for(int j=0; j<(i+1); j++){
            cout<<"* ";
        }
        cout<<endl;
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<(n-i); j++){
            cout<<"* ";
        }
        for(int j=0; j<(2*i); j++){
            cout<<"  ";
        }
        for(int j=0; j<(n-i); j++){
            cout<<"* ";
        }
        cout<<endl;
    }
}