#include <stdio.h>
main()
{
	int ch;
	printf("                                                  '''STUDENT INFORMATION SYSTEM'''                                                    \n");
	printf("1. NEW ADDIMISION \n");
    printf("2. ALREADY A STUDENT ? \n");
    printf("3. EXIT!!\n\n\n");
    printf("ENTER YOUR CHOICE :");
    scanf("%d",&ch,"\n");
    printf("\n\n\n");
    switch(ch)
   { case 1:   {
   
   
    char first_name,last_name,father_name,mother_name,gender,address;
     int age,ch,branch1,branch2,branch3,branch4;
     long phone[10],aadhar[12];
     
    printf("Add the Students Details\n");
    printf("------------------------------------------------------------------------\n");  
    printf("------------------------------------------------------------------------\n");  
    printf("ENTER FIRST NAME :");
    scanf("%s",&first_name,"\n");
    printf("\nENTER LAST NAME :");
    scanf("%s",&last_name,"\n");
    printf("\nENTER YOUR AGE :");
    scanf("%d",&age,"\n");
    printf("\nENTER YOUR GENDER (M/F):");
	scanf("%s",&gender);
    printf("\nENTER FATHER'S NAME :");
    scanf("%s",&father_name ,"\n");
    printf("\nENTER MOTHER'S NAME :");
    scanf("%s",&mother_name,"\n");
    printf("\nENTER YOUR ADDRESS :");
    scanf("%s",&address,"\n");
    printf("\nENTER YOUR PHONE NUMBER :");
    scanf("%ld",&phone,"\n");
    int p=check(phone);
    if(p==10)
    {
     printf("\nENTER YOUR AADHAR NUMBER :");
     int adh=check(aadhar);
     if(adh==12)
     {
    scanf("%ld",&aadhar,"\n");
    printf("\n\n");
    printf("                                            ''BRANCHES''                                                 ");
    printf("\n                                                                     ");
    printf("\n 1. BACHELOR IN TECHNOLOGY\n"
	        "\n  2. BACHELOR IN BUSINESS ADMINISTRATION\n"
			"\n 3. BACHELOR IN SCIENCE\n"
			"\n 4. BACHELOR IN COMPUTER APPLICATION\n"
			"\n 5. BACHELOR IN PHARMACY\n"
			"\n 6. MASTERS IN TECHNOLOGY\n"
			 "\n 7. MASTERS IN BUSINESS ADMINISTRATION\n"
			 "\n 8. MASTERS IN SCIENCE\n"
	        "\n 9. MASTERS IN COMPUTER APPLICATION\n"
			"\n 10. MASTERS IN PHARMACY\n"
			  );
			  printf("\n");
	printf("ENTER YOUR CHOICE:\n");
	scanf("%d",&ch);
	if(ch==1)
	{ printf("\nBACHELOR IN TECHNOLOGY \n");
             printf("\n SELECT YOUR STREAM \n");
             printf("\n");
          printf("\n 1. Computer Science and Engineering\n"
           "\n 2. Mechanical Engineering\n"
           "\n 3. Electronics and Communication Engineering\n"
           "\n 4. Civil Engineering\n"
           "\n 5. Areospace engineering\n"
           "\n 6. Marine Engineering\n "
           "\n 7. Mining Engineering \n"
           );
           printf("\n");
           printf("ENTER YOUR STREAM:");
           scanf("%d",&branch1);
           if(branch1==1)
           { printf("\n  Computer Science and Engineering\n");
		   }
		   else if(branch1==2)
		   { printf ("\n  Mechanical Engineering\n");
		   }
		   else if(branch1==3)
		   { printf("\n  Electronics and Communication Engineering\n");
		   }
		   else if(branch1==4)
		   {printf("\n 4. Civil Engineering\n");
		   }
		   else if(branch1==5)
		   { printf("\n 5. Areospace engineering\n");
		   }
		   else if(branch1==6)
		   { printf("\n 6. Marine Engineering\n ");
		   }
		   else if(branch1==7)
		   { printf("\n 7. Mining Engineering \n");
		   }
		   else{ printf("invalid input");
		   }
}
		else if(ch==2){
		
		{ printf("\n BACHELOR IN BUSINESS ADMINISTRATION\n");
		} 
	}
	   	   else if(ch==3){
			printf(	"\n  BACHELOR IN SCIENCE\n");
	   	     printf("\n SELECT YOUR STREAM \n");
             printf("\n");
             printf("\n 1. BACHELOR IN SCIENCE'ZOOLOGY'\n"
                    "\n 2. BACHELOR IN SCIENCE'BOTANY'\n"
					"\n 3. BACHELOR IN SCIENCE'MATHEMATICS'\n"
					"\n 4. BACHELOR IN SCIENCE'PHYSICS'\n"
					"\n 5. BACHELOR IN SCIENCE'CHEMISTRY'\n"
					"\n 6. BACHELOR IN SCIENCE'FORENSICS SCIENCE'\n"
					"\n 7. BACHELOR IN SCIENCE'PARAMEDICS'\n"
					"\n 8. BACHELOR IN SCIENCE'RADIOLOGY'\n"			 
			 );
			  printf("\n");
           printf("ENTER YOUR STREAM:");
           scanf("%d",&branch2);
           if(branch2==1)
           { printf("\n  BACHELOR IN SCIENCE'ZOOLOGY'\n");
		   }
		   else if(branch2==2)
		   { printf ("\n   BACHELOR IN SCIENCE'BOTANY'\n");
		   }
		   else if(branch2==3)
		   { printf("\n  BACHELOR IN SCIENCE'MATHEMATICS'\n");
		   }
		   else if(branch2==4)
		   {printf("\n BACHELOR IN SCIENCE'PHYSICS'\n");
		   }
		   else if(branch2==5)
		   { printf("\n BACHELOR IN SCIENCE'PHYSICS'\n");
		   }
		   else if(branch2==6)
		   { printf("\n BACHELOR IN SCIENCE'FORENSICS SCIENCE'\n ");
		   }
		   else if(branch2==7)
		   { printf("\n  BACHELOR IN SCIENCE'PARAMEDICS'  \n");
		   }
		   else if(branch2==8)
		   { printf("\n  BACHELOR IN SCIENCE'RADIOLOGY'  \n");
		   }
		   else{ printf("invalid input");
	   }
	   
			  }
	   else if(ch==4)
	   { printf(" \n BACHELOR IN COMPUTER APPLICATION \n");
	   }
	 else if(ch==5)
	 { printf("\n  BACHELOR IN PHARMACY\n");
	 }
	 else if(ch==6)
	 {
	  printf("\n MASTERS IN TECHNOLOGY \n");
             printf("\n SELECT YOUR STREAM \n");
             printf("\n");
          printf("\n 1. Computer Science and Engineering\n"
           "\n 2. Mechanical Engineering\n"
           "\n 3. Electronics and Communication Engineering\n"
           "\n 4. Civil Engineering\n"
           "\n 5. Areospace engineering\n"
           "\n 6. Marine Engineering\n "
           "\n 7. Mining Engineering \n"
           );
           printf("\n");
           printf("ENTER YOUR STREAM:");
           scanf("%d",&branch3);
           if(branch3==1)
           { printf("\n  Computer Science and Engineering\n");
		   }
		   else if(branch3==2)
		   { printf ("\n  Mechanical Engineering\n");
		   }
		   else if(branch3==3)
		   { printf("\n  Electronics and Communication Engineering\n");
		   }
		   else if(branch3==4)
		   {printf("\n 4. Civil Engineering\n");
		   }
		   else if(branch3==5)
		   { printf("\n 5. Areospace engineering\n");
		   }
		   else if(branch3==6)
		   { printf("\n 6. Marine Engineering\n ");
		   }
		   else if(branch3==7)
		   { printf("\n 7. Mining Engineering \n");
		   }
		   else{ printf("invalid input");
		   }
}
    
    	else if(ch==7){
		
		{ printf("\n MASTERS IN BUSINESS ADMINISTRATION\n");
		} 
	 }
	 else if(ch==8){
			printf(	"\n  MASTERS IN SCIENCE\n");
	   	     printf("\n SELECT YOUR STREAM \n");
             printf("\n");
             printf("\n 1. MASTERS IN SCIENCE'ZOOLOGY'\n"
                    "\n 2. MASTERS IN SCIENCE'BOTANY'\n"
					"\n 3. MASTERS IN SCIENCE'MATHEMATICS'\n"
					"\n 4. MASTERS IN SCIENCE'PHYSICS'\n"
					"\n 5. MASTERS IN SCIENCE'CHEMISTRY'\n"
					"\n 6. MASTERS IN SCIENCE'FORENSICS SCIENCE'\n"
					"\n 7. MASTERS IN SCIENCE'PARAMEDICS'\n"
					"\n 8. MASTERS IN SCIENCE'RADIOLOGY'\n"			 
			 );
			  printf("\n");
           printf("ENTER YOUR STREAM:");
           scanf("%d",&branch4);
           if(branch4==1)
           { printf("\n  MASTERS IN SCIENCE'ZOOLOGY'\n");
		   }
		   else if(branch4==2)
		   { printf ("\n   MASTERS IN SCIENCE'BOTANY'\n");
		   }
		   else if(branch4==3)
		   { printf("\n  MASTERS IN SCIENCE'MATHEMATICS'\n");
		   }
		   else if(branch4==4)
		   {printf("\n MASTERS IN SCIENCE'PHYSICS'\n");
		   }
		   else if(branch4==5)
		   { printf("\n MASTERS IN SCIENCE'PHYSICS'\n");
		   }
		   else if(branch4==6)
		   { printf("\n MASTERS IN SCIENCE'FORENSICS SCIENCE'\n ");
		   }
		   else if(branch4==7)
		   { printf("\n  MASTERS IN SCIENCE'PARAMEDICS'  \n");
		   }
		   else if(branch4==8)
		   { printf("\n  BACHELOR IN SCIENCE'RADIOLOGY'  \n");
		   }
		   else{ printf("invalid input");
	   }
	   
			  }
			   else if(ch==9)
	   { printf(" \n MASTERS IN COMPUTER APPLICATION \n");
	   }
	 else if(ch==10)
	 { printf("\n  MASTERS IN PHARMACY\n");
	 }
	 
     }
     case 2:{
			char user_name[20],password[20],user_name1[20],user_name2[20];
    		long reg_id ;
    		printf("                                                       ACCOUNT LOGIN\n");
    		printf("                                                       =============\n\n\n");
    		printf("                                                   =======LOG IN=======\n\n");
    		printf("                            !! IT SHOULD CONTAIN AN ALPHABET,A NUMBER AND A SPECIAL CHARACTER !!\n\n");
    		printf("ENTER YOUR REGISTRATION NO : ");
    		scanf("%ld",&reg_id,"\n");
    		printf("ENTER PASSWORD : ");
    		scanf("%s",&password,"\n");
    		printf("");
    		printf("\n\n**");
    		printf("\nHOME\n");
    		printf("**\n\n");
    	}
   }
   else
   {
   	printf("Wrong Input");
   }
   //else
   //{
   	//printf("Wrong Input");
   }
   
   
   
       }
      int check(int x)    //FUNCTION TO COUNT THE NUMBER OF DIGITS
    {
    int count=0;
	int b=0;
	while(x!=0)
	{
		x=x/10;
		count++;
		
	}
	
    b=count;
    return b;	
	}
 
