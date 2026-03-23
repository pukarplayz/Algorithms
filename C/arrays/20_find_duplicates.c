#include <stdio.h>
#include <conio.h>

int main(void){
    int n,i,j,found;

    printf("Enter number of elements: ");
    scanf("%d",&n);

    int arr[n];

    printf("Enter %d elemnets:\n ",n);
    for(i=0; i<n;i++){
        scanf("%d",&n);
    }

    printf("Duplicate Elements are: \n");
    for(i=0; i<n;i++){
        found = 0;

        for(j=0;j<i;j++){
            if(arr[i] == arr[j]){
                found = 1;
                break;
            }
        }
        if (found) continue;
    
        for(j=i+1;j<n;j++){
            if (arr[i] == arr[j])
            {
              printf("%d", arr[i]);
              break;
            }
            
        }
    }

    return 0;
    
}