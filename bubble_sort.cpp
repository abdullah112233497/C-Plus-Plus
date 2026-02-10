// #include <iostream>
// using namespace std;
// int main(){
// 	int temp;
// 	int arr[5]={21,43,53,-1,2};

// 	for (int i=0;i<5;i++){
// 		for(int j=i+1;j<5;j++){
// 			if (arr[i]>arr[j]){
// 			temp=arr[i];
// 			arr[i]=arr[j];
// 			arr[j]=temp;
// 			}
// 		}
// 	}
// 	for(int k=0;k<5;k++){
// 	cout<<	arr[k]<<" " ;
// 	}

// 	return 0;
// }

#include <iostream>
using namespace std;
int main()
{
	int arr[] = {12, 23, 4532, 2, 3, -1};
	int o;
	for (int i = 0; i < 6; i++)
	{
		for (int j = i + 1; j < 6; j++)
		{
			if (arr[i] > arr[j])
			{
				o = arr[i];
				arr[i] = arr[j];
				arr[j] = o;
			}
		}
	}
	for (int k = 0; k < 6; k++)
	{

		cout << arr[k] << endl;
	}

	return 0;
}