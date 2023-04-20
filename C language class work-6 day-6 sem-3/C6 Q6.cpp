#include<stdio.h>  
#include<string.h>    
void generatePermutation(char * , int , int );    
int main()  
{  
  char str[] = "ABC";  
  int n =strlen(str);  
  printf("All the permutations of the string are: \n");  
  generatePermutation(str,0,n);  
}    
void generatePermutation(char *str,const int start, int end)  
{  
  char temp;  
  int i,j;  
  for(i = start; i < end-1; ++i){  
  for(j = i+1; j < end; ++j)  
  {   
    temp = str[i];  
  str[i] = str[j];  
    str[j] = temp;    
  generatePermutation(str , i+1 ,end);    
    temp = str[i];  
    str[i] = str[j];  
    str[j] = temp;  
  }  
  }   
  printf("%s\n",str);  
}
