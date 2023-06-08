//leetcode link-> https://leetcode.com/problems/powx-n/description/
// Recursive Approach 
class Solution {
private:
    double power(double x, int n)
    {   
        if(n<0)
            x=1/x;
        if(n==0)
            return 1;
        if(n==1)
            return x;
        double ans;
        ans=power(x,n/2);
        if(fmod(n,2)==0)
            return ans*ans;
        else
            return x*ans*ans;
    }
public:
    double myPow(double x, int n) {
        double ans=power(x,n);
        return ans;
    }
};
