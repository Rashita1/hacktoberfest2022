// Statement
Implement quick sort

// Logic
// Basic idea is that suppose an array contains element 'a' then we should be first placing the 
// element at its right place, and all the elements before 'a' should be lesser than it and those
// on right must be greater than it.

// Code
void quickSort(int arr[], int s , int e){
    if(s>=e){
        return;
    }

    int p=partition(arr,s,e);
    quickSort(arr,s,p-1);
    quickSort(arr,p+1,e);
}

int partition(int arr[],int s,int e){
    
    // Putting the element at its right position
    int pivot=arr[s];
    int count=0;
    for(int i=s+1;i<=e;i++){
        if(arr[s]>arr[i]){
            count++;
        }
    }
    int pivotindex=s+count;
    swap(arr[s],arr[pivotindex]);

    // Now placing all elements on right and left halves respectively.
    int i=s,j=e;
    while(i<pivotindex && j>pivotindex){
        while(arr[i]<pivot){
            i++;
        }
        while(arr[j]>pivot){
            j--;
        }
        if(i<pivotindex && j>pivotindex){
            swap(arr[i++],arr[j--]);
        }
    }
    return pivotindex;
}