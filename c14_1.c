#include<stdio.h>
#include<math.h>
int parent(int i)
{
  return (i-1)/2;
}
int left(int i)
{
  return 2*i+1;
}
int right(int i)
{
  return 2*i+2;
}
void maxheapify(int arr[], int n, int i)
{
  int l, r,largest,temp;
  l = left(i);
  r = right(i);
  if(l<n && arr[l] > arr[i])
    largest = l;
  else
    largest = i;
  if(r<n && arr[r] > arr[largest])
    largest = r;
  if(largest != i)
  {
    temp = arr[i];
    arr[i] = arr[largest];
    arr[largest] = temp;
    maxheapify(arr,n,largest);
  }
}

int main()
{
  int arr[20];
  int i=0,n=10;

  for(i=0;i<n;i++)
    arr[i]=10*(i+1);

  printf("\n\tArray before max heap \n\n");
  for(i=0;i<n;i++)
    printf("%d ",arr[i]);

  for(i=(n-1)/2;i>=0;i--)
    maxheapify(arr,n,i);

  printf("\n\n\tArray after Maxheap \n\n");

  for(i=0;i<n;i++)
    printf("%d ",arr[i]);
printf("\n");
}