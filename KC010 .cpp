#include<iostream>

using namespace std;

int main() {
	string text;
	int numbers,words;

	while(getline(cin,text)) {
		text=text+' ';
		numbers=0;words=0;
		int dl=text.length();

		for(int i=0;i<dl;i++) {
			if(text[i]==' ') {
				if(text[i-1]<67) {
					numbers++;
				}else{
					words++;
				}
			}
		}
		cout<<numbers<<' '<<words<<endl;
	}
}