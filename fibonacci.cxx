
#include <iostream>

using namespace std;

int main(){

	int N;
	cin >> N;

	int zn = 1;
	int za = 1;
	
	
	for(int i=1;i<=N-2;i++){
		zn = zn + za;
		za = zn - za;
		}

	cout << zn << endl;

}
