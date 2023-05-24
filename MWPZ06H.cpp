#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    int tests;
    cin>>tests;

    while(tests--) {
        int points;
        cin>>points;
        vector <int> numbers;
        int number;
        int counter = 0;
        int MAX = 0;

        for (int i=0; i<points; i++) {
            cin>>number;
            numbers.push_back(number);

            if(number > MAX) {
                MAX = number;
            }
        }

        sort (numbers.begin(),numbers.end());

        for (int i=numbers.size()-1; i>=0; i--) {
            if(numbers[i] == MAX) {
                cout<<numbers[i]<<" ";
                counter++;
            }
            else break;
        }

        for (int i=0; i<numbers.size()-counter; i++) {
            cout<<numbers[i]<<" ";
        }

        cout<<'\n';
    }
    return 0;
}