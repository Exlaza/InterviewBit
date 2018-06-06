#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int kadane_algo(vector<int> A){
  int max_global = A[0];
  int max_current = A[0];
  for(int i = 1; i < A.size(); i++){
    max_current = max(max_current + A[i], A[i]);
    if(max_current>max_global){
      max_global = max_current;
    }
  }
  return max_global;
}

int main(){
  vector<int> A = {2,3,-5,3,-5,6,-7};
  int answer = kadane_algo(A);
  cout<<answer<<endl;
  return 0;
}
