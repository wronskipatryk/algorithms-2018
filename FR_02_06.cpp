#include <iostream>

using namespace std;

int main() {
    int amount;
    cin>>amount;
    string people[amount];
    double weight[amount], height[amount];
    double BMI[amount];

    for(int i=0; i<amount; i++) {
        cin>> people[i]>> weight[i] >> height[i];
        BMI[i] = (weight[i]/(height[i]*height[i])*10000);
    }
    
    cout<<"niedowaga"<<'\n';
    for(int i=0; i<amount; i++) {
        if(BMI[i] < 18.5) {
            cout<<people[i]<<'\n';
        }
    }
    
    cout<<"\nwartosc prawidlowa"<<'\n';
    for(int i=0; i<amount; i++) {
        if(BMI[i] >= 18.5 && BMI[i] < 25.0) {
            cout<<people[i]<<'\n';
        }
    }

    cout<<"\nnadwaga"<<'\n';
    for(int i=0; i<amount; i++) {
        if(BMI[i] >= 25.0) {
            cout<<people[i]<<'\n';
        }
    }
    
    return 0;
}