#include<iostream>
using namespace std;

int main(){

    int s=0;
    int e= nums.size()-1;

    while(s<= e){

        int mid= (s+e)/2;

        if(nums[mid]<nums[mid-1]){

                break;
            }

        else if(nums[mid]>nums[mid-1]){

                s= mid+1;
            }
        }

        return mid;
}