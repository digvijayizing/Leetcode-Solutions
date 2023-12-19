class Solution {
    public List<List<String>> groupAnagrams(String[] strs) 
    { 
//We start by initializing an empty unordered map called mp (short for map), which will store the groups of anagrams.        

/*We create a string variable called word and assign it the value of the current word ("eat" in this case).*/
Map<String, List<String>> map = new HashMap<>();
for(String word : strs ){
    char[] chars = word.toCharArray();
    Arrays.sort(chars);
    String sortedWord = new String(chars);

    if(!map.containsKey(sortedWord)){
        map.put(sortedWord ,new ArrayList<>());
    }
    map.get(sortedWord).add(word);
}
return new ArrayList<>(map.values());

    }
}





/*concept learned here is 
'char[] ch ' will store an array of characters */
//watch rahulsharma solution again 
