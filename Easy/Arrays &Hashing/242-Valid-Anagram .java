class Solution {
    public boolean isAnagram(String s, String t) {
             // convert the strings to char arrays
        char[] sArray = s.toCharArray();
        char[] tArray = t.toCharArray();
        
        // sort the char arrays
        Arrays.sort(sArray);
        Arrays.sort(tArray);
        
        // check if the lengths are equal
        if(sArray.length != tArray.length) {
            return false;
        }
        
        // compare the char arrays using Arrays.equals ()
        for(int i = 0; i < sArray.length; i++) {
           if(sArray[i] != tArray[i]) {
        return false;
            }
        }
        
        // return true if no difference is found
        return true;
    }
}


//agar s ka 1 bhi element t ke ussi same position wale element se match ni hoga to anagram kesa hoga  for example s= rat and t = car after s and t are sorted they will be s = [ a,t,r ]and t = [a,c,r ] here when i =1 , s[1]!=t[1]( c vs t) so we will return false  
