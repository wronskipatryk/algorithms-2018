#include <iostream>
#include <stack>

using namespace std;

int main() {
	stack<int>s;
	int a;
	char x;

	while(cin>>x) {
		if(x=='+') {
			cin>>a;

			if(s.size()<10) {
				cout<<":)"<<endl;
				s.push(a);
			}else {
				cout<<":("<<endl;
			}
		}

		if(x=='-') {
			if(s.size()>0) {
				cout<<s.top()<<endl;
				s.pop();
			}else {
				cout<<":("<<endl;
			}
		}
	}
}
