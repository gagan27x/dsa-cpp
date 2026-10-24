class Solution {
    public List<Integer> findPeaks(int[] m) {
        ArrayList<Integer> l = new ArrayList<>();

        for(int i=1;i<m.length;i++){
            int j=i+1;
            int k=i-1;

            if(j==m.length){
                break;
            }
            if(m[i]>m[j] && m[i]>m[k]){
                l.add(i);
            }
        }
        return l;
    }
}