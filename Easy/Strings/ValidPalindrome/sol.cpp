METHOD 1 - WITH INBUILT FUNCTION
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



METHOD 2 - BRUTE 

    
class Solution {
    private:
    bool valid(char ch){
if( (ch>='a' && ch<='z') || (ch>='A' && ch<='Z') || (ch>='0' && ch<='9'))
   { return 1; }
    return 0;}

    char lower(char c){
        if( (c>='a' && c<='z') || (c>='0' && c<='9') ){
            return c;
        }
        return (c-'A'+'a');
    }
public:
    bool isPalindrome(string s) {
        string x;
        for(auto i :s){
            if(valid(i)) x+=i;
        }
       
        for(int i=0; i<x.size();i++){
            x[i]= lower(x[i]);
        }
        int low=0,high=x.size()-1;
        while(low<high){
            if(x[low]!=x[high])return false;
            low++;
            high--;
        
        }
    return true;}
};
