#include<iostream>
#include<map>
#include<math.h>
#include<vector>
#include<string>
#include<string.h>
#include<cstdio>
#include<queue>
#include<algorithm>
#include<sstream>
#include <fstream>
#define all(X) (X).begin(),(X).end()
#define mem(X) memset(X,0,sizeof(X))
#define debug_v(v) for(int db=0;db<(v).size();db++)cout<<v[db]<<','<<;cout<<endl;
#define pqpush(pq,x,cmp) (pq).push_back(x);push_heap((pq).begin(),(pq).end(),cmp);
#define pqpop(pq,cmp) pop_heap((pq).begin(),(pq).end(),cmp);(pq).pop_back();
#define PB(x) push_back(x)
using namespace std;
typedef long long ll;
typedef vector<int>::iterator iv;
typedef map<string,int>::iterator msii;
typedef map<int,int>::iterator miii;
typedef map<int,bool>::iterator mibi;
typedef map<string,bool>::iterator msbi;
typedef map<string,int> msi;
typedef map<int,int> mii;
typedef map<int,bool> mib;
typedef map<string,bool> msb;
typedef vector<int> vi;
typedef vector<string> vs;
//#define cin f 
int main(){
	int k,n,m,x,y;
	string ne,no,div,so,se;
	ifstream f("1.txt");
	cin >> k;
	while(k){
		cin >> n >> m;
		while(k--){
			cin >> y >> x;
			if (x == m || y == n){
				cout << "divisa";
			}
			else {
				if (x>m){
					cout << "N";
				}
				else {
					cout << "S";
				}
				if (y>n){
					cout << "E";
				}
				else {
					cout << "O";
				}
			}
			cout << endl;
		} 
		cin >> k ;
	}
	f.close();
	return 0;
}
