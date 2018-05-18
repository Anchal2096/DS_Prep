#include <iostream>

//function to swap values
void swap(int* ele1 , int* ele2)
{
  int temp;
  temp = *ele1;
  *ele1 = *ele2;
  *ele2 = temp;
}

//bubbleSort function
void bubbleSort(int arr[] , int size)
{
  int pass = 0;
  while(pass < size)
  {
    for(int i = 0; i < size-1; i++)
      if (arr[i] > arr[i+1])
        swap(&arr[i] , &arr[i+1]);
    pass++;
  }
}


int main()
{
  int Size;                             //for storing size of an array
  std::cout<<"\nwhat is the size\n";
  std::cin>>Size;

  //Memory allocation of the array
  auto array = new int[Size];

  //Storing elements of the array
  for (int i = 0; i < Size; i++)
    std::cin>>array[i];

  bubbleSort(array , Size);             //function call for sorting

  //displaying the array
  std::cout<<"\nThe Sorted array is : \n";
  for (int i = 0; i < Size; i++)
     std::cout<<array[i]<<"  ";
}
