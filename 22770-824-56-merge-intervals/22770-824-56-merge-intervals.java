class Solution {
    public int[][] merge(int[][] intervals) {
        List<int[]> result = new ArrayList<>();
        Arrays.sort(intervals, new Comparator<int[]>() {
            @Override
            public int compare(int[] a, int[] b) {
                return Integer.compare(a[0], b[0]); 
            }
        });
        int start = intervals[0][0], end = intervals[0][1];
        for(int i = 1; i < intervals.length; i++){
            if(intervals[i][0] <= end){
                end = Math.max(end,intervals[i][1]);
            }
            else{
                result.add(new int[]{start, end});
                start = intervals[i][0];
                end = intervals[i][1];
            }
        }
        result.add(new int[]{start, end});
        return result.toArray(new int[result.size()][]);
    }
}