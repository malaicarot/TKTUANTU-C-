#include <iostream>

using namespace std;

void enterArr(int arr[], int &n);
void findAsymptoticX(int arr[], int n, int x);

int main()
{
    int arr[100];
    int n = 0;
    int x;
    cin >> x;
    enterArr(arr, n);
    findAsymptoticX(arr, n, x);

    system("pause");
    return 0;
}

/*Dinh nghia ham*/
void enterArr(int arr[], int &n)
{
    while (cin >> arr[n])
    {
        n++;
    }
}

// Tim vi tri phan tu lon nhat khong vuot qua x
void findAsymptoticX(int a[], int n, int x)
{
    int maxIndex = -1;
    // Tim gia tri lon nhat khong vuot qua x
    for (int i = 0; i < n; i++)
    {
        if (a[i] <= x && (a[i] >= a[maxIndex] || maxIndex == -1))
        {
            maxIndex = i;
        }
    }

    // Xuat cac gai tri do
    if (maxIndex == -1)
    {
        cout << -1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (a[i] == a[maxIndex])
            {
                cout << i << " ";
            }
        }
    }
}
