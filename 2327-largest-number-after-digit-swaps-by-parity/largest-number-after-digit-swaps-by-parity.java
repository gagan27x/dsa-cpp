class Solution {
    public int largestInteger(int num) {

        PriorityQueue<Integer> even = new PriorityQueue<>(
            Collections.reverseOrder()
        );

        PriorityQueue<Integer> odd = new PriorityQueue<>(
            Collections.reverseOrder()
        );

        String s = String.valueOf(num);

        // Store digits according to parity
        for (char c : s.toCharArray()) {
            int digit = c - '0';

            if (digit % 2 == 0) {
                even.offer(digit);
            } else {
                odd.offer(digit);
            }
        }

        StringBuilder ans = new StringBuilder();

        // Reconstruct the largest number
        for (char c : s.toCharArray()) {

            int digit = c - '0';

            if (digit % 2 == 0) {
                ans.append(even.poll());
            } else {
                ans.append(odd.poll());
            }
        }

        return Integer.parseInt(ans.toString());
    }
}