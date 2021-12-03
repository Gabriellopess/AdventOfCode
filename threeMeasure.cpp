#include <iostream>

using namespace std;

int main(){
    int num = 0, sum1 = 0, sum2 = 0, sum3 = 0, sum4 = 0, counter = 0, i = 0, j = 0, k = 0, z = 0;
    int prev1 = 0, prev2 = 0, prev3 = 0, prev4 = 0;
    cin >> num;

    while(num != -1){
        if(i < 3){
            sum1 += num;
            i++;
        }
        if(i > 1){
            if(j < 3){
                sum2 += num;
                j++;
            }
        }
        if(j > 1){
            if(k < 3){
                sum3 += num;
                k++;
            }
        }
        if(k > 1){
            if(z < 3){
                sum4 += num;
                z++;
            }
        }

        if(i == 3 && j == 3) {
            if(sum1 < sum2){
                counter++;
            }
            sum1 = 0;
            i = 0;
        }
        if(j == 3 && k == 3){
            if(sum2 < sum3){
                counter++;
            }
            j = 0;
            sum2 = 0;
        }
        if(k == 3 && z == 3){
            if(sum3 < sum4){
                counter++;
            }
            k = 0;
            sum3 = 0;
        }
        if(z == 3 && i == 3){
            if(sum4 < sum1){
                counter++;
            }
            z = 0;
            sum4 = 0;
        }

        cin >> num;
    }

    cout << "Counter: " << counter << endl;
    return 0;
}