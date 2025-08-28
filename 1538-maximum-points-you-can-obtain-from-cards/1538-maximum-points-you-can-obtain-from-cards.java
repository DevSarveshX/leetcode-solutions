class Solution {
    public int maxScore(int[] cardPoints, int k) {
        int totalsum=0;
        for(int n:cardPoints)
        {
            totalsum+=n;
        }
        int windowsize=cardPoints.length-k;
        int start=0;
        int end=windowsize-1;
        int windowsum=Integer.MAX_VALUE;
        while(end<cardPoints.length)
        {
            int sum=0;
            for(int i=start;i<=end;i++)
            {
                sum+=cardPoints[i];
            }
            windowsum=Math.min(windowsum,sum);
            start++;
            end++;
        }
        int ans=totalsum-windowsum;
        return ans;
    }
}