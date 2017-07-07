#include <iostream>
#include<cmath>
using namespace std;

int main() {
	// your code goes here
int t;

cin >>t;
for(int i=0;i<t;i++){
long int n;
cin >> n;
int r=0;
for(int j=1;;j++){
long int k=pow(5,j);
int d=n/k;
r+=d;
if(d==0)
break;
}
cout << r << endl;

}
	return 0;
}
