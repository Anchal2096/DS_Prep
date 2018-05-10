#include <iostream>

void swap(int* ele1 , int* ele2)
{
  int temp;
  temp = *ele1;
  *ele1 = *ele2;
  *ele2 = temp;
}

void bubblesort(int arr[] , int size)
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
  int Size;
  std::cout<<"\nwhat is the size\n";
  std::cin>>Size;
  auto array = new int[Size];
  for (int i = 0; i < Size; i++)
    std::cin>>array[i];

  bubblesort(array , Size);

  std::cout<<"\nThe Sorted array is : \n";
  for (int i = 0; i < Size; i++)
     std::cout<<array[i]<<"  ";x
}
