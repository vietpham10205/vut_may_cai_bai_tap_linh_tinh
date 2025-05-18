#include <iostream>
#include <vector>
#include <string>
using namespace std;


struct Item {
    int code;
    int count;
};
void sapcodeeptron(vector<Item>& arr, int left, int right);
int main() {
    int N;
    cin >> N; 

    vector<Item> arr(N); 

    for (int i = 0; i < N; i++) {
        cin >> arr[i].code; 
        arr[i].count = 0; 
    }


    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (arr[i].code == arr[j].code) {
                arr[i].count++;
            }
        }
    }
    sapcodeeptron(arr,0,N-1);

    for (int i=0; i<N;i++) {
        if(arr[i].code==arr[i+1].code)
        {continue;}
        cout << arr[i].code << " " << arr[i].count << endl;
    }

    return 0;
}
void merge(vector<Item>& arr, int left, int mid, int right) {
  int n1 = mid - left + 1;
  int n2 = right - mid;


  vector<Item> leftArr(n1);
  vector<Item> rightArr(n2);


  for (int i = 0; i < n1; i++)
    leftArr[i] = arr[left + i];
  for (int j = 0; j < n2; j++)
    rightArr[j] = arr[mid + 1 + j];


  int i = 0, j = 0, k = left;
  while (i < n1 && j < n2) {
    if (leftArr[i].count > rightArr[j].count) {
      arr[k] = leftArr[i];
      i++;
    } else if (leftArr[i].count == rightArr[j].count && leftArr[i].code < rightArr[j].code) {
      arr[k] = leftArr[i];
      i++;} 
      else {
      arr[k] = rightArr[j];
      j++;
    }
    k++;
  }


  while (i < n1) {
    arr[k] = leftArr[i];
    i++;
    k++;
  }

  while (j < n2) {
    arr[k] = rightArr[j];
    j++;
    k++;
  }
}

void sapcodeeptron(vector<Item>& arr, int left, int right) {
  if (left < right) {

    int mid = left + (right - left) / 2;


    sapcodeeptron(arr, left, mid);
    sapcodeeptron(arr, mid + 1, right);

    merge(arr, left, mid, right);
  }
}