/*A store provides a discount according to the type of product, being three types:
Discount Type
1   BRL8
2  BRL15
3  BRL18
In addition to the discount, it allows the value to be paid in installments after the discount, and the value of the installments must be whole,
thus one installment must have a higher value than the others. 
The store applies the rule of being the last installment that has the highest value.
In case of cash purchase, the value of the first and last installments must be equal.
If you can already pay for the product with the discount, it will be free and all zero must be displayed.
The program calculates the amount after discount, the amount of the first installment and the last installment.
In the first line of the entry will be provided, in the following order: "Product Value" "Product Type" "Amount of parcels". */

#include <stdio.h>
int main (){
    int valor_produto,tipo,qtd_parcelas;
    
    scanf ("%d %d %d",&valor_produto, &tipo, &qtd_parcelas);
    
    int prim_par,ult_par;
    
    if (tipo == 1){
    	valor_produto = valor_produto - 8;
    	if (valor_produto <= 8) printf ("0 0 0");
    	else if (qtd_parcelas == 1){
    	    	prim_par =ult_par = valor_produto;
    	    	printf ("%d %d %d", valor_produto,prim_par,ult_par);
    	    }else {
        	prim_par = valor_produto/qtd_parcelas;
        	ult_par =  valor_produto - (prim_par*(qtd_parcelas -1));
        	 printf ("%d %d %d", valor_produto,prim_par,ult_par); 
      }
    }
    else if (tipo ==2){
    	valor_produto= valor_produto - 15;
    	
    		if (valor_produto <= 15) printf ("0 0 0");
    		else if (qtd_parcelas == 1)
    		{
    		prim_par =ult_par = valor_produto;
    		 printf ("%d %d %d", valor_produto,prim_par,ult_par);
		    }else{  
        	prim_par = valor_produto/qtd_parcelas;
        	ult_par = valor_produto - (prim_par*(qtd_parcelas -1)) ;
        	printf ("%d %d %d", valor_produto,prim_par,ult_par);
		    }
	}
	else {
		valor_produto = valor_produto - 18;
		if (valor_produto <= 18) printf ("0 0 0");
		else if (qtd_parcelas == 1)
		{
    prim_par =ult_par = valor_produto;
    printf ("%d %d %d", valor_produto,prim_par,ult_par);
    	 
		} else {
      prim_par = valor_produto/qtd_parcelas;
      ult_par = valor_produto - (prim_par*(qtd_parcelas -1)) ;
      printf ("%d %d %d", valor_produto,prim_par,ult_par);
		}
	}
    return 1;
}
