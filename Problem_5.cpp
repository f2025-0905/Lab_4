#include <iostream>
using namespace std;

int main() {
    bool isTrue = true;
    
    while (isTrue) {
    
    int a, b;
    cout << " Enter first nuumber= ";
    cin >> a;
    cout << " Enter Second nuumber= ";
    cin >> b;
    
        
    int opt;
    cout << "Select an option from below" << endl;
    cout << "1. Adition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Exit" << endl;
    cin >> opt;
    
        
       switch (opt){
       case 1: cout << "Adition= " << a+b << endl;
       break;
       case 2: cout << "Subtraction= " << a-b << endl;
       break;
       case 3: cout << "Multiplication= " << a*b << endl;
       break;
       case 4: cout << "Division= " << a/b << endl;
       break;
       case 5: isTrue = false;
       break;
       default: cout << "Invalid option" << endl;
        }
       
    
    
    }
    

    return 0;
}