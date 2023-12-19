class Solution {
    public boolean check(int[] nums) {
         //lets do it by checking if there are TWO SORTED SUBARRAY or 1 SORTED ARRAY
        int cnt=0; //to keep track of number of break points 
        //if the array is sorted and rotated there is only one break point 

        for (int i =1;i<nums.length;i++){
            if(nums[i-1]>nums[i]){cnt++;}
        }
        
        //for case like [2,1,3,4] here the array is not sorted and rotated so we will 
        //check the first index element to the last index element and first index element must be greater 

        if(nums[0]<nums[nums.length-1]){cnt++;}
        
     return (cnt<=1);}
}
/* here we basically have to figure out that there should either be TWO SORTED SUBARRAY or 1 sorted array 
[3,4,5,1,2] => [3,4,5]|[1,2] 
