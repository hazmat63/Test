#include<stdio.h>
#include<ctype.h>                                     
#include<stdlib.h>
#include<string.h>

#define FILE 500
int main()
{
   FILE *fptr;
   char path[250], words[FILE][50], word[50];
   int i,len,index, isunique, count[FILE];
   printf("Enter source file path: ");
   scanf("%s", path);
   fptr = fopen(path, "r");
   if (fptr == NULL)
   {
   printf("\nUnable to open file.\n");
   exit(EXIT_FAILURE);
   }
   for(i-0;i<FILE;i++)
   count[i]=0;
   index=0;
   {
   	while(fscanf(fptr,"%s", word)!=EOF)
   	{
   		strlwr(word);
   		len=strlen(word);
   		if(ispunct(word[len-1]))
   		word[len -1]='\0';
   		isunique=1;
   		for(i=0;i<index && isunique; i++)
   		  {
   		  	if(strcmp(words[i],word)==0)
   		  	isunique=0;
		  }
		  if(isunique)
		  {
		  	strcpy(words[index],word)==0;
		  	count[index]++;
		  	index++;
		  }
		  else
		  {
		  	count[i-1];
		  }
	}
	fclose(fptr);
	for(i=0; i<index;i++)
	{
		printf("%-15s : %d\n",words[i],count[i]);
	}
	return 0;
   }
}
