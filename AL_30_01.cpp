#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int t,w=0;
	string anagram,wyraz;
	cin>>anagram>>t;
	sort(anagram.begin(),anagram.end());

	while(t--) {
		cin>>wyraz;

		if(wyraz.length()==anagram.length()) {
			sort(wyraz.begin(),wyraz.end());
			
			if(anagram==wyraz) {
				w++;
			}
		}
	}

	cout<<w;
}