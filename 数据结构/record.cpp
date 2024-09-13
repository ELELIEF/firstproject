#include<stdio.h>
int main()
{
	int n=10;
	int nums[10];
	char afnums[10];
	int Ga(int n,int nums[]);
	for(int i=0;i<10;i++)
	scanf("%d",nums);
	afnums=Ga(n,nums);
	for(int i=0;i<10;i++)
	printf("%c",afnums[i])
	return 0;
}
float Ga(int n,int nums[])
{
	float ave,sum;
	int c;
    for(int i=0;i<n;i++)
    {
    	sum+=nums[i];
    	switch(nums[i]/10)
    	case 10:nums[i]=0;
    	nums[i]+='S';
    	break;
    	case 9:nums[i]=0;
    	nums[i]+='A';
    	break;
        case 8:nums[i]=0;
    	nums[i]+='B';
    	break;
    		case 7:nums[i]=0;
    	nums[i]+='C';
    	break;
    		case 6:nums[i]=0;
    	nums[i]+='D';
    	break;
       default:
           nums[i]=0;
           nums[i]+='²»¼°¸ñ';
           break;
    }
    ave=sum/n;
	return ave;
}