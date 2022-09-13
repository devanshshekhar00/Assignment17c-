
#include <stdio.h>

int main()
{

    char k[20] = {};char c;
    fgets(k,20,stdin);
  
    
    for(int i = 0;k[i];i++)k[i] = toupper(k[i]);
    printf("%s",k);
   

    return 0;
}
