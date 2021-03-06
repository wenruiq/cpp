#include <bits/stdc++.h>
using namespace std;

#define ll long long;
#define ar array;

bool f(int a, int b){
	return a > b; 
}

void vectorDemo(){
	vector<int> A = {11,2,3,14};

	cout << A[1] << endl; //2

	sort(A.begin(), A.end()); //O(NlogN)

	// 2,3,11,14,123
	// Binary search at O(logN)
	bool present = binary_search(A.begin(), A.end(), 3); //true
	present = binary_search(A.begin(), A.end(), 4); //false

	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(123);

	// 2,3,11,14,100,100,100,100,100,123
	
	auto it = lower_bound(A.begin(), A.end(), 100); //100 (first element >= 100)
	auto it2 = upper_bound(A.begin(), A.end(), 100); //123 (first element > 100)

	cout << *it << " " << *it2 << endl; // 100 123
	cout << it2 - it << endl; //5 (number of times 100 repeated)
	
	sort(A.begin(), A.end(), f); //reverse sort
	
	for(int &x : A){
		x++;
	}
	for(int x : A){
		cout << x << " ";
	}
	cout << endl;
	// 124,101,101,101,101,101,15,12,4,3 (reverse sorted, x++, then cout the vector)
}

void setDemo(){
	set<int> S;
	S.insert(1);
	S.insert(2);
	S.insert(-1);
	S.insert(-10);
	
	for(int x : S){
		cout << x << " ";
	}
	cout << endl;
	// -10,-1,1,2
	
	auto it = S.find(-1);
	if(it == S.end()){
		cout << "not present\n";
	}else{
		cout << "present\n";
		cout << *it << endl; //-1
	}
	
	auto it2 = S.lower_bound(-1); //-1
	auto it3 = S.upper_bound(-1); //1
	cout << *it2 << " " << *it3 << endl; // -1 1

	auto it4 = S.upper_bound(2); //doesn't exist an element > 2
	if(it4 == S.end()){
		cout << "sorry can't find something like that\n";
	}	
}

void mapDemo(){
	map<int, int> A;
	A[1] = 100;
	A[2] = -1;
	A[3] = 200;
	A[54981] = 0;

	map<char, int> cnt;
	string x = "google";

	for (char c : x){
		cnt[c]++;
	}

	cout << cnt['o'] << " " << cnt['z'] << endl; //2 0 (count number of 'o' and 'z' in "google"
}

void pairSetDemo(){
	set< pair<int,int> > S;
	
	S.insert({401, 450});
	S.insert({10,20});
	S.insert({2,3});
	S.insert({30,400});

	// 2,3
	// 10,20
	// 30,400
	// 401,450

	int point = 35;
	
	auto it = S.upper_bound({point, INT_MAX});
	if(it == S.begin()){
		cout << "the given point is not lying in any interval\n";
		return;
	}

	it--;
	pair<int, int> current = *it;
	if(current.first <= point && point <= current.second){
		cout << "yes it is present: " << current.first << " " << current.second << endl;
	}else{
		cout << "the given point is not lying in any interval\n";
	}
}
	

int main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	//vectorDemo();
	setDemo();
	//mapDemo();
    //pairSetDemo();
	
	return 0;
}
