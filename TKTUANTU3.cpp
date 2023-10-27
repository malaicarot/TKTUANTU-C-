#include <iostream>

using namespace std;

void enterArr(int arr[], int &n);
void exportArr(int arr[], int n);
int findAsymptoticX(int arr[], int n, int x);

int main()
{
    int arr[100];
    int n = 0;
    int x;
    cin >> x;
    enterArr(arr, n);
    // exportArr(arr, n);
    cout << findAsymptoticX(arr, n, x);

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

void exportArr(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

// Tim vi tri phan tu lon nhat khong vuot qua x
int findAsymptoticX(int a[], int n, int x)
{
    int asymptotic = -1; // Mac dinh la sai
    for (int i = 0; i < n; i++)
    {
        // Neu a[i] < x va asymptotic = -1
        // Hoac a[i] < x va a[i] > a[asymptotic]
        if(a[i] <= x && (asymptotic == -1 || a[i] > a[asymptotic])){
            asymptotic = i;
        }
    }
    return asymptotic;
}

