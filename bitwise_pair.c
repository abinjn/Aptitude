#include<stdio.h>
int main()
{
    int arr[]={10,7,2,8,3};
    int i,j,res;
    for(i = 0; i < 5; i++)
    {
        for(j = i+1; j < 5; j++ )
        {
            res = arr[i] & arr[j];
            if(res % 2 ==  0)
            {
                printf("%d %d\n",arr[i],arr[j]);
                fdf
            }
        }
    }
}