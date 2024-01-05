class Solution {
public:
    bool isPowerOfFour(int n) {
        long x=1,p;
        p=rec(x,n);
        return p;
    }
    bool rec(long k,long n)
    {
        if(k<n)
        return rec(k*4,n);
        else if(n==k)
        return 1;
        else
        return 0;
    }
};