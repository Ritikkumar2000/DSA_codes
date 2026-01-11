class Solution {
public:
    int residuePrefixes(string s) {
        int n=s.size(),count=0;
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            if(st.find(s[i])==st.end()){
                st.insert(s[i]);
            }
            if((i+1)%3==st.size())count++;
            
        }
        return count;
    }
};