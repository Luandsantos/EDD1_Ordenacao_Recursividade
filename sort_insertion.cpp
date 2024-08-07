#include <iostream>
using namespace std;

void sort_insertion(int t, int *a)
{
    int aux, j;
    for (int i = 1; i < t; ++i)
    {
        aux = a[i];
        for (j = i - 1; (j >= 0) && (a[j] > aux); --j)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = aux;

        for (int k = 0; k < t; ++k)
        {
            cout << "[" << k << "]: " << a[k] << " ";
        }
        cout << endl << "---------------" << endl;
    }
}

void print(int t, int *a)
{
    for (int i = 0; i < t; ++i)
    {
        cout << "Elemento " << i << " = " << a[i] << endl;
    }
    cout << "----------------" << endl;
}

int main(int argc, char** argv)
{
    int v[8] = {49, 38, 58, 87, 34, 93, 26, 13};
    print(8, v);
    sort_insertion(8, v);
    print(8, v);

    return 0;
}
