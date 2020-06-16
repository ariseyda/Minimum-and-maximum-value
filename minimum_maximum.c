#include<stdio.h>

// A computer program receives five integers as input, finds the minimum and displays its value. 

int main(){
	
	int array[5];
	int min,max,i,k;
	
	for(i=0;i<5;i++){
		printf("Enter the %dst number:",i+1);
		scanf("%d",&array[i]);
	}
	
    min=max=array[0];
    
    for(k=0;k<5;k++){
    	if(array[k]<min)
    	   min=array[k];
        else if(array[k]>max)
           max=array[k];
	}
	
	printf("Minimum value:%d\n",min);
	printf("Maximum value:%d",max);
	
	return 0;
}
