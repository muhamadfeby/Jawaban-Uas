 #include <stdio.h>
 #include <conio.h>
 int main ()
        {
            int l;
            printf("Masukkan Batas angka = ");
            scanf("%i",&l);
            printf(" ,,, \n");
            printf("\n");
			for (int i = 1; i <= l; i++)
            {  
                for (int j = 1; j <= i; j++)
                {
                    if (i + j <= (l + 1))
                    {
                        printf("*");
                    }
                    else
                    {
                        printf(" ");
                    }
                }
                printf("\n");
            }
            printf(" ,,,");
            getch();
        }

