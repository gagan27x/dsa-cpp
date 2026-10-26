
import java.util.*;

class Solution {
    public int[] frequencySort(int[] nums) {
        int n = nums.length;
        HashMap<Integer, Integer> freq = new HashMap<>();

        // Step 1: Count frequencies
        for (int x : nums) {
            freq.put(x, freq.getOrDefault(x, 0) + 1);
        }

        // Step 2: Convert int[] to Integer[]
        Integer[] arr = new Integer[n];

        for (int i = 0; i < n; i++) {
            arr[i] = nums[i];
        }

        // Step 3: Sort by frequency ascending,
        // and by value descending when frequencies tie
        Arrays.sort(arr, (a, b) -> {
            if (!freq.get(a).equals(freq.get(b))) {
                return freq.get(a) - freq.get(b);
            }
            return b - a;
        });

        // Step 4: Copy back to int[]
        for (int i = 0; i < n; i++) {
            nums[i] = arr[i];
        }

        return nums;
    }
}
