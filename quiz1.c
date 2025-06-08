//Menu Driven Program
#include<stdio.h>
int main(){
	char opt;
	int score=0;
	printf("WELCOME TO MY QUIZ OF C LANGUAGE \n");
	printf("INSTRUCTIONS: In this quiz there are ten Qns with four options you have to choose one correct opt! ");
	printf("\nQno1:Who is the father of C language?");
	printf("\n(A). Dennis Ritchie\t (B).Charles Babbage\t (C).Guido van Rossum\t (D).Tim berner lee\t");
	printf("\nEnter your opt");
	scanf("%c",&opt);
   if(opt=='A'|| opt=='a'){
   
   printf(" Conratulations!!!!!! your ans is correct\n");
   score+=2;}
   else  {
   
   printf("invalid choice\n");}
   printf("*********************************************************************************\n");
   printf("Qno2:Which Operator is used in array?\n");
   printf("(A).Increament operator\t (B).Subscript operator\t (C).Assignment Operator\t (D). Superscript operator\t");
   printf("\nEnter Your option");
   scanf(" %c",&opt);
   if(opt=='B' || opt=='b'){
   	printf("Conratulations!!!!!!!! your ans is coorect\n");
   	score+=2;
   }else{
   	printf("\nInvalid choice");
   	
   }
   printf("*********************************************************************************\n");
  
  printf("Qno3: All keywords in C are in_____________ ?\n");
    printf("(a). LowerCase letters\t (b). UpperCase letters \t(c). CamelCase letters \t (d) None of these \t");
    printf("Enter your option\n");
    scanf(" %c",&opt);
    if(opt=='a' || opt=='A'){
    	printf("Congratulations!!!!!!!! Your ans is correct\n");
    	score+=2;
	}
	else {
		printf("\nInvalid choice");
	}
	printf("***********************************************************************************\n");
	printf("Qno4: Which is valid C expression?\n");
	printf("(a). int my_num = 100,000; \t (b). int my_num = 100000; \t(c). int my num = 1000; \t(d). int $my_num = 10000; \t");
	printf("\nEnter your option\n");
	scanf(" %c",&opt);
	if(opt=='b' || opt=='B'){
		printf("Congratulations!!!!!! your ans is correct\n");
			score+=2;
	}

	else {
		printf("Invalid choice\n");
		
	}
	

	printf("**********************************************************************************************\n");
	printf("Qno5.What is the result of logical or relational expression in C?\n");
	printf("(a).a&b \t (b).0&1 \t (c)True or False \t (d).All of these \t");
	printf("Enter your option\n");
	scanf(" %c",&opt);
	if(opt=='b' || opt=='B'){
		printf("Congratulations!!!!!! your ans is correct\n");
		score+=2;
	}
	else{
		printf("\nInvalid Choice");
	}
	printf("**************************************************************************************************");
    
	return 0;
}
