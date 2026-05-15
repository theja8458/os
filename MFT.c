#include <stdio.h>
int main(){
	int partitions[10],processes[10];
	int m,n,i,j;
	int allocated[10] = {0};
	int internal_frag = 0;
	
	printf("Enter number of partitions: ");
	scanf("%d",&m);
	
	printf("Enter sizes of partitions:\n");
	scanf("%d", &n);
	printf("Enter sizes of processes:\n");
	for(i=0 ; i<n ; i++){
		scanf("%d", &processes[i]);
	}
}
