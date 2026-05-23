class Solution {
public:
    int reverse(int x) {
        long long num = x;
        long long sing = (num < 0) ? -1 : 1;

        num = llabs(num);

        long long rev = 0;
        while(num > 0) {
            int dig = num % 10;
            rev = rev * 10 + dig;
            num /= 10;
        }

        rev *= sing;

        if(rev > INT_MAX || rev < INT_MIN) return 0;
        return (int)rev;
    }
};
