#include <iostream>
#include <vector>
using namespace std;
std::vector<int> inputVector();

void xuat(std::vector<int>& arr,int n);

void merge(std::vector<int>& arr, int left, int mid, int right);

void mergeSort(std::vector<int>& arr, int left, int right);

int main()
{
    
    std::vector<int> arr= inputVector();
    int si = arr.size();
    mergeSort(arr, 0, si - 1);
    
    
    system("pause");
    return 0;
}
std::vector<int> inputVector() {
    int n;
    cin >> n;

    std::vector<int> vec(n);
    for (int i = 0; i < n; i++) {
        std::cin >> vec[i];
    }

    return vec;
}

void xuat(std::vector<int>& arr,int n,int l, int r)
{
      for(int i=0; i<n;i++)
                    {
                        if (i == l) cout << "[ ";
                        cout<<arr[i]<<" ";
                        if (i == r) cout << "] ";
                    }
                    cout<<"\n";
}

void merge(std::vector<int>& arr, int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    // Tạo hai mảng con tạm thời
    std::vector<int> L(n1), R(n2);

    // Sao chép dữ liệu vào mảng con tạm thời L[] và R[]
    for (int i = 0; i < n1; i++)
        L[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        R[j] = arr[mid + 1 + j];

    // Merge hai mảng con tạm thời lại thành mảng arr[]
    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
  

    // Sao chép các phần tử còn lại của L[], nếu có
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }

    // Sao chép các phần tử còn lại của R[], nếu có
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
      
}
void mergeSort(std::vector<int>& arr, int left, int right) {
    if (left < right) {
        int mid = left + (right - left) / 2;

        // Gọi đệ quy cho mảng con bên trái và bên phải
        mergeSort(arr, left, mid);
        
        mergeSort(arr, mid + 1, right);
       
        // Merge hai mảng con đã sắp xếp
        merge(arr, left, mid, right);
         int s = arr.size();
            xuat(arr,s,left, right);
    }
}