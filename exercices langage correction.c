#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[100],i,n,s,p,max,min,k,m,t,l,count,h;
    printf("entrer le nombre\n");
    scanf("%i",&n);
    for(i=0;i<n;i++)
    {
        printf("a[%i]=",i);
        scanf("%i",&a[i]);
    }
      for(i=0;i<n;i++)
     {
         printf("%3i",a[i]);
     }
     printf("\n");
     s=0;
       for(i=0;i<n;i++)
       {
           s=s+a[i];
       }
       printf("somme est %i",s);
       printf("\n");
       p=1;
        for(i=0;i<n;i++)
        {
            p=p*a[i];
        }
        printf("produit est %i",p);
        printf("\n");
        max=a[0];
        for(i=0;i<n;i++)
        {
            if(max<a[i])
            {
                max=a[i];
            }
        }
        printf("maxim est %i",max);
        printf("\n");
        min=a[0];
         for(i=0;i<n;i++)
         {
             if(min>a[i])
             {
                 min=a[i];
             }
         }
         printf("minim est %i",min);
         printf("\n");
          for(i=0;i<n;i++)
          {
              if(a[i]<0)
              {
                  k=a[i];
                  t=i;
                  break;
              }
          }
          printf("1ere elt negatif est %i",k);
          printf("\n");
          printf("son indice est %i",t);
          printf("\n");
          for(i=n-1;i>0;i--)
          {
              if(a[i]<0)
              {
                  m=a[i];
                  l=i;
                  break;
              }
          }
          printf("dernier elt negatif est %i",m);
          printf("\n");
          printf("son indiice est %i",l);
          printf("\n");
          count=0;
          for(i=t+1;i<l;i++)
          {
              if(a[i]%2==0)
              {
                  count=count+1;
              }
          }
        printf("le nombre d'elt situe enter 1 et dern est %i",count);
        printf("\n");
        h=0;
         for(i=t+1;i<l;i++)
          {
              if(a[i]%2==1)
              {
                  h=h+1;
              }
          }
           printf("le nombre d'elt situe enter 1 et dern est %i",h);
    return 0;
}
