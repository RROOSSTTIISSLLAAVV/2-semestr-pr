#include <iostream>
#include <stdlib.h>
using namespace std;

int main(void) {
    int matrix[10][10] = { };
    int even = 0;
    int odd = 0;

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            *(*(matrix + i) + j) = rand() % 100;
            if (*(*(matrix + i) + j) % 2 == 0) {
                even++;
            }
            else {
                odd++;
            }
        }

    }

    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            cout.width(4);
            cout << matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;

    cout << "Quantity of even numbers: " << even << endl << endl;
    cout << "Quantity of odd numbers: " << odd << endl << endl;

    cout << "Numbers in main diagonal: " << endl;
    for (int i = 0; i < 10; i++) {
        cout << *(*(matrix + i) + i) << " ";
    }
    cout << endl << endl;

    cout << "Numbers in side diagonal diagonal: " << endl;
    for (int i = 10; i > 0; i--) {
        cout << *(*(matrix + i) - i) << " ";
    }

    return 0;
}