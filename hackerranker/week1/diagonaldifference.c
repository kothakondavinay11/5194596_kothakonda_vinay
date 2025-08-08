#include<stdio.h>
#include<stdlib.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int lefdiagonal=0;
    int rightdiagonal=0;
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if(i==j){
                lefdiagonal+=arr[i][j];
            }
            
        }
    }
    for(int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if(i+j==n-1){
                rightdiagonal+=arr[i][j];
            }
        }
    }
    int diff = abs(lefdiagonal - rightdiagonal);
    printf("%d", diff);
    return 0;
}
