#include <tgmath.h>
#include <iostream>

using namespace std;


int main(){
    double inputs[3];
    string labels[3] = {"a", "b", "c"};
    
    for (int i = 0; i<3; i++) {
        cout << "Enter variable " << labels[i] << '\n';
        cin >> inputs[i];
    }

    double d;
    d = sqrt(pow(inputs[0], 2) + pow(inputs[1], 2) + pow(inputs[2], 2));
    
    cout << "Result d is: " << d << "\n";
}
