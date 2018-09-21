#include <iostream>
#include <map>
#include <string>
//#define cin f
#include <fstream>
using namespace std;

int main(){
	ifstream f("1.txt");
	
	std::map<char,int> m;
	int n,k;
	cin >> n ;
	while (n--){
		std::map<char,int> m;
		cin >> k;
		while(k--){
			char c;
			int v;
			cin >> c >> v;
			m[c] = v;
		}
		int l;
		cin >> l;
		double res=0;
		cin.ignore();
		while(l--){
			string s;
			getline(cin,s);
			//cout << s << endl;
			for (int i=0;i<s.length();i++){
				if (m.find(s[i]) != m.end()){
					res += m[s[i]];
				}
			}
		}
		res /= 100;
		std::cout.setf(std::ios::fixed);
		std::cout.precision(2);
		cout << res << "$" << endl;
	}
	
		f.close();
}