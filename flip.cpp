#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;
vector<int> flip(string A){
		int max_difference = 0;
		int max_j = 0;
		int max_i = 0;
		// vector<pair<int,int>> lr_pair;
		vector<int> answer;
		for(int i = 0; i < A.length(); i++){
			int no_of_ones = 0;
			int no_of_zeroes = 0;
			int difference = 0;

			// if(A[i]=='0'){
			// 	no_of_zeroes++;
			// else{
			// 	no_of_ones++;
			// }
			for(int j=i; j<A.length(); j++){
				if(A[j]=='1'){
					no_of_ones++;
				}
				else{
					no_of_zeroes++;
				}
				cout<<"No. of ones"<<no_of_ones<<endl;
				cout<<"No_of_zerows"<<no_of_zeroes<<endl;
				difference = no_of_zeroes - no_of_ones;
				if(difference> max_difference){
					cout<<"Updating max difference"<<endl;
					max_difference = difference;
					cout<<max_j;
					cout<<max_i;
					max_j = j;
					max_i = i;
				}
				// max_difference = max(max_differnece, difference);
			}
			}
			answer.push_back(max_i+1);
			answer.push_back(max_j+1);
			return answer;
		}
int main() {
	// your code goes here
	string A = "1011101110000";
	vector<int> ans = flip(A);
	for(int i = 0; i < 2; i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
