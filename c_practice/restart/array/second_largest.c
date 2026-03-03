#include<stdio.h>

int main(){
        int a[10];
        int n,i,largest,second;
        printf("Enter size of an array:");
        scanf("%d",&n);

        printf("Enter %d of elements of array:",n);
        for(i=0;i<n;i++){
                scanf("%d",&a[i]);
        }

        if(a[0]>a[1]){
                largest=a[0];
                second=a[1];
        }
        else if(a[0]<a[1]){
                largest=a[1];
                second=a[0];
        }
        else {
                largest=a[0];
                second=-1;
        }

        for(i=0;i<n;i++){
                if(a[i]>largest){
                        second=largest;
                        largest=a[i];
                }
                else if(a[i]<largest && (second==-1||a[i]>second)){
                        second=a[i];
                }
        }
        if(second==-1){
                printf("No second largest element\n");
        }
        else{
                printf("Largest element in array is %d\n",largest);
                printf("Second largest element in array is :%d\n",second);
        }

        return 0;
}
