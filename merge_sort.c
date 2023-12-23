#include <stdio.h>
#include <stdlib.h>

void merge(int *arr, int start, int mid, int end){
	int n1 = mid - start + 1;
    int n2 = end - mid;

    int left[n1], right[n2];
    
    for (int i = 0; i < n1; i++)
        left[i] = arr[start + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];
        
    int i=0,j=0,k=start;
        
    while(i<n1&&j<n2){
    	if(left[i]<right[j]){
    		arr[k++]=left[i++];
		}
		else{
			arr[k++]=right[j++];
		}
	}
	
	while (i<n1){
		arr[k++]=left[i++];
	}
	
	while(j<n2){
		arr[k++]=right[j++];
	}
}

void mergeSort(int *arr, int start, int end){
	if(start<end){
		int mid=(start+end)/2;
		mergeSort(arr,start,mid);
		mergeSort(arr,mid+1,end);
		merge(arr,start,mid,end);
	}
}



int main(){
	// length of array
	int n;
	scanf("%d",&n);

	// initial array
	int *arr=(int *)malloc(sizeof(int)*(n));
	for(int i = 0; i < n; i++)
		scanf("%d", arr+i);

	// sorting
	mergeSort(arr, 0, n-1);
	
	// print array
	for(int i = 0; i < n; i++)
		printf("%d ", *(arr + i));

	free(arr);
	return 0;
}
