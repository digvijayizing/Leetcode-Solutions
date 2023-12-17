class Solution {
    public int[] twoSum(int[] nums, int target) {
        // create a HashMap to store the numbers and their indices
        HashMap<Integer, Integer> map = new HashMap<>();
        // loop through the array of numbers
        //lets say the nums array is [2,7,8,0]
        //we create a hashmap of structure [<2,1> <7,2> <8,3> <0,4>] here key is the value of 
        // nums ke andr wale elements and indices are the values
        for (int i = 0; i < nums.length; i++) {
            // check if the complement of the current number exists in the map
            //like map.containsKey(9- 2)=7 7as a key value exist so we will return          
            //it as value in the hashmap
            if (map.containsKey(target - nums[i])) {
                // if yes, return the indices of the complement and the current number
                return new int[]{map.get(target - nums[i]), i};
            }
            // otherwise, add the current number and its index to the map
            map.put(nums[i], i);
        }
        // if no solution is found, return null
        return null;
    }
}
