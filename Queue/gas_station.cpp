class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int total_cost=0;
        int total_gas=0;
        for(auto val: gas){
            
            total_gas=total_gas+val;

        }
        for(auto val: cost){
            
            total_cost=total_cost+val;
        }
        if(total_cost>total_gas){
            return -1;
        }
        int start=0;
        int curr_amount=0;
        for(int i=0;i<gas.size();i++){
            curr_amount+=(gas[i]-cost[i]);
            if(curr_amount<0){
                start=i+1;
                curr_amount=0;
            }
        }
        return start;
    }
};
