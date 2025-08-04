#include <stdio.h>
int main(){
    int n;
    
    scanf("%d",&n);
    int arr[n];
    float poscount=0,negcount=0,zerocount=0;
    float total_count;

    
    for (int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for (int i=0; i<n; i++){
        if(arr[i]>0){
            poscount+=1;
        }
        else if (arr[i]<0){
            negcount+=1;
        }
        else{
            zerocount+=1;
        }
    }

    total_count = poscount + negcount + zerocount;
    printf("%f\n", poscount / total_count);
    printf("%f\n", negcount / total_count);
    printf("%f\n", zerocount / total_count);

    return 0;
}
