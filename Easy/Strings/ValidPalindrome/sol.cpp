class Solution {
public:
    bool isPalindrome(string s) {
        string x;
        for(int i =s.size()-1;i>=0;i--){
            // if(isspace(s[i]))continue;
            if( isalnum(s[i]) ) { // LEARNED ABOUT ISALNUM AND TOLOWER 
                x+=tolower(s[i]);
                }
        }
        
        int low=0,high=x.size()-1;
       
        while(low<=high){
            if(x[low]!=x[high])return false;
            low++;
            high--;
        }
    return true;}
};
