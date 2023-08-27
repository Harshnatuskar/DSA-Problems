class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        int fleets= 0;
        double max = 0.0;
        int n = position.size();
        vector<pair<int, int>> car(n);
        
        for(int i =0;i<n ; i++){
        	cars[i]= make_pair(position[i], speed[i]);
        }
        
        sort(cars.begin(), cars.end(), greater<pair<int, int>>());
        
        for(int i = 0 ; i<n; ++i){
        	double time = static_cast<double>(target - cars[i].first)/cars[i].second;
        	
        	if(time > max){
        		max = time;
        		fleets++;
        	}
        	
        }
         return fleets;
    }
};
