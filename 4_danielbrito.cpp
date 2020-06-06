// https://neps.academy/problem/4

#include <iostream>

using namespace std;

int main(){

  // Long int is necessary to avoid run time error:
  long int n, m, x;

  // These two variables are the key to solve the problem.
  // Notice that we start the last 'diving length' with zero:
  long int last=0, sum=0;
  
  cin >> n >> m;
  
  for(int i=0; i<n; i++){
    
    // Receving the 'length' of each diving:
    cin >> x;
    
    // We want the minimum value of the 'diving length', but it has to be greater than the last one:
    if(min(x, m-x)>=last){
      
      // We now add the new 'diving length' to sum:
      sum += min(x, m-x);
      
      // And update 'last' with the value of the last 'diving lenght' that we just registered:
      last = min(x, m-x);
    }
    else
    // Here we know that the minumum 'diving length' is smaller than the last one, so we check for the greatest value:
    if(max(x, m-x)>=last){
      
      // And follow the same ideia of the last case:
      sum += max(x, m-x);
      
      last = max(x, m-x);
    }
    // Otherwise, the minimum and maximum 'diving length' are still smaller than the last one, breaking the restriction:
    else{
      
      cout << "-1\n";
      return 0;
    }
  }

  // Finally, we print the minimum sum of the 'diving lengths':
  cout << sum << "\n";
  
  return 0;
}