#include<stdio.h>
int main()
{
    int arr[]={10,7,2,8,3};
    int i,j,res,flag;
    for(i = 0; i < 5; i++)
    {
        for(j = i+1; j < 5; j++ )
        {
            res = arr[i] & arr[j];
            //printf("   %d   ",res);
            flag = 0;
            while(res > 2)
            {
                if(res % 2 != 0)
                {
                    flag = 1;
                    break;
                }
                res = res / 2;
            }
            if(res == 2 && flag == 0)
            {
                printf("%d %d\n",arr[i],arr[j]);
            
            }
        }
    }
}