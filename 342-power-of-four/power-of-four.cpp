class Solution {
public:
    bool isPowerOfFour(int n) {
        long x=1,p;
        p=check(x,n);
        return p;
    }
    bool check(long k,long n)
    {
        if(k<n)
        return check(k*4,n);
        else if(n==k)
        return 1;
        else
        return 0;
    }
};