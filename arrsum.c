void merge(int A[],int m,int B[],int n){
	for(int i=0;i<n;i++){
		A[m+i]=B[i];
	}
	for(int i=0;i<m+n-1;i++){
		for(int j=0;j<m+n-j-1;j++){
			int temp =0;
			if(A[j]>A[j+1]){
				
				temp=A[j];
				A[j]=A[j+1];
				A[j+1]=temp;
			}
		}
	}
}
