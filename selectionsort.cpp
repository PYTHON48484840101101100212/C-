#include <stdio.h>

#define MAX 50
	
	void selectionsort(int arr[],int size) {
		
		int i,j;
		
		int minimumindex;
		
		for(i = 0; i < size; i++) {
			
			minimumindex = i;
			
			for(j = i; j < size; j++) {   /* j = i+1 de yazabilir mi�iz?*/
			
			if (arr[j] < arr[minimumindex]) {
				
				minimumindex = j;
				
		     	}
			
			}
				
			int temp = arr[i];
			
			arr[i] = arr[minimumindex];
			
			arr[minimumindex] = temp;
						
		}
		
	}
	
int main() {
	
	int array[MAX],size;
	
	int i;
	
	printf("Kac elemanli");
	
	scanf("%d",&size);
	
	for(i = 0; i < size; i++) {
		
		scanf("%d",&array[i]);
	
	}
	selectionsort(array,size);
	
	for(i = 0; i < size; i++) {
		
		printf("%d",array[i]);
		
	}

	return 0;
}
