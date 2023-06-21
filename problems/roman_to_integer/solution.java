class Solution {
    public int romanToInt(String s) {
        Map <Character, Integer> map = new HashMap();
        map.put('I',1);
        map.put('V',5);
        map.put('X',10);
        map.put('L',50);
        map.put('C',100);
        map.put('D',500);
        map.put('M',1000);
        
        int size = s.length();
        int sum = 0;
        for(int i = 0; i < size; i++){  
            if (size - 1 >i && (map.get(s.charAt(i)) < map.get(s.charAt(i+1))))
                sum-= map.get(s.charAt(i));
            else
                sum+= map.get(s.charAt(i));
        }
    
        return sum;
    }
}