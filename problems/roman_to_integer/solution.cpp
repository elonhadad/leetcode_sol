class Solution {
public:

    int romanToInt(string s) {
        map<char,int> map;

        map['I'] = 1;
        map['V'] = 5;
        map['X'] = 10;
        map['L'] = 50;
        map['C'] = 100;
        map['D'] = 500;
        map['M'] = 1000;

        int size = s.length();
        int output = 0;
        for (int i=0; i<size; i++)
            if (map[s[i]] < map[s[i+1]])
                output-= map[s[i]];
            else
                output+= map[s[i]];


        return output;
    }

};