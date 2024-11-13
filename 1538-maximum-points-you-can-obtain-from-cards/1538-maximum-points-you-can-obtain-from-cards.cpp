class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
        int lSum=0;
        int rSum=0;
        int maxS=0;
        for(int i=0;i<k;i++)lSum=lSum+cardPoints[i];
        maxS=lSum;
        int e=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            lSum-=cardPoints[i];
            rSum+=cardPoints[e];
            e--;
            maxS=max(lSum+rSum,maxS);
        }
        return maxS;
    }
};