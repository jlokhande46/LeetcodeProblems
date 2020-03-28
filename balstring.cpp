class Solution {
public:
    int balancedStringSplit(string s) {
        int bal=0,count=0;
        char start=s[0];
        if(start=='L')
            char opp='R';
        else
            char opp='L';
        for(int i=0;i<s.length();i++){
            if(s[i]==start)
                bal++;
            else
                bal--;
            if(bal==0)
                count++;
        }
        return count;
    }
};
