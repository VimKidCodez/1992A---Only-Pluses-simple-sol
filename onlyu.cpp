// code folder onlyu.cpp
// VimKidCodez
#include<iostream>
using namespace std;
int main(){
	int t,a,b,c;
       	cin >> t;
	while(t--){
		cin >> a >> b >> c;
		int n(5);
		while(n--){
			if(a<=b && a<=c){
				a++;}
			else if (b<=a&& b<=c){
				b++;}
			else if (c<=a && c<=b){
				c++;}}
	cout << a*b*c << endl;
	}
}	
