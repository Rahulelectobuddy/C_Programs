#include <stdio.h>
#include <string.h>
char a[1000];

void print_ss(int i,int flag)
{
    if(flag == 0)
        a[i] = 'T';
    if(flag == 1)
        a[i] = 'H';
    //printf("%d",i);
    if(i==0)
    {    
        printf("%s \n",a);
        return ;
    }
    else
    {
        i--;
        print_ss(i,0);
        print_ss(i,1);
    }
    return ;
}


int main(void) {
	int i;
	scanf("%d",&i);
	i--;
	print_ss(i,0);
	print_ss(i,1);
	
	return 0;
}