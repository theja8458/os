#include <stdio.h>
int main(){
	int totalMemory, n,i;
	int process[20], allocated[20];
	int usedMemory = 0;
	printf("Enter total memory size (in KB): ");
	scanf("%d", &totalMemory);
	
	printf("Enter number of process: ");
	scanf("%d", &n);
	
	for(i=0 ; i<n ; i++){
		printf("Enter memory required for process P%d (in KB): ",i);
		scanf("%d", &process[i]);
		allocated[i] = 0;
	}
	
	for(i=0 ; i<n ; i++){
		if(usedMemory + process[i] < totalMemory){
			allocated[i] = 1;
			usedMemory += process[i];
		}
	}
	
	
	printf("\nProcess\tMemory Required\tAllocated\n");
	for(i=0 ; i<n ; i++){
		printf("P%d\t%d KB\t\t",i,process[i]);
		if(allocated[i])
		      printf("Yes\n");
		else
		      printf("No\n");
	}
	
	printf("\nTotal Memory: %d KB",totalMemory);
	printf("\nUsed Memory: %d KB" ,usedMemory);
	printf("\nFree Memory: %d KB\n",totalMemory-usedMemory);
	
	return 0;
}
