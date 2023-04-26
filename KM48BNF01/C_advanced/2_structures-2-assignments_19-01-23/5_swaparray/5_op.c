
{
	int i;
	for(i=0;i<4;i++)
	{
		printf("enter a structure. ID,NAME,GENDER,DOB\n");
		scanf("%d%s %c%d%d%d",&strt[i].ID,strt[i].name,&strt[i].gender,&strt[i].d,&strt[i].m,&strt[i].y);
	}
}

void print(struct student strt[])
{
	struct student temp;
	int i,j;
	for(j=3,i=0;i<j;i++,j--)
	{
	temp=strt[i];
	strt[i]=strt[j];
	strt[j]=temp;
	}
	for(j=0;j<4;j++)
	{
	printf("\nID:%d\nname : %s\ngender: %c\ndate of birth : %d-%d-%d\n",strt[j].ID,strt[j].name,strt[j].gender,strt[j].d,strt[j].m,strt[j].y);
	}
}

