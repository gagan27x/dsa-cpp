class Solution {
    public boolean areOccurrencesEqual(String s) {
        HashMap<Character,Integer> freq  = new HashMap<>();

        for(char c:s.toCharArray()){
            freq.put(c,freq.getOrDefault(c,0)+1);
        }
        
        HashSet<Integer> st = new HashSet<>(freq.values());
        
        return st.size()==1;
    }
}