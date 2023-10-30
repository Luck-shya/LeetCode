class Solution {
public:
    int wateringPlants(vector<int>& plants, int capacity) {
        int steps= 0;
        int refill = capacity;
        for(int i = 0;i<plants.size();i++){
            if(capacity<plants[i]){
                steps+=(i+1)+i;
                capacity = refill;
            }
            else{
                steps++;
            }
            capacity-=plants[i];
        }

        return steps;
    }
};