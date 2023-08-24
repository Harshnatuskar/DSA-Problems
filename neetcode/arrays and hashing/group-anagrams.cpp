class Solution{
public:
	vector<vector<string>> groupAnagrams(vector<string> & strs){
	 	vector<vector<string>> vect;
	 	unordered_map<string,vector<string>> u_map;
	 	
	 	for(int i=0; i<strs.size();i++){
	 		string a= strs[i];
	 		sort(strs[i].begin(),strs[i].end());
	 		u_map[strs[i]].push_back(a); //value to be added in back passed as parameter
	 	}
	 	for(auto i:u_map){
	 		vect.push_back(i.second);//.second to access the second member in the pairs
	 	}
	 	return vect;
	} 
}
