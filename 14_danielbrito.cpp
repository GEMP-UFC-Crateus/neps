// https://neps.academy/problem/14

#include <iostream>

using namespace std;

int main(){

  int a, b, c, h, l;
  
  cin >> a;
  cin >> b;
  cin >> c;
  cin >> h;
  cin >> l;
  
  // Supposing that 'a' is valid box height to pass through the window.
  // Then, we check if 'b' or 'c' (box width) also fits the window.
  if(a<=h && (b<=l || c<=l)){
    
    cout << "S\n";
  }
  else
  // Supposing that 'b' is valid box height to pass through the window.
  // Then, we check if 'a' or 'c' (box width) also fits the window.
  if(b<=h && (a<=l || c<=l)){
    
    cout << "S\n";
  }
  else
  // Supposing that 'c' is valid box height to pass through the window.
  // Then, we check if 'a' or 'b' (box width) also fits the window.
  if(c<=h && (a<=l || b<=l)){
    
    cout << "S\n";
  }  
  // If none of the conditions were satisfied, the box is just too big to be delivered by drone:
  else{
    
    cout << "N\n";
  }
  
  return 0;
}
