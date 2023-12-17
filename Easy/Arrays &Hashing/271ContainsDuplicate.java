class Solution {
    public boolean containsDuplicate(int[] nums) {
    HashSet<Integer> set = new HashSet<>();

       for (int i=0;i<nums.length;i++){
           if(set.contains(nums[i])){return true;}

           set.add(nums[i]);
       }
    return false;}
}

// TC - O(n)
// SC -O(n)  the code creates a HashSet that can potentially store all the elements of the array.

/* Hashset is used because only unique elements can be added to the hashset , (here for first iteration there is no element in the array so either way it is going to be added into the hashset)

then for the next iteration it checks that if the hashset contains the integer that is the num already exist in the hashset or not ,if it does just return true or else add it to the set 

*/
