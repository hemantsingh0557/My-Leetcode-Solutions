





// //
// // // // // // //  Solve Using  One  Method  ===>     
// // // // // // //  Solve Using  One  Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====>     TC = O(nlog(n)) , SC = O(1) constant
// //                      
// //                     
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////



// class Solution {
// public:
//     int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) {
        
//     }
// };



/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////






// //                           
// //                           
// // //  1st Method    ======> 
// // //  1st Method    ======> 
// // //  1st Method    ======> 
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               



class Solution {
public:
    static bool cmp(vector<int> a , vector<int> b)
    {
        return a[1] > b[1] ;
    }
    int maximumUnits(vector<vector<int>>& boxTypes, int truckSize) 
    {
        int n = boxTypes.size() ;
        sort(boxTypes.begin() , boxTypes.end() , cmp) ;
        int ans = 0 ;
        for(int i=0; i<n && truckSize != 0 ; i++)
        {
            int boxes = boxTypes[i][0] ;
            int units = boxTypes[i][1] ;
            if(boxes<=truckSize) ans += boxes*units , truckSize -= boxes  ;
            else ans += truckSize*units , truckSize = 0 ;
        }
        return ans ;
    }
};


























