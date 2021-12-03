#include <iostream>

using namespace std;

int main(){
    int num = 0, previous = 0, counter = 0;
    cin >> num;
    previous = num;
    // cin >> num;
    while(num != -1){
        if(num > previous){
            counter++;
        }
        previous = num;
        cin >> num;
        
    }

    cout << "Counter: " << counter << endl;
    return 0;
}