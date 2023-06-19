









// //
// // // // // // //  Solve Using  One   Method  ===>     
// // // // // // //  Solve Using  One   Method  ===>                        
// //                     
// //                     
// // //  1st Method  ====> Simple if-else    TC = O(n) , SC = O(1) constant
// //                      
// //                      
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////


// class Solution {
// public:
//     string maximumTime(string time) {
        
//     }
// };


/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////









// //                           
// //                           
// // //  1st Method    ======>   Simple if-else    
// // //  1st Method    ======>   Simple if-else    
// // //  1st Method    ======>   Simple if-else    
// //                             
// // //   Time Complexity   = O(n)   
// //                              
// // //   Space Complexity  = O(1) constant  
// //                               





class Solution {
public:
    string maximumTime(string time) 
    {
        int n = time.size() ;     
        for(int i=0; i<n; i++) 
        {
            if(time[0]=='?' && time[1]== '?') time[0] = '2' , time[1]= '3' ;
            if(i==0 && time[i]== '?')
            {
                if(time[1] > '3') time[i] = '1' ;
                else time[i] ='2' ;
            } 
            else if(i==1 && time[i]== '?')
            {
                if(time[0]== '0' || time[0]=='1') time[i] = '9' ;
                else time[i] ='3' ;
            }
            else if(time[3]=='?' && time[4]== '?')  time[3] = '5', time[4]= '9' ;
            else if(i==3 && time[i]== '?')  time[i] = '5' ;
            else if(i==4 && time[i]== '?')  time[i] = '9' ;
        }
        return time ;
    }
};































