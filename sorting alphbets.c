#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	char a[50];
	printf("Enter the string : ");
	scanf("%s",&a);
	int n = strlen(a),i,j;
	int temp;

	for( i=0 ;i<n; i++){
	
	for( j=i+1; j<n; j++){
		if(a[i]>a[j]){
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
	}
	printf(" sorting m...  %s\n",a);
		return 0;
}
