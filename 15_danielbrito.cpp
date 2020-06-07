// https://neps.academy/problem/15

#include <iostream>

using namespace std;

int main(){

  int c, a, countTravels=0;
  
  cin >> c;
  cin >> a;
  
  // While there is enough space for 'a' students and one monitor in the cable bar that supports 'c' passengers.
  // Notice that this condition is used just to maximize the number of students on each travel.
  // So, when it becomes false, it's possible that some students didn't travel yet.
  while(a>=(c-1)){
    
    a -= c-1; // We subtract from students the number of them that fits in the cable bar (with one monitor): 
    countTravels++; // So, we increment that one more travel can happen
  }
  
  // Here, we check if there is still any student to travel, and increment (or not) the counter with this last travel:
  a!=0 ? cout << countTravels+1 << "\n" : cout << countTravels << "\n";
  
  return 0;
}
