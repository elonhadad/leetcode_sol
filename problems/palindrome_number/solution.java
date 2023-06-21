class Solution {
    public boolean isPalindrome(int x) {
        int n = x;
        long rev = 0;
        while (n != 0) {
            rev = 10 * rev + (n % 10);
            n = n / 10;
        }
    return (rev == x && x >= 0);
    }
}