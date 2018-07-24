#include <stdio.h>
#include <string.h>
char a[100]="ASDFGH";
char b[100];
int flag=0;
int i=0;

void print_s(int k)
{
    int j;
    if(i<=k)
    {
        //printf("%s \n",b);
        if(!strcmp(a,b))
            flag=1;
        return;
    }
    for(j = 1; j<=26;j++)
    {   
        b[k]=j+64;
        print_s(k+1);
        if(flag==1)
            break;
        
    }
    return ;
}

int main(void) {
	i++;
    if(flag)
    {
        printf("found");
        return 0;    
    }
    if(i==100)
    {
        printf("NOT found");
        return 0;
    }
    print_s(0);
    main();
	return 0;
}