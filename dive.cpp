#include <iostream>

using namespace std;

int main(){
    int horizontal = 0, depth = 0, val = 0;
    string status;
    
    cin >> status;
    while(status != "none"){
        cin >> val;
        if(status == "forward"){
            horizontal += val; 
        } else if(status == "up"){
            depth -= val;
        } else if(status == "down"){
            depth += val;
        }

        cin >> status;
    }

    cout << "Horizontal: " << horizontal << endl <<  "Depth: " << depth << endl;
    cout << "Result: " << horizontal*depth << endl;
    return 0;
}
