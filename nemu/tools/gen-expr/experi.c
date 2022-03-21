#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>

char buf[65546];

void main()
{
    FILE *fp = fopen("input", "r");
    assert(fp != NULL);
    while(fgets(buf , 65546, fp))
	{
	    printf("%s \n",buf);
	    char *p;
	    p = strchr(buf, ' ');
	    char *num = malloc(20);
	    int i;
	    for( i;(i+buf)<p;i++)
	        {
			*(num+i) = buf[i];
		}
	    *(num+i+1) = '\0';
	    printf("num %s\n",num);
	    printf("expression %s\n", p);
	}
    fclose(fp);
}
