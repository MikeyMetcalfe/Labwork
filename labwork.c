
#include <stdio.h>

int main()
{
    FILE  *fileinput;
    int  Arr[50];
    int i;
    int count = 0;
    
    fileinput = fopen("array.txt", "r");
    
    if(fileinput == NULL) {
        printf("Unalbe to open file\n");
        exit(-1);
    
    }
    while ((!feof(fileinput)) && (count < 50)) {
        fscanf(fileinput, "%d", &Arr[count++]);
    }
    
    for(i=0; i < (count-1); i++) {
        printf("%d==>", Arr[i]);
    }
    printf("%d\n", Arr[i]);
    
    fclose(fileinput);
    
    return 0;
}

