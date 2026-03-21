class Solution {
public:
    long long helper(int mid, vector<int>& piles) {
        int i;
        long long ans = 0;
        for (i = 0; i < piles.size(); i++) {
            ans += (piles[i] + mid - 1) / mid;
        }
        return ans;
    }
    int minEatingSpeed(vector<int>& piles, int h) {

        int low = 1, high = -1;
        for (int i = 0; i < piles.size(); i++) {
            high = max(high, piles[i]);
        }
        int k = -1;
        while (low <= high) {

            int mid = low + ((high - low) / 2);

            if (helper(mid, piles) <= h) {
                k = mid;
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return k;
    }
};