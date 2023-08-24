class Solution{
public:
	vector<int> topKFrequent(vector<int> & nums, int k){
		unordered_map<int,int> f_map;
		for(int n: nums){
			f_map[n]++;
		}
		priority_queue<pair<int,int>> max_heap;
		for(const auto & [n,f] : f_map){
			max_heap.push({f,n});
		}
		vector<int> result;
		while(k--){
			result.push_back(max_heap.top().second);
			max_heap.pop();
		}
		return result;
	}

};
