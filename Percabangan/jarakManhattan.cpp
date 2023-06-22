#include <iostream>
using namespace std;

int main(){
	int x1,x2,y1,y2,s,a,o;
	//unsigned int jml;
	
	cin >> x1; cin >> y1; cin >> x2; cin >> y2;
	o = x1 - x2;
	a = y1 - y2;
	
	if (o < 0){
		o = o*-1;
	}
	if (a < 0){
		a = a*-1;
	}
	s = o + a;
	
	cout << s;
	
	
}
