#include <stdio.h>
int func(int);

int main (){
    int n,m1,m2,x,y,z;
    scanf("%d", &n);

    x = 2;m1 = 0; m2 = 0;
    while((m1 != 1 || m2 != 1) && x < 32760){
        m1 = func(x);
        if(m1 == 1){
            y = n / x;
            z = n % x;
            if (z == 0){
                m2 = func(y);
            }
                       
        }
        x++;
    }
    if((m1 == 1) && (m2 ==1)) {
        x--;
        printf("%d %d\n",x,y);
    }
    if(x >= 32760) printf("NO\n");
}
    
int func(int n){
    int k = 1, j = 2;


    while(k != 0){

        if(n == 1){
            k = 0;
            break;
        }

        if(n == 2){
            k = 1;
            break;
        }

        k = n % j;
        j++;

       if(j >= n)
        break;
    }

    if(k == 0)
        return 0;
    else
        return 1;
}