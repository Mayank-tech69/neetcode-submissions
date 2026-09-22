class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        int n = t.size();
        stack<int> st;
        vector<int> res(n,0);
        //st.push(n-1);
        for(int i = n-1;i>=0;i--){
            while(!st.empty() && t[st.top()] <= t[i]){
                st.pop();
            }
            if(!st.empty()){
                res[i] =  st.top() - i;
            }
            st.push(i);

        }
        return res;
        
    }
};
