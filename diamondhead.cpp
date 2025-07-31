#include<iostream>
#include<vector>
#include"help.h"
#include<algorithm>

using namespace std;

void add_arr(int arr1[], int arr2[], int n, int m){

    int i= n-1;
    int j= m-1;

    int carry=0;
    int sum=0;
    int summ;

    vector<int> nums;

    while(i>=0 && j>=0){

        summ= arr1[i]+ arr2[j]+ carry;

        sum= summ %10;
        carry= summ/10;

        nums.push_back(sum);

        i--;
        j--;
    }

    while(i>=0){
        int s=0;

        s= arr1[i]+ carry;

        sum = s% 10;
        carry= s/10;

        nums.push_back(sum);
        i--;
    }

    while(j>=0){

        int s=0;

        s= arr2[j]+ carry;

        sum = s% 10;
        carry= s/10;

        nums.push_back(sum);
        j--;
        carry=0;
    }

    if(carry!=0){

        int s = carry;

        sum= s% 10;
        carry = s/10;

        nums.push_back(sum);
    }
    
    reverse(nums.begin(), nums.end());

    printvector(nums);
}

int main(){

    int arr1[4]={9,9,4,9};
    int arr2[2]={563,100};

    add_arr(arr1, arr2, 4, 2);
}