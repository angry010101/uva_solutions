#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int x;
	vector<int> v;
	cin >> x;
	int l=x;
	while (x--){
		int a;
		for (int i=0;i<3;i++){
			cin >> a;
			v.push_back(a);
		}
		sort(v.begin(),v.end());
		cout << "Case " << (l-x) << ": " << v[1] << endl;;
		v.clear();
	}
}
