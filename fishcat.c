int maxfood(int a[], int len){
	int currentnum=0;
	int maxnum=0
	for(int i=0;i<len;i++){
		currentnum+=a[i];
		if(currentnum<0){
			currentnum = 0;
		}
		if(currentnum>maxnum){
			maxnum=currentnum;
		}
	}
	return maxnum;
}
