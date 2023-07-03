#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float n;
	int f,c;
	
	cin >> n;
	
	if(n == trunc(n)){
		n = trunc(n);
		cout << n << " " << n;
	}else if(n < 0){
		f = trunc(n) - 1;
		c = trunc(n) ;
		cout << f << " " << c;
	}else{
		f = trunc(n);
		c = trunc(n) + 1;
		cout << f << " " << c;
	}
}
