#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    float* array = new float[20];
    int neg = 0, pos = 0;

    for (int i = 0; i < 20; i++)
    {
        array[i] = (rand() % 5) - 2;
        cout << array[i] << " ";

        if (array[i] >= 0)
        {
            pos++;
        }

        else {
            neg++;
        }
    }

    cout << endl;
    cout << pos << endl;
    cout << neg << endl;
}