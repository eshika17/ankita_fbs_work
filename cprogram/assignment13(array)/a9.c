#include <stdio.h>
struct complex {
	int real;
    int imaginary;
	
};
	int main()
	 {
	struct complex carr[5];
	int i;
	for(int i=0; i<5; i++)
	 {
			printf("enter detail for complex %d\n",i+1);
			scanf("%d%d",&carr[i].real,&carr[i].imaginary);
		    

		}
	
		printf("details of complex%d\n",i+1);
		for(int i=0; i<5; i++) {
		printf("real=%d imaginary=%d\n",carr[i].real,carr[i].imaginary);
}
}