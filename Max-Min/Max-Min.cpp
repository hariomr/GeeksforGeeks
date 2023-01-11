class Solution
{
   public:
    int findSum(int a[], int N)
    {
        int min = 100000000;
        int max = -99999999;
        
        for(int i=0;i<N ;i++){
            if(min>a[i]){
                min=a[i];
            }
            if(max<a[i]){
                max=a[i];
            }
        }
        int ans = min + max;
        return ans;
    }

};
