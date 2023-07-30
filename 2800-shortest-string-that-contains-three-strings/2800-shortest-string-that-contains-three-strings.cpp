









// class Solution {
// public:
//     string minimumString(string a, string b, string c) 
//     {
//     }
// };












// //
// // // // // // //  Solve Using  Only One  Method  ===>     
// // // // // // //  Solve Using  Only One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>  All Combination and Merge   TC = O(n^2) , SC = O( 6*300 ) 
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////





// //                           
// //                           
// // //  1st Method    ======> All Combination and Merge
// // //  1st Method    ======> All Combination and Merge
// // //  1st Method    ======> All Combination and Merge
// //                             
// // //   Time Complexity   = O(n^2)   
// //                              
// // //   Space Complexity  = O( 6 * 300 )   
// //                               




class Solution {
public:
    static bool cmp(string a , string b)
    {
        if( a.size() == b.size() )  return a<b ; 
        return a.size() < b.size() ; 
    }
    string mergeTwo(string s , string t )
    {
        int n = s.size()  , m = t.size() ;
        if( s.find(t) != std::string::npos ) return  s ;
        for(int i= min( n , m ); i>=0; i--)
        {
            if( s.substr(n-i) == t.substr(0,i) ) return s + t.substr(i) ;
        }
        return s + t ;
    }
    string mergeThree(string &s1 , string &s2 , string &s3)
    {
        // return mergeTwo(s1 , mergeTwo(s2 , s3)) ;
        return mergeTwo( mergeTwo(s1 , s2) , s3 ) ;
    }
    string minimumString(string a, string b, string c) 
    {
        vector<string> allstring ;
        allstring.push_back(  mergeThree( a , b , c )  )  ;
        allstring.push_back(  mergeThree( a , c , b )  )  ;
        allstring.push_back(  mergeThree( b , a , c )  )  ;
        allstring.push_back(  mergeThree( b , c , a )  )  ;
        allstring.push_back(  mergeThree( c , a , b )  )  ;
        allstring.push_back(  mergeThree( c , b , a )  )  ;
        sort( allstring.begin() , allstring.end() , cmp ) ; 
        // for( int i=0; i<6; i++) cout<<allstring[i]<<endl;
        return allstring[0] ;
    }
} ;   


































