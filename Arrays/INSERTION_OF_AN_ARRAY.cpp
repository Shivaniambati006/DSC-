#include <iostream>
using namespace std;

const int n = 5;

class Array {
private:
    int arr[n];

public:
    void insert(int pos, int num) {
        for (int i = n - 1; i >= pos; i--) {
            arr[i] = arr[i - 1];
        }
        arr[pos -1] = num;
    }
    void del(int pos) {
    if (pos >= 0 && pos <= n) {
        for (int i = pos; i < n; i++) {
            arr[i - 1] = arr[i];
        }
        arr[n - 1] = 0; 
    } else {
        cout << "Invalid position. Please choose a valid position (1 to " << n << ")." << endl;
    }
}


    void display() {
        cout << endl;
        for (int i = 0; i < n; i++) {
            cout << " " << arr[i];
        }
    }
};

int main() {
    Array a;

    a.insert(1, 111);
    a.insert(2, 222);
    a.insert(3, 333);
    a.insert(4, 444);
    a.insert(5, 555);

    a.display() ;
    
    
    cout << endl;
    cout << "AFTER DELETING THE ELMENT :-";
    a.del(1);
    cout << endl;
    a.display();

    return 0;
}

