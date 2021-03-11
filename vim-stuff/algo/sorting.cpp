#include <bits/stdc++.h>
using namespace std;

// prints vector
void print_vec(vector<int> v){
	cout << "{" << v[0];
	for(auto k:v){
		if(k != v[0]){
			cout << ", " << k;
		}
	}
	cout << "}" << "\n";
}

// prints arr
void print_arr(int arr[], int n){
	cout << "{" << arr[0];
	for(int i=0;i<n;i++){
		if(arr[i] != arr[0]){
			cout << ", " << arr[i];
		}
	}
	cout << "}" << "\n";
}

// external comparison function (sorts strings primarily by length and secondarily by alphabetical order)
//@@
bool comp(string a, string b){
	if(a.size() != b.size()) return a.size() < b.size();
	return a < b;
}

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	// sorting vector
	vector<int> v = {4,2,5,3,5,8,3};
	cout << "Original vector: ";
	print_vec(v);

	cout << "Ascending sort: ";
	//@@
	sort(v.begin(), v.end());
	print_vec(v);

	cout << "Descending sort: ";
	//@@
	sort(v.rbegin(), v.rend());
	print_vec(v);

	cout << "\n";
	
	// sorting array
	int arr[] = {4,2,5,3,5,8,3};
	int n = sizeof(arr)/sizeof(arr[0]);
	cout << "Original array: ";
	print_arr(arr, n);

	cout << "Ascending sort: ";
	//@@
	sort(arr, arr+n);
	print_arr(arr, n);

	cout << "Descending sort: ";
	// C++14 only
	//@@
	sort(begin(arr), end(arr), greater<>());
	print_arr(arr, n);
	
	cout << "\n";

	// sorting string
	string s = "monkey";
	cout << "Original string: " << s << "\n";
	//@@
	sort(s.begin(), s.end());
	cout << "Sorted string: " << s << "\n";
	
	cout << "\n";

	// using external comparison function (sort by length followed by alphabetic)
	vector<string> v2 = {"zzz", "a", "def", "asdd", "wazehell", "africa", "adsnfew", "aaa"};
	cout << "Original vector: " << "\n";
	for(auto k:v2){
		cout << k << " ";
	}
	cout << "\n";

	//@@
	sort(v2.begin(), v2.end(), comp);

	cout << "Resulting vector: " << "\n";
	for(auto k:v2){
		cout << k << " ";
	}
	cout << "\n";
	cout << "\n";

	return 0;

}
