#include <iostream>

int Max(int arr[], int n){

  int temp = arr[0];
  for(int i = 0; i < n; i++){

    if(temp < arr[i]){
      temp = arr[i];
    }

  }
  
  return temp;

}

int Min(int arr[], int n){

  int temp = arr[0];
  for(int i = 0; i < n; i++){

    if(temp > arr[i]){
      temp = arr[i];
    }

  }
  
  return temp;

}

int main(){

  int n;

  std::cout << "Enter the size of array: ";
  std::cin >> n;

  int arr[n];
  
  std::cout << "Enter array elements: ";
  for(int i = 0; i < n; i++){
    std::cin >> arr[i];
  }

  int max = Max(arr, n);
  int min = Min(arr, n);

  std::cout << "\nMax: " << max << "\n";
  std::cout << "Min: " << min << "\n";
  
  return 0;

}