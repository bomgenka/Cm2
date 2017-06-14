#include <stdio.h>
#include <stdlib.h>



int main()
{
	FILE *fi,*fi2;
	int len=0, i=0, p;
	char n;
	fi = fopen("C:\\Общая папка\\f.txt", "r");
	while(!feof(fi))
    {
		fscanf(fi, "%c", &n);
		len++;
	}
	len--;
	rewind(fi);
	char *mas=(char*)malloc(len*sizeof(char));
	while(!feof(fi))
    {
		fscanf(fi, "%c", &n);
			mas[i]=n;
			i++;
	}
	fclose(fi);
	fi2 = fopen("C:\\Общая папка\\g.txt", "w");
    for (i=0; i<len; i++)
    {
        p = (int)mas[i];
        if (65<=p && p<=90)
        {
        p=p+32;
        mas[i]=(char)p;
        }

    fprintf(fi2, "%c ", mas[i]);
    }

fclose(fi2);

	for (i=0; i<len; i++) {
		printf("%c ", mas[i]);
	}
	return 0;
}















