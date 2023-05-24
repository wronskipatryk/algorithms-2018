#include<iostream>

using namespace std;

int main() {
	string a,b,m;int t;
	cin>>t;

	while(t--) {
		cin>>a>>b;

		for(int i=0,j=0;j<min(a.length(),b.length());j++) {
			m+=a.at(j);
			i++;
			m+=b.at(j);
			i++;
		}

	cout<<m<<endl;
	m.clear();
	}
}
