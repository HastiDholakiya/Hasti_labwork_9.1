#include <stdio.h>
 
int main()
{
    int n;  
    int i;
    
    printf("Enter string in len: ");
    scanf("%d",&n);
    
    char s[n];
 
    printf("Enter  the string in uppercase case: ");
    scanf("%s",&s);
    
    printf("string in uppercase ='%s'\n",s);

     
    for(i=0;i<n;i++)  
    {
        if(s[i]<=97 && s[i]>=122)
         s[i]+=32;
 	}
 	
     
    printf("string in lowercase ='%s'\n",s);
}
