 #include<stdio.h>
int main()
{
 int x = 5 , y =2 , z ;
 z =0;
 x = y= -1;
 if ( (x = y = -1)||( z =2) ) {
 	printf("%d\n",x);
 for (; x <2; x ++) {
 	printf("%d\n",x);
 printf (" ESC101A \n ") ;
 
 }
 printf ("% d % d % d \n " , x , y , z ) ;
 }
 else {
 printf (" Awesome question \n ") ; 
 }
return 0;
}