
class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
     vector<pair<int,int>>  cars;
     for(int i = 0;i<speed.size();i++){
        cars.push_back({position[i],speed[i]});
     }
     sort(cars.rbegin(),cars.rend());
     int fleets = 0;
     double fleets_time = 0.0;
     for(const auto&[pt,speed] :cars){
        double soloTime = static_cast<double>(target-pt)/speed;

        if(soloTime >fleets_time){
            fleets++;
            fleets_time = soloTime;
        }
     }
     return fleets;
    }
};
