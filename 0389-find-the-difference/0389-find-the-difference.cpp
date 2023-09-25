








// class Solution {
// public:
//     char findTheDifference(string s, string t) {
        
//     }
// };























class Solution {
public:
    char findTheDifference(string s, string t) 
    {
        int hsh1[150] = {0} ; 
        int hsh2[150] = {0} ; 
        int m = s.size() , n = t.size()  ;
        for(int i=0; i<m; i++) hsh1[s[i] - 'a']++  ;
        for(int i=0; i<n; i++) hsh2[t[i] - 'a']++  ;
        for(int i =0; i<150; i++)
        {
            if( hsh1[i] != hsh2[i] ) return i+'a' ;
        }
        return 'a' ;
    }
};

















































