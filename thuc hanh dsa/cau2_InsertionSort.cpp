#include <iostream>
#include <stdio.h>
using namespace std;

void xuat(int arr[],int n)
{
      for(int i=0; i<n;i++)
                    {
                        cout<<arr[i]<<" ";
                    }
                    cout<<"\n";
}

void insertionSort(int arr[], int n)
{
   int i, key, j;
   for (i = 1; i < n; i++)
   {
       key = arr[i];
       j = i-1;
  
       /* Di chuyển các phần tử có giá trị lớn hơn giá trị 
       key về sau một vị trí so với vị trí ban đầu
       của nó */
       while (j >= 0 && arr[j] > key)
       {
           arr[j+1] = arr[j];
           xuat(arr,n);
           j = j-1;
       }
       arr[j+1] = key;
       xuat(arr,n);
        
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
    insertionSort(arr,n);
   
    system("pause");
    return 0;
}