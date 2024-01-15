class Solution {
private:
    long long time(vector<int>& piles, int t) {
        long long totalhours = 0;
        for (int i = 0; i < piles.size(); i++) {
            totalhours += ceil((double)piles[i] / (double)t);
        }
        return totalhours;
    }

public:
    int minEatingSpeed(vector<int>& piles, int h) {
        cout.tie(0);
        cin.tie(0);
        ios_base::sync_with_stdio(0);
        int low = 1;
        long long totalhours;  // Change the type to long long
        int high = *max_element(piles.begin(),piles.end());
        int ans = INT_MAX;

        if (piles.size() == h) return high;

        while (low <= high) {
            int mid = (low + high) / 2;
            totalhours = time(piles, mid);

            if (totalhours <= h) {
                if (mid < ans) ans = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return ans;
    }
};
