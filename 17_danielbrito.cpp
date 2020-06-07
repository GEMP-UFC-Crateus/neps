// https://neps.academy/problem/17

#include <iostream>

using namespace std;

int main(){

  int n, d, a;
  
  cin >> n;
  cin >> d;
  cin >> a;
  
  // If the aircraft is 'over' the spaceship, we just calculate the diffence between their position: 
  if(a<d){
    
    cout << d-a << "\n";
  }
  else
  // If the aircraft is 'below' the spaceship, we have to go downwards until we return to position 1.
  // To do that, we need to know how many times we have to go down (n-a).
  // When we finally reach position 1, we just calculate the distance to the spaceship (+d).
  if(a>d){
    
    cout << (n-a)+d << "\n";
  }
  // Otherwise, the aircraft and the spaceship are in the same position:
  else{
    
    cout << 0 << "\n";
  } 
  
  return 0;
}
