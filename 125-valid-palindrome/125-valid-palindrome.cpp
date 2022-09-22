class Solution {
public:
    bool isPalindrome(string s) {
        transform(s.begin(),s.end(),s.begin(),::tolower);
        string ans="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]>='a' && s[i]<='z')
                ans+=s[i];
            if(s[i]>='A' && s[i]<='Z')
                ans+=s[i];
            if(s[i]>='0' && s[i]<='9')
                ans+=s[i];
        }
        string sample=ans;
        reverse(sample.begin(),sample.end());
        return sample==ans;
    }
};