// Question from Math part of prepbytes
// Clock and Angles
// https://mycode.prepbytes.com/problems/fundamentals/CLCKANGLE
//
// Ankit Surwade

#include <bits/stdc++.h>
using namespace std;
int min(int x, int y) 
{ 
    return (x < y)? x: y; 
     
} 
 
int calcAngle(double h, double m) 
{ 
    
    if (h <0 || m < 0 || h >12 || m > 60) 
        return -1;
 
    if (h == 12) h = 0; 
    if (m == 60)
     {
      m = 0;
      h += 1;
       if(h>12)
        h = h-12;
     } 

    float hour_angle = 0.5 * (h * 60 + m); 
    float minute_angle = 6 * m; 
 
    
    float angle = abs(hour_angle - minute_angle); 
 
  
    angle = min(360 - angle, angle); 
 
    return angle; 
} 
 


int main()
{
  //write your code here
  int t;
  cin>>t;
  while(t--){
    int h,m;
    cin>>h>>m;
  cout<<calcAngle(h,m)<<endl;
  }
  return 0;
}
