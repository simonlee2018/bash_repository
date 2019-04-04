#include <stdio.h>
void main(){
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    int *p,i;
    printf("\n下标法：\n");
    for(i=0;i<10;i++){
        printf("%d ",a[i]);
    }
    printf("\n指针法（数组名）:\n");
    for(i=0;i<10;i++){
        printf("%d ",*(a+i));
    }
    printf("\n指针法（指针变量）：\n");
    for(p=a;p<a+10;p++){
        printf("%d ",*p);
    }
}