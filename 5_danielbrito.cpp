// https://neps.academy/problem/5

#include <iostream>

using namespace std;

int main(){

  int h, p, f, d;

  // Notice that the problem 'gives a clue', because we can represent the path through an array:
  char route[16];
  
  cin >> h >> p >> f >> d;
  
  // For each position of the array, we set the respective element (Helicopter, Police, Fugitive):
  route[h] = 'H';
  route[p] = 'P';
  route[f] = 'F';
  
  // If the fugitive is running clockwise...
  if(d==-1){
    
    // ... We traverse the array always to the left:
    for(int i=f; ; i--){
      
      // If the fugitive achieve the first position [0], we restart the counting.
      // Thus, we use the array to simulate a circular path:
      if(i==-1) i=15;
      
      // During the traversing, if the Fugitive finds the police he'll be arrested:
      if(route[i]=='P'){
        
        cout << "N\n";
        break;
      }
      
      // Otherwise, if he finds the helicopter, he'll scape:
      if(route[i]=='H'){
        
        cout << "S\n";
        break;
      }
    }
  }
    
  // If the fugitive is running anticlockwise we follow the previous idea...
  if(d==1){
    
    // ... But now we increment the value of i, traversing always to the right:
    for(int i=f; ; i++){
      
      // If the fugitive achieve the last position [16], we restart the counting.
      if(i==16) i=0;
      
      if(route[i]=='P'){
        
        cout << "N\n";
        break;
      }
      
      if(route[i]=='H'){
        
        cout << "S\n";
        break;
      }
    }
  }
  
  return 0;
}
