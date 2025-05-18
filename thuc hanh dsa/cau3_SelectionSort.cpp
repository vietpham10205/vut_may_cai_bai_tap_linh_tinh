#include <iostream>
using namespace std;

void xuat(int arr[],int n)
{
      for(int i=0; i<n;i++)
                    {
                        cout<<arr[i]<<" ";
                    }
                    cout<<"\n";
}
// Hàm đổi chỗ 2 số nguyên
void swap(int arr[], int n,int &xp, int &yp)
{
    int temp = xp;
    xp = yp;
    yp = temp;
    xuat(arr,n);
}
// Hàm selection sort
void selectionSort(int arr[], int n)
{
    int i, j, min_idx;
    // Di chuyển ranh giới của mảng đã sắp xếp và chưa sắp xếp
    for (i = 0; i < n; i++)
    {
 // Tìm phần tử nhỏ nhất trong mảng chưa sắp xếp
    min_idx = i;
        for (j = i+1; j < n; j++)
            if (arr[j] < arr[min_idx])
                min_idx = j;
 
 // Đổi chỗ phần tử nhỏ nhất với phần tử đầu tiên
            if(arr[min_idx]<arr[i])
            {
                swap(arr[min_idx], arr[i]);
                xuat(arr,n);
            }
                
                
    }

}

int main()
{
    int n;
    int arr[30];
    cin >>n;
    for(int i=0; i<n;i++)
    {
        cin>>arr[i];
    }
    selectionSort(arr,n);
    system("pause");
    return 0;
}