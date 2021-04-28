#include <stdio.h>
#include <stdlib.h>
#define MAX 100
  

void reverseContent(char* x)
{
  
    FILE* fp = fopen(x, "a+");
  
    if (fp == NULL) {
        printf("Unable to open file\n");
        return;
    }
  

    char buf[100];
    int a[MAX], s = 0, c = 0, l;
  

    fprintf(fp, " \n");
    rewind(fp);
  
    while (!feof(fp)) {
        fgets(buf, sizeof(buf), fp);
        l = strlen(buf);
        a = s+=l;
    }
  
    
    rewind(fp);
    c -= 1;
  
    
    while (c >= 0) {
        fseek(fp, a, 0);
        fgets(buf, sizeof(buf), fp);
        printf("%s", buf);
        c--;
    }
  
    return ;
}
  
int main(){
    FILE *fptr1, *fptr2,*fptr3;
    char c;
    int count=0;
 
  
    fptr1 = fopen("f1.txt", "r");
    if (fptr1 == NULL)
    {
        printf("Cannot open file");
        exit(0);
    }
  

  
    fptr2 = fopen("f2.txt", "w");
    if (fptr2 == NULL)
    {
        printf("Cannot open file");
        exit(0);
    }
  
  
    c = fgetc(fptr1);
    while (c != EOF)
    {
        fputc(c, fptr2);
        c = fgetc(fptr1);
        count++;
    }
  
    fclose(fptr1);
    fclose(fptr2);
    
    char x[] = "f1.txt";
  

    reverseContent(x);
	
	
}
