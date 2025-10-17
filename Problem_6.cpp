#include <iostream>
using namespace std;

int main() {
    bool isTrue = true;
    int even = 0;
    int odd = 0;
    
    
    while (isTrue){
    int a;
    cout << " Enter a nuumber= ";
    cin >> a;
    
    if (a == 0){
        isTrue = false;
    }else if (a%2 == 0){
        even++;
    }else {
        odd++;
    }
    
    }
    
    cout << "\n";
    
    cout << "Total Even Entered= " << even << endl;
    cout << "Total odd Entered= " << odd << endl;

    return 0;
}