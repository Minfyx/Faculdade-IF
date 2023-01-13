 //Aumento de Preços
#include <stdlib.h>
#include <stdio.h>

int main (void)
// 
 
{
 	float categoria,preco,aumentop,aumento,aumentor,total;
    char s;
    
    //printf("preco: );
     scanf("%f",&preco);
    //printf("1, 2, 3: );
     scanf("%f",&categoria); 
  	//printf("situacao: ");
     scanf(" %c",&s);

    if (categoria==1)
    {
       if (preco<=25.00)
       { 
	     aumentop = 1.05;
	     aumento = preco * aumentop - preco;
	
		   if ((s=='R')&&(aumento<=0.99))
	         {
	           aumentor = 1.00;
	           total = aumentor + preco;
	         }
	       if ((s=='R')&&(aumento>99.00))
	         {
	           aumentor = 10.00;
	           total = aumentor + preco;
             }
	
	       if ((s=='N')&&(aumento<=0.99))
	         {
	           aumentor = 2.00;
	           total = aumentor + preco;
             }
	       if ((s=='N')&&(aumento>99.00))
	         {
	           aumentor = 20.00;
	           total = aumentor + preco;
             }
               if ((aumento>=0.99)&&(aumento<=99.99))
	             {total = aumentop * preco;
				 printf("%.2f %.2f", aumento, total);}
	             else{ printf("%.2f %.2f", aumentor, total);}
	   }    			      
	   if (preco>25.00)
	   {
	     aumentop = 1.12;
	     aumento = preco * aumentop - preco;
	     
	         if ((s=='R')&&(aumento<=0.99))
	          {
	           aumentor = 1.00;
	           total = aumentor + preco;
	          } 
	       if ((s=='R')&&(aumento>99.00))
	          {
	           aumentor = 10.00;
	           total = aumentor + preco;
              }
	
	       if ((s=='N')&&(aumento<=0.99))
	          { 
	           aumentor = 2.00;
	           total = aumentor + preco;
              }
	       if ((s=='N')&&(aumento>99.00))
	          {
	           aumentor = 20.00;
	           total = aumentor + preco;
              }  
               if ((aumento>=0.99)&&(aumento<=99.99))
	        	{
				 total = aumentop * preco;
				 printf("%.2f %.2f", aumento, total);
				}else{ printf("%.2f %.2f", aumentor, total);}
	   }
	}
 
    if (categoria==2)
    {
        if (preco<=25.00)
	    {
	      aumentop = 1.08;
	      aumento = preco * aumentop - preco;
	      
		   if ((s=='R')&&(aumento<=0.99))
	         {
	           aumentor = 1.00;
	           total = aumentor + preco;
	         }
	       if ((s=='R')&&(aumento>99.00))
	         {
	           aumentor = 10.00;
	           total = aumentor + preco;
             }

	       if ((s=='N')&&(aumento<=0.99))
	         {
	           aumentor = 2.00;
	           total = aumentor + preco;
             }
	       if ((s=='N')&&(aumento>99.00))
	         {
	           aumentor = 20.00;
	           total = aumentor + preco;
             }    
               if ((aumento>=0.99)&&(aumento<=99.99))
	             {total = aumentop * preco;
				 printf("%.2f %.2f", aumento, total);}
	             else{ printf("%.2f %.2f", aumentor, total);}			 
		}
		   
	   if (preco>25.00)
	   {
	     aumentop = 1.15;
	     aumento = preco * aumentop - preco;
	     
	       if ((s=='R')&&(aumento<=0.99))
	         {
	           aumentor = 1.00;
	           total = aumentor + preco;
	         }
	       if ((s=='R')&&(aumento>99.00))
	         {
	           aumentor = 10.00;
	           total = aumentor + preco;
             }
	
	       if ((s=='N')&&(aumento<=0.99))
	         {
	           aumentor = 2.00;
	           total = aumentor + preco;
             }
	       if ((s=='N')&&(aumento>99.00))
	         {
	           aumentor = 20.00;
	           total = aumentor + preco;
             } 
               if ((aumento>=0.99)&&(aumento<=99.99))
	             {total = aumentop * preco;
				 printf("%.2f %.2f", aumento, total);}
	             else{ printf("%.2f %.2f", aumentor, total);}
	   }
   }
    
    if (categoria==3)
    {
        if (preco<=25.00)
	    {	
	     aumentop = 1.1;
	     aumento = preco * aumentop - preco;
		
		   if ((s=='R')&&(aumento<=0.99))
	         {
	           aumentor = 1.00;
	           total = aumentor + preco;
	         }
	       if ((s=='R')&&(aumento>99.00))
	         {
	           aumentor = 10.00;
	           total = aumentor + preco;
             }
	
	       if ((s=='N')&&(aumento<=0.99))
	         {
	           aumentor = 2.00;
	           total = aumentor + preco;
             }
             
	       if ((s=='N')&&(aumento>99.00))
	         {
	           aumentor = 20.00;
	           total = aumentor + preco;
             }
               if ((aumento>=0.99)&&(aumento<=99.99))
	             {total = aumentop * preco;
				 printf("%.2f %.2f", aumento, total);}
	             else{ printf("%.2f %.2f", aumentor, total);}
	   }
		
	    if (preco>25.00)
	    {
	     aumentop = 1.18;
	     aumento = preco * aumentop - preco;
	       if ((s=='R')&&(aumento<=0.99))
	         {
	           aumentor = 1.00;
	           total = aumentor + preco;
	         }
	         
	       if ((s=='R')&&(aumento>99.00))
	         {
	           aumentor = 10.00;
	           total = aumentor + preco;
             }
	
	       if ((s=='N')&&(aumento<=0.99))
	         {
	           aumentor = 2.00;
	           total = aumentor + preco;
             }
             
	       if ((s=='N')&&(aumento>99.00))
	         {
	           aumentor = 20.00;
	           total = aumentor + preco;
             }
			 if ((aumento>=0.99)&&(aumento<=99.99))
	             {total = aumentop * preco;
				 printf("%.2f %.2f", aumento, total);}
	             else{ printf("%.2f %.2f", aumentor, total);}  
	   }
	}
	return 0;	
}	



