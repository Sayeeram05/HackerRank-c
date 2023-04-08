#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int n;
    scanf("%d", &n);
    int x = n*2 - 1;
    int arr[n],index=n-1;
    
    for(int v = 0 ; v<n ; v++)
    {arr[v]=v+1;}
    
    int p,start=0,end = x-1;
    int ans[x][x];
    for(int k = 0 ; k<x ; k++)
    {
        for(int i = start ; i<=end ; i++)
        {
            for(int j = start ; j<=end ; j++)
            {
                if((j==start || j==end)||(i==start || i==end)){ans[i][j]=arr[index];}
                else{p=0;}
                //printf("%d",p);
                //printf("%d-%d ",i,j);
            }
            //printf("\n");
            //printf("%d %d %d\n",start,end,index);
        }
        start+=1;end-=1;index--;
        //printf("\n");
        if(index<0){break;}
    }
    for(int i = 0 ; i<x ; i++)
    {
        for(int j = 0 ; j<x ; j++)
        {
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
    return 0;
}
