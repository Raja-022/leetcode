int majorityElement(int* nums, int n){
    int voter=nums[0];
    int votecount=1;
    for(int i=1;i<n;i++){
        if(nums[i]==voter){
            votecount++;
        }
        else{
            votecount--;
        }
        if(votecount==0){
            voter=nums[i];
            votecount=1;
        }
    }
    return voter;
}
