class Solution {
public:
    bool isPalindrome(string s) {
        string ans;
        for(char c:s){
            if(isalnum(c)){
                ans+=tolower(c);

            }
            
            
        }
        
        vector<char> c(ans.begin(), ans.end());
        int left=0;
        int right=c.size()-1;
        while(left<right){
            if(c[left]!=c[right]){
                return false;
            }
            left++;
            right--;
        }

        return true;
        
        

        
    }
};
