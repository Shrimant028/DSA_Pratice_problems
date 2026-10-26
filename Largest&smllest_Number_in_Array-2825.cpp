// Find the largest number in the array 
// time complexity = 

#include<iostream>
using namespace std;

int main() {
  
  int arr[8] = {4,37,65,2,67,99,12,6};
  int largestNum=INT_MIN;
  int smallestNum=INT_MAX;

  for(int i=0; i<8;i++){
    if(largestNum<arr[i]){
   //   largestNum=arr[i];
      largestNum = max(largestNum,arr[i]);
      smallestNum = min(smallestNum,arr[i]);
    }
  }
  cout << "Largest Number :- " << largestNum << endl;
  cout << "Smallest Number :- " << smallestNum << endl;
  return 0;
}
