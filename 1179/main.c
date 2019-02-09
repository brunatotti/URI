#include<stdio.h>

int main() {
    int i, a=0, b=0, c, d, n ,par[5],impar[5];
    for(i=1; i<=15; i++){
        scanf("%d",&n);
        if(n%2==0){
            par[a]=n;
            a++;
            if(a==5){
                for(c=0; c<5; c++){
                    printf("par[%d] = %d\n", c, par[c]);
                    par[c]=0;
                    a=0;
                }
            }
        }
        else {
            impar[b]=n;
            b++;
            if(b==5){
                for(c=0; c<5; c++){
                    printf("impar[%d] = %d\n", c, impar[c]);
                    impar[c]=0;
                    b=0;
                }
            }
        }
    }
    for(i=0; i<5; i++){
        if(impar[i]==0)break;
        printf("impar[%d] = %d\n",i,impar[i]);
    }
     for(i=0; i<5; i++){
        if(par[i]==0)break;
        printf("par[%d] = %d\n",i,par[i]);
    }
    return 0;
}
