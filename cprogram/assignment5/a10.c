int main()
 {
    int n,i,j;

    for (i=0;i<4;i++)
	 {
        for (j=0;j<4;j++)
		 {
            if (i==0||i==4-1||j==0||j==4-1||i==j)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }

}