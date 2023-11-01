class Solution {
public:
    int maxOfArray(vector<int> &piles){
        int maxElement=INT_MIN;
        for(int i=0;i<piles.size();i++){
            if(piles[i]>maxElement){
                maxElement=piles[i];
            }
        }
        return maxElement;
    }
    long long timeTaken(vector<int> &piles,int k){
        long long totalTimeRequired=0;
        for(int i=0;i<piles.size();i++){
            totalTimeRequired+=ceil((double)piles[i]/(double)k);
        }
        return totalTimeRequired;
    }
    int minEatingSpeed(vector<int> &piles,int h){
        int low=1,high=maxOfArray(piles);
        while(low<=high){
            int mid=low+(high-low)/2;
            if(timeTaken(piles,mid)<=h){
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};