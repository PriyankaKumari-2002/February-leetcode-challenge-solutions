class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
     int n = str1.size();
     int m = str2.size();
      string s1 = str1 + str2;
      string s2 = str2 + str1;
    if(s1 != s2)
    {
        return "";
    }
    else
        return s1.substr(0, gcd(n,m));
    }
};
