while(start<=end){

       if(arr[start]<arr[end]){
        if(arr[start]==0){
            start++;
        }

        else{
            end--;
        }
       }

       else if(arr[end]<arr[start]){

       swap(arr[start],arr[end]);
       }

       else{

        if(arr[start]==0){

            start++;
        }
        else {

            end--;
        }
       }
}



        vector<int> ans;
        int k=0;

        for(int i=0; i<nums.size(); i++){

            for(int j=i; j<ans.size(); j++){

                if(nums[i]!= nums[j]){

                    break;
                }

                else{

                    ans.push_back(nums[j]);
                    k+=1;
                    break;
                }
            }
        }

       return ans;
    }

    while(s<= e){

            mid= (s+e)/2;

            if(nums[mid]== target){

                e=mid;

                if(nums[mid]>nums[mid-1]){

                    a=mid;
                    break;
                }
            }

            else if(nums[mid]> target){

                e= mid-1;
            }

            else{

                s= mid+1;
            }
        }