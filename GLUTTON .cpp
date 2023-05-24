#include <iostream>

using namespace std;

int main() {
   int n,m,a,s=0;
   cin>>a;

    for(int i=0;i<a;i++) {
        cin>>n>>m;
        int tab[n];
        int tw[n];
        s=0;

        for(int j=0;j<n;j++) {
            cin>>tab[j];
        }

        for(int k=0;k<n;k++) {
            tw[k]=86400/tab[k];
            s+=tw[k];
        }

        if(s%m==0) {
            cout<<s/m<<endl;
        }else {
            cout<<s/m+1<<endl;
        }
   }
    return 0;
}
