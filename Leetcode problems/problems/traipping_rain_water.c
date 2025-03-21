#include<stdio.h>
#include<stdlib.h>

int trap(int* hight, int hightSize){
    int left_max[hightSize];
    int right_max[hightSize];
    int i,result=0;
    int min;
    left_max[0]=hight[0];
    for(i=1;i<hightSize;i++){
        if(hight[i]>left_max[i-1])
        {
            left_max[i]=hight[i];
        }
        else
        {
            left_max[i]=left_max[i-1];
        }
    }
    for(i=0;i<hightSize;i++)
    {
        printf("%d",left_max[i]);
    }
    printf("\n");
    right_max[hightSize-1]=hight[hightSize-1];
    for(i=hightSize-2;i>=0;i--){
        if(hight[i]>right_max[i+1]){
            right_max[i]=hight[i];
        }
        else{
            right_max[i]=right_max[i+1];
        }
    }
    for(i=0;i<hightSize;i++)
    {
        printf("%d",right_max[i]);
    }
    for(i=0;i<hightSize;i++){
        if(left_max[i]<=right_max[i]){
            min=left_max[i];
        }
        else{
            min=right_max[i];
        }
        result=result+min-hight[i];
    }
    printf("\n");
    return result;
}

int main(){
    int hight[]={4,2,0,3,2,5};
    int hightSize=sizeof(hight)/sizeof(int);
    int result=trap(hight,hightSize);
    printf("result=%d\n",result);
}
