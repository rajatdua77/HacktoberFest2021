#include<iostream>
using namespace std;


int main() {
    
     int n, t = 1, temp = 1;
    cin >> n;
    
    if (n < 2) {
        cout << "*"; 
        return 0;
    }
    
    for (int i = 0; i < (n / 2) + 1; i++) {
        
        for (int spaces = i; spaces < n / 2; spaces++) {
            cout << " ";
        }
            
        for (int j = 0; j < (t + i); j++) {
            cout << "*";
        }
        
        t++;
        cout << endl;
        
    }
    
    t = (t/2);
    int t1 = n - 2;
    
    for(int i = (n / 2); i > 0; i--) {
        
        for (int spaces = 0; spaces < temp; spaces++) {
            cout << " ";
        }
            
        for (int j = 0; j < t1; j++) {
            cout << "*";
        }
        
        t--;
        t1 -= 2;
        temp++;
        cout << endl;
    }
    
}
