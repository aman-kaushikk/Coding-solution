class Solution {
public:
    
    void reverseString(vector<char>& s) {
        int i,j,temp;
        i=0,j=size(s)-1;
       while(i<j)
        {
            temp= s[i];
            s[i]=s[j];
            s[j]=temp;
            i++;
            j--;
        }
        
    }
};
