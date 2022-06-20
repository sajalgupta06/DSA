#include <bits/stdc++.h>
using namespace std;



// Insertion Sort
void insertionSort(int arr[], int n)
{
        int key , j;
     for(int i = 1;i<n;i++)
    {
         key = arr[i];
         j = i-1;
        
        while(j>=0)
        {
            
            if(arr[j]>key){
                arr[j+1] = arr[j];
            }
            else break;
            
            j--;
        }
        
        arr[j+1] = key;
        
    }
    };
  
  
// Selection Sort 
void  selectionSort(int arr[] , int n )
{
    for(int i = 0;i<n;i++)
    {
        int minIndex = i;
        
        for(int j =i;j<n;j++)
        {
            if(arr[j]<arr[minIndex])minIndex = j;
        }
        swap(arr[minIndex],arr[i]);
    }
    return ;
    
}
    

// Bubble sort
void bubbleSort(int arr[] , int n)
{
    for(int i  = 1;i<n;i++)
    
    {   int swapped = false;
        for(int j = 0;j<=n-i;j++)
        {   swapped = true;
            if(arr[j]>arr[j+1])swap(arr[j],arr[j+1]);
        }
        
        if(swapped==false)break;
    }
}


// MergeSort
void merge(int arr[],int l , int h)
{
    int mid = (l+h)/2;
    int len1 = mid-l +1;
    int len2 = h-mid;
    
    int arr1[len1];
    int arr2[len2];
    
    int k =l;
    for(int i = 0;i<len1;i++)
    {
        arr1[i] =arr[k++];
    }
    
        
    k = mid+1;
    for(int i = 0;i<len2;i++)
    {
        arr2[i] =arr[k++];
    }
   
    
    int i = 0 , j=0 , z=l;
    
    
    while(i<len1 && j<len2)
    {
        if(arr1[i]<arr2[j])
        {
            arr[z++] = arr1[i++];
            
        }
         else
        {
            arr[z++] = arr2[j++];
            
        }
    
    }
    
    while(i<len1)
    {
        arr[z++] = arr1[i++]; 
    }
       while(j<len2)
    {
            arr[z++] = arr2[j++];
    }
    return ;
    
}

void mergeSort(int arr[], int l , int h)
{
    if(l>=h)return;
    
    int mid = (l+h)/2;
    
    mergeSort(arr,l ,mid);
    mergeSort(arr,mid+1 , h);
     merge(arr, l , h);
    return ;
    
}


// HeapSort
void heapify (int arr[] , int n , int  i )
{
    int left = 2*i+1;
    int right = 2*i+2;
    int largest = i;
    
    if(left<n && arr[left]>arr[largest])
    {
        largest = left;
    }
    
        
     if (right<n && arr[right]>arr[largest])
    {
        largest = right;
    }
    
    if(largest!=i){
        swap(arr[i], arr[largest]);
        heapify(arr , n, largest);
    }
    
    
}

void heapSort(int arr[], int n)
{
    
       for(int i = n/2-1; i>=0;i--)
    {
        heapify(arr,n,i);
    }
    
    
    while(n>0){
        
    swap(arr[0] , arr[n-1]);
    n--;
  
    heapify(arr,n,0);
    
    }
}


// QuickSort
int partition(int arr[], int l, int h)
{
    int pivot = arr[l];
    
    int count = 0;
    
    for(int i = l+1;i<=h;i++)
    {
        if(arr[i]<=pivot)count++;
    }
    
    int pivotIndex =  l + count;
    
    swap(arr[l],arr[pivotIndex]);
    
    int i = l;int j = h;
    
    while(i<pivotIndex && j>pivotIndex)
    {
        while(arr[i]<arr[pivotIndex])
        {
            i++;
        }
        
         while(arr[j]>arr[pivotIndex])
        {
            j--;
        }
        
        if(i<pivotIndex && j>pivotIndex)
        {
            swap(arr[i],arr[j]);
        }
    }
    
    return pivotIndex;
    
    
}

void quickSort(int arr[], int l,int h)
{
     if(l>=h)return;
     
     int p = partition(arr , l, h);
     
     quickSort(arr,l,p-1);
     quickSort(arr,p+1,h);
     return;
 }



void printArray(int arr[] , int n)
{
        for(int i  = 0 ;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    };
    
int main() {

   
    
    
    int arr[7] = {45,12,36,4,17,3,9};
    
        // Insertion sort 
        // insertionSort(arr,7);
        
        // Selection sort
        // selectionSort(arr,7);
        
        // Bubble sort
        //   bubbleSort(arr,7);
        
        // Merge sort
        // mergeSort(arr,0 ,6);
        
        // Heap sort
        // heapSort(arr , 7);
        
        // Quick Sort
        // quickSort(arr,0,6);

        printArray(arr,7);
        


	return 0;
}
