#include<stdio.h>
int main(){

    int a,b,c,i,j;

    while(scanf("%d%d",&a,&b) !=EOF){

    if(a>b){
            c=a;
            a=b;
            b=c;
        }
        j=0;

    for(i=a;i<=b;i++){

        printf("%d ",i);

        j=j+i;
    }
        printf("Sum=%d\n",j);

}

    return 0;
}
