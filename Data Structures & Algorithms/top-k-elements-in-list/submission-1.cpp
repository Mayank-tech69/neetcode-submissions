class Solution {
public:
    struct cmp {
        bool operator()(pair<int,int>& a, pair<int,int>& b) {
            if(a.first == b.first)
                return a.second > b.second;   
            return a.first > b.first;        
        }
    };

    vector<int> topKFrequent(vector<int>& nums, int k) {
        priority_queue<pair<int,int>, vector<pair<int,int>>, cmp> pq;
        unordered_map<int,int> f;

        int n = nums.size();

        for(int i = 0; i<n; i++){
            f[nums[i]]++;
        }

        for(auto i : f){
            int freq = i.second;
            int element = i.first;
            pair<int,int> p = {freq, element};

            if(pq.size() < k){
                pq.push(p);
            }
            else if(pq.top().first < p.first){
                pq.pop();
                pq.push(p);
            }
        }

        vector<int> ans;

        while(!pq.empty()){
            ans.push_back(pq.top().second);
            pq.pop();
        }

        return ans;
    }
};