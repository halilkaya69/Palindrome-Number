class Solution {
public:
    bool isPalindrome(int x) {
        double kalan, tersi = 0;
        int orjinal_sayi = x;
    
        while (x > 0) {
        kalan = x % 10;
        tersi = tersi * 10 + kalan;
        x /= 10;
        }
    
        if (tersi == orjinal_sayi) {
            return true;
        } else {
            return false;
        }
    }
};
