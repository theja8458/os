#include<stdio.h>

int main() {
    int fragment[20], b[20], p[20], i, j, nb, np, temp, lowest = 10000;
    static int barray[20], parray[20];
    
    printf("Enter the number of blocks: ");
    scanf("%d", &nb);
    printf("Enter the number of processes: ");
    scanf("%d", &np);
    
    printf("Enter the size of the blocks:\n");
    for(i = 1; i <= nb; i++) {
        printf("Block %d: ", i);
        scanf("%d", &b[i]);
    }
    
    printf("Enter the size of the processes:\n");
    for(i = 1; i <= np; i++) {
        printf("Process %d: ", i);
        scanf("%d", &p[i]);
    }
    
    for(i = 1; i <= np; i++) {
        lowest = 10000;
        for(j = 1; j <= nb; j++) {
            if(barray[j] != 1) {
                temp = b[j] - p[i];
                if(temp >= 0) {
                    if(temp < lowest) {
                        parray[i] = j;
                        lowest = temp;
                    }
                }
            }
        }
        fragment[i] = lowest;
        barray[parray[i]] = 1;
    }
    
    printf("\nProcess No\tProcess Size\tBlock No\tBlock Size\tFragment\n");
    for(i = 1; i <= np && parray[i] != 0; i++) {
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\n", i, p[i], parray[i], b[parray[i]], fragment[i]);
    }
    return 0;
}
