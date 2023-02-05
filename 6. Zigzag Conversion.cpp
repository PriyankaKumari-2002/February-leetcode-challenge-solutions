class Solution {
public:
    string convert(string s, int numRows) {
       if(numRows == 1) 
           return s;
        int row = 0;
        bool diagonal;
        string st[numRows];
        for(int i=0; i<numRows; i++)
        {
            st[row].push_back(s[i]);
            
            //if row is the last row of given numRows
            if(row == numRows-1)
                diagonal = true;
            if(row == 0)
                diagonal = false;
            if(diagonal)
                row--;
            else
                row++;
        }
        string ans = "";
        for(int i=0; i<numRows; i++)
        {
            ans+=st[i];
        }
        
        return ans;
    }
};
