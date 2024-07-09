class Solution {
public:
    double averageWaitingTime(vector<vector<int>>& customers) {
        long long wait = customers[0][1];
        long long pre_time = customers[0][0] + wait;

        for(int i=1;i<customers.size();i++){
            if(pre_time < customers[i][0]){
                wait += customers[i][1];
                pre_time = customers[i][0] + customers[i][1] ;
            }
            else{
                int time_sum = pre_time + customers[i][1];
                wait += (time_sum - customers[i][0]);
                pre_time = time_sum;
            }
        }

        double avg = double(wait)/ double(customers.size());
        return avg;
    }
};