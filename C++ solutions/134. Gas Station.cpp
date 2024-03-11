class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         int len = gas.size();
        int total_gas = 0, total_cost = 0, tank = 0, start = 0;
        
        for(int i = 0; i < len; i++) {
            total_gas += gas[i];
            total_cost += cost[i];
            tank += gas[i] - cost[i];
            
            if(tank < 0) {
                tank = 0;
                start = i + 1;
            }
        }
        
        if(total_gas < total_cost) return -1;
        return start < len ? start : -1;
    }
};