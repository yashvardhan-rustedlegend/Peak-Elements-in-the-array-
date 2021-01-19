#include<iostream>
using namespace std;
int main()
{
	//int arr[7] = {10, 20, 15, 2, 23, 90, 67};
	int arr[] = { 1, 3, 20, 4, 1, 0 };
	int n = sizeof(arr) / sizeof(arr[0]);
	for(int i=0;i<n;i++)
	{
		if(i<n-1)
		{
			for(int j=i+1;j<7;j++)
			{
				if(i>0)
				{
						int m=i-1;
						if(arr[i]>arr[j] && arr[i]>arr[m])
						{
							cout<<"Peak element is="<<arr[i]<<endl;
						}
						break;
				}
				else
				{
					if(arr[i]>arr[i-1])
					{
						cout<<"peak element is="<<arr[i];
					}
				}
			}
		}
		else
		{
			if(arr[i]>arr[i-1])
			{
				cout<<"Peak element is="<<arr[i];
			}
		}
	}
	return 0;
}
