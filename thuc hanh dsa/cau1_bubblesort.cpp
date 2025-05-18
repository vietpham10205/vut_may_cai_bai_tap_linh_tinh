#include <iostream>
#include <stdio.h>
using namespace std;

void bubbleSort(int arr[], int n)
{
    int i, j;
    bool haveSwap = false;
    for (i = 0; i < n-1; i++){
    // i phần tử cuối cùng đã được sắp xếp
        haveSwap = false;
        for (j = 0; j < n-i-1; j++){
            if (arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]); 
                for(int i=0; i<n;i++)
                    {
                        cout<<arr[i]<<" ";
                    }
                    cout<<endl;
                haveSwap = true; // Kiểm tra lần lặp này có swap không
            }
        }
        // Nếu không có swap nào được thực hiện => mảng đã sắp xếp. Không cần lặp thêm
        if(haveSwap == false){
            break;
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
    bubbleSort(arr,n);
   
    system("pause");
    return 0;
}
