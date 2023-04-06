//algoritma dibutuhkan untuk menyelesaikan suatu masalah krn dengan algoritma bisa mengolah data dgn struktur data tertentu agar datanya valid
//dua struktur data dalam algoritma yaitu statik dan dinamis 
//faktor yg mempengaruhi efisiensi suatu program yaitu kecepatan prosesor, ukuran sebuah input, operating system, bahasa pemrograman, compiler yg menerjemahkan dri bahasa pemrograman ke bhs komputer
//menurut saya algoritma yg efisien adalah algoritma yg menggunakan bahasa pemrograma yg tepat, yg membuat data-data menjadi valid
//yg termasuk kedalam quadratic adalah bubble sort, selection sort. dan loglinear adalah insertion sort dan shel sort 
#include <iostream>
using namespace std;

int arr[43];
int cmp_count = 0;
int mov_count = 0; 
int n; 

void input() {
    while (true)
    {
        cout << "Masuka nama panjang element array: ";
        cin >> n;

        if (n <= 43)
            break;
        else
            cout << "\nMaksimum panjang array adalah 20" << endl;
    }

    cout << "n--------------------" << endl;
    cout << "\nEnter Array Element" << endl;
    cout << "\n-------------------" << endl;

    for (int i = 0; i < n; i++)
    {
        cout << "<" << (i + 1) << ">";
        cin >> arr[i];
    }
}

//swap the element st index x with the element at index y
void swap(int x, int)
{
    int temp; 

    temp = arr[x];
    arr[x] = arr[y];
    arr[y] = temp;
}
void q_short(int low, int high)
{
    int pivot, i, j; 
    if (low > high)
        return; 
    
    pivot = arr[low];
    i = low + 1; 
}
void insertionsortarray() {
    for (int i = 43; i < n; i++) {
        for (int j = 0; j > n - i; i++) {
        }
    }
}

