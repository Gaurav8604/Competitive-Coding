class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0) return false;
        long temp=x;
        long ans=0;
        while(x>0){
            int d=x%10;
            x/=10;
            ans=ans*10+d;
        }
        return temp==ans;
        // string temp=to_string(x);
        // string ans=temp;
        // reverse(ans.begin(),ans.end());
        // return ans==temp;
    }
};