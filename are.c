#include<stdio.h>
void printArray(int arr[], int count){
	for(int i=0;i<count;i++){
		printf("[%p]",arr[i]);
	}
}
int main(){
	int arr[10];
	for(int i=0;i<10;i++){
		arr[i]=i;
	}
	printArray(arr,10);
	return 0;
}