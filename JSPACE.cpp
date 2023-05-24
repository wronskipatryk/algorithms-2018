#include<iostream>
#include<string>

using namespace std;

int main() {
	string word;
	int dl;

	while(getline(cin,word)) {
		dl=word.length();

		for(int i=0;i<dl;i++) {
			if(word[i]==' ') {
				word.erase(i,1);

				if(word[i]!=' '&&word[i]>'Z') { 
					word[i]-=32;
					i--;
					dl--;
				}
			}
		}

		cout<<word<<'\n';
	}
}

