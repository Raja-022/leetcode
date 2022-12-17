int majorityElement(int* nums, int n){
    int curr,count=0;
    for(int i=0;i<n;i++){
        curr=nums[i];
        for(int j=0;j<n;j++)
            if(nums[j]==curr)
                ++count;
                if(count>=((n/2)))
                return curr;
    }
    return -1;
}
