#include <iostream>
using namespace std;

int main(){
	short x;
	cin >> x;
	if (x <= 9){
		cout << "satuan";
	}
	else if (x <= 99){
		cout << "puluhan";
	}
	else if (x <= 999){
		cout << "ratusan";
	}
	else if (x <= 9999){
		cout << "ribuan";
	}
	else if (x <= 99999){
		cout << "puluhribuan";
	}
}
