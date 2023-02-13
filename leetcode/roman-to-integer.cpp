class Solution {
public:
    int romanToInt(string s) {
        int ans = 0, n = 0;
        for (int i = s.size()-1; ~i; i--) {
            switch(s[i]) {
                case 'I': n = 1; break;
                case 'V': n = 5; break;
                case 'X': n = 10; break;
                case 'L': n = 50; break;
                case 'C': n = 100; break;
                case 'D': n = 500; break;
                case 'M': n = 1000; break;
            }
            if (4*n<ans) 
                ans -= n;
            else 
                ans += n;
        }
        return ans; 
    }
};
