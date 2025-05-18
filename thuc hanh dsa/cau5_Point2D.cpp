#include <iostream>
#include <vector>
using namespace std;
#define MAX 3000

class diem
{
    public:
      int x;
      int y;
    public:
        
        friend istream & operator>>(istream & x,diem & y); //Nhap()
	    friend ostream & operator<<(ostream & x,diem & y); //Xuat()
        
};
void sapxep(vector<diem>& pairs);
istream & operator>>(istream & a,diem & b)
{
	a>>b.x; 
	a>>b.y;
	return a;
}
void sapxeptron(vector<diem>& arr, int left, int right);

ostream & operator<<(ostream & a,diem & b)
{
	a<<b.x<<" "<<b.y<<"\n"; 
	return a;
}
void xep( diem arr[], int n);
int main()
{
    diem t;
    int n;
    std::vector<diem> arr;
    cin>>n;
    for (int i=0;i<n; i++)
    {
        cin>>t;
        arr.push_back(t);
        
    }
    sapxeptron(arr,0,n-1);
    for (int i=0;i< arr.size(); i++)
    {
        cout<<arr[i];
    }
    return 0;
}



// Function to merge two sub-arrays of a vector of pairs
void merge(vector<diem>& arr, int left, int mid, int right) {
  int n1 = mid - left + 1;
  int n2 = right - mid;

  // Create temporary arrays
  vector<diem> leftArr(n1);
  vector<diem> rightArr(n2);

  // Copy data to temporary arrays
  for (int i = 0; i < n1; i++)
    leftArr[i] = arr[left + i];
  for (int j = 0; j < n2; j++)
    rightArr[j] = arr[mid + 1 + j];

  /* Merge the temporary arrays back into arr[left..right]*/
  int i = 0, j = 0, k = left;
  while (i < n1 && j < n2) {
    if (leftArr[i].x < rightArr[j].x) {
      arr[k] = leftArr[i];
      i++;
    } else if (leftArr[i].x == rightArr[j].x && leftArr[i].y >= rightArr[j].y) {
      arr[k] = leftArr[i];
      i++;
    } else {
      arr[k] = rightArr[j];
      j++;
    }
    k++;
  }

  /* Copy the remaining elements of leftArr[], if there are any */
  while (i < n1) {
    arr[k] = leftArr[i];
    i++;
    k++;
  }

  /* Copy the remaining elements of rightArr[], if there are any */
  while (j < n2) {
    arr[k] = rightArr[j];
    j++;
    k++;
  }
}

// Recursive function to  a sub-array of arr[left..right]
void sapxeptron(vector<diem>& arr, int left, int right) {
  if (left < right) {
    // Find the middle point
    int mid = left + (right - left) / 2;

    //  x and y halves
    sapxeptron(arr, left, mid);
    sapxeptron(arr, mid + 1, right);

    // Merge the ed halves
    merge(arr, left, mid, right);
  }
}