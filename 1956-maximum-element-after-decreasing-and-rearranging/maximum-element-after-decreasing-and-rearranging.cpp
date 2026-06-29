class Solution {
public:
    int maximumElementAfterDecrementingAndRearranging(vector<int>& arr) {
        sort(arr.begin(), arr.end());

        arr[0] = 1;

        int maxEl = arr[0];

        for (int i = 1; i < arr.size(); i++) {
            if (abs(arr[i] - arr[i - 1]) > 1) {
                arr[i] = arr[i - 1] + 1;
            }
            maxEl = max(maxEl, arr[i]);
        }

        return maxEl;
    }
};