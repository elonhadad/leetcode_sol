class Solution {

    public boolean isPalindrome(String s) {

        String alphaNumeric = s.toLowerCase().replaceAll("[^a-z0-9]", "");
        return alphaNumeric.equals(new StringBuilder(alphaNumeric).reverse().toString());
        
    }
}