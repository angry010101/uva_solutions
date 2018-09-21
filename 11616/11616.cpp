#include <iostream>
#include <map>
#include <string>
#include <fstream>
using namespace std;

map<char,int> m;
map<int,char> ma;
	
void init(){
	m['I'] = 1 ; 
	m['V'] = 5;
	m['X'] = 10;
	m['L'] = 50;
	m['C'] = 100;
	m['D'] = 500;
	m['M'] = 1000;
	
	ma[1] = 'I';
	ma[5] = 'V';
	ma[10] = 'X';
	ma[50] = 'L';
	ma[100] = 'C';
	ma[500] = 'D';
	ma[1000] = 'M'; 
}
string s;

int findNum(){
	return 1;
}
//define cin  f
int main(){
	init();
	ifstream f("1.txt");
	char x;
	while (cin >> s){
		x = s[0];
		if (m.find(x) != m.end()){
			int pos=0;
			int res=0;
			int last=0;
			bool dec=false;
			int temp=0;
			while(pos<=s.size()){
				int num = m[s[pos]];
				pos++;
				if (last < num || (last==num && dec==true)){
					res -= last;
					if (res !=0) dec = true;
				}
				else {
					dec = false;
					res += last;
				}
				last = num;
			}
			cout << res << endl;
			
		}
		else {
			//to roman
			string res = "";
			int last = 0;
			int lastc = '0';
			int pos=s.size()-1;
			int posr=1; 
			while (pos >= 0){
				int n = int(s[pos] - '0');
				if (n ==0){
					pos--;
					posr*=10;
					continue;
				}
				if (abs(5-n)+1 >= abs(n)){
					// do add
					int x = abs(n);
				//	cout << "ONE";
					while (x--){
						res += ma[posr];
					}
				}
				else {
					// do sub
					if (abs(10-n)+1 < abs(5-n)){
					//	cout <<"TWO" <<endl;
						int x = abs(10-n);
						res += ma[10*posr];
						while (x--) res += ma[posr];
					}
					else {			
					//	cout <<"THREE" <<endl;						
						int x = abs(5-n);
						if (5-n >0){
								
							res += ma[5*posr];
							while (x--) res += ma[posr];
						}
						else {
							
							while (x--) res += ma[posr];
							res += ma[5*posr];
						}
					}
				}
				pos--;
				posr*=10;
			}
			for (int i=res.size()-1;i>=0;i--)
			cout << res[i] ;
			cout << endl;
		}
	}
}
