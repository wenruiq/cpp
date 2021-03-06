#include <bits/stdc++.h>
using namespace std;

int max_subarr_sum(int arr[], int n){
	int best = 0, sum = 0;
	for(int k = 0; k < n; k++){
		sum = max(arr[k], sum + arr[k]);
		best  = max(best, sum);
	}
	return best;
}



int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int arr[] = {-1,2,4,-3,5,2,-5,2};
	int n = sizeof(arr)/sizeof(arr[0]);

	cout<<max_subarr_sum(arr,n)<<"\n";

	return 0;
}
