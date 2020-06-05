// https://neps.academy/problem/3

// It took a while for me to realize what the problem was asking for.
// But it basically asks for the biggest number, smaller than n that makes m and x coprimes.
// It means that their greatest common divider must be 1.

#include <iostream>

using namespace std;

long int gcd(long int a, long int b) { 
   
  if (b==0) return a;
    
  return gcd(b, a%b);
} 

int main(){

  long int m, n;
  
  cin >> m >> n;
  
  // Traversing backwards because we want to find the greatest number:
  for(long int x=n-1; x>=1; x--){
    
    // Checking if their greatest common divider is 1:
    if(gcd(m, x)==1){
      
      cout << x << "\n";
      
      break;
    }
  }
  
  return 0;
}
