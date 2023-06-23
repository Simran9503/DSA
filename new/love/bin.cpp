#include <iostream>
using namespace std;
int binarysearch(int arr[] , int size, int key) {
  int start = arr[0];
  int end = arr[size-1];
  
  int mid = (start+end)/2;

  while(start<=mid) {
    if ( arr[mid] == key) {
      return mid;
    }
    if(arr[mid]<key) {
      start=mid + 1;
      
    }
    else{
      end= mid - 1;
    }
    mid = (start+end)/2;
  }
  return -1;
}
int main() {
  int even[6] = {1,4,7,9,11,17};
  int odd[5] = {2, 4, 7, 9, 13};

  int evenindex = binarysearch(even, 6, 11);
  cout<< " index is : "<< evenindex<<endl;
  int oddindex = binarysearch(odd, 5, 4);
  cout<<" index is : " << oddindex<<endl;
  return 0;
}