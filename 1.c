/***************************************************
> Copyright (C) 2018 ==WANGYONGKUN== All rights reserved.
> File Name: 1.c
> Author: WANGYONGKUN
> Mail:932911564@QQ.COM 
> Created Time: Sat 01 Dec 2018 08:46:45 PM PST
***************************************************/

#include <stdio.h>

int *twoSum(int *nums,int numsSize,int target)
{
	int *temp = nums;
	int res[2] = {0,0};
	int i = 0, j = 0;
	for(i = 0;i < numsSize - 1;i++) {
		for(j = i+1;j < numsSize;j++) {
			if(temp[i] + temp[j] == target) {
				res[0] = temp[i];
				res[1] = temp[j];
				printf(" %d %d \n",res[0],res[1]);
				return res;
			}
		}	
	}
}

int main(int argc,const char* argv[])
{
	int nums[5] = {2,6,3,5,18};
	
	twoSum(nums,5,5);

    return 0;
}
