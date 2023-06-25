class Solution {
    public boolean isValid(String s) {
        Stack<Character> ss = new Stack<>();


        for (int i=0; i<s.length(); i++){
            if (s.charAt(i) == '(' || s.charAt(i) == '[' || s.charAt(i) == '{')
                ss.push(s.charAt(i));
            else {
                if (ss.empty())
                    return false;
                else if (ss.peek() == '(' && s.charAt(i) == ')')
                    ss.pop();
                else if (ss.peek() == '{' && s.charAt(i) == '}')
                    ss.pop();
                else if (ss.peek() == '[' && s.charAt(i) == ']')
                    ss.pop();
                else {
                    return false;
                }
            }
        }
        return ss.empty();
    }
}