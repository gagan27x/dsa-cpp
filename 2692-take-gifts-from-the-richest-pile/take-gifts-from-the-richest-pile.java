class Solution {
    public long pickGifts(int[] gifts, int k) {

        // Max Heap
        PriorityQueue<Integer> pq =
            new PriorityQueue<>(Collections.reverseOrder());

        // Add all piles
        for (int gift : gifts) {
            pq.offer(gift);
        }

        // Perform k operations
        while (k-- > 0) {

            int x = pq.poll();

            int remaining = (int) Math.sqrt(x);

            pq.offer(remaining);
        }

        // Calculate total
        long sum = 0;

        while (!pq.isEmpty()) {
            sum += pq.poll();
        }

        return sum;
    }
}