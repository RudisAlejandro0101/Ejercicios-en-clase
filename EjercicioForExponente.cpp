#include<iostream>
#include<math.h>
#include<iomanip>
using namespace std;
	int main(){
		float num1 = 68;
		for (int i =1; i <=14; i++){
			cout<<setprecision(0)<<fixed<<pow(num1,i)<<endl;
		}
	return 0;
}
