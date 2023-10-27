#include <iostream>

using namespace std;

void enterArr(int a[], int n);
int findDeviationNums(int a[], int n, int x, int y);

int main()
{
    int a[100];
    int n, x, y;
    cin >> n >> x >> y;
    enterArr(a, n);
    cout << findDeviationNums(a, n, x, y);

    system("pause");
    return 0;
}

/*Dinh nghia Ham*/
void enterArr(int a[], int n)
{
    int i = 0;
    while (i < n)
    {
        cin >> a[i];
        i++;
    }
}

// Tim so nho nhat co do lech khong vuot qua Y
int findDeviationNums(int a[], int n, int x, int y)
{
    int minIndex = -1;
    if (y < 0)
    {
        return -1;
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if ((a[i] >= (x - y) && a[i] <= (x + y)) && (a[i] < a[minIndex] || minIndex == -1))
            {
                minIndex = i;
            }
        }
    }

    return minIndex;
}
