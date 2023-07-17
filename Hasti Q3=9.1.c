#include <stdio.h>
 
int main()
{
    int n;  
    int i;
    
    printf("Enter string in len: ");
    scanf("%d",&n);
    
    char s[1000];
 
    printf("Enter  the string: ");
    scanf("%s",&s);
     
    for(i=0;i<n;i++)  
    {
    	if(s[i]>=65 && s[i]<=90)
		
         printf("%c",s[i]+32);
       
		else if(s[i]>=97 && s[i]<=122)
    
        printf("%c",s[i]-32);
		
        
 	}
 	
     
}
