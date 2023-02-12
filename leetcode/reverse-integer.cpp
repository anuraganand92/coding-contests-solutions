class Solution {
public:
    long reverse(long x) {
        int presign=1;
        long total;
        if (x<0) {
            presign=-1;
            x*=-1;
        }
        long n = x;
        unsigned long sum=0;
        while(n!=0){
            sum = sum*10 + n%10;
            n /= 10;
        }
        
        total=sum*presign;
        if (total>(pow(2,31)-1) || total<pow(-2,31))
            return 0;
        else
            return total;
    }
};
