#include<stdio.h>
#include<stdlib.h>
void main()
{	
    int a[10],x,y,z,b[10];
    y=48;
    for(x=0;x<9;x=x+1)
    {
        a[x]=y;
        y=y+1;

    }
	system("color B");
    char player1[10],player2[10] ;

    printf("ENTER THE NAME OF PLAYER1 [ x ]:");
    scanf("%s",&player1);

    printf("ENTER THE NAME OF PLAYER2 [ O  ]:");
    scanf("%s",&player2);

               printf("\n\n\t\t\t\t\t__________ LETS START THE GAME   {TIC TAC TOE} _______________\n\n");

               printf("\n ---See Below Numbers Assume Them As vaccant Places And Press That Particular Number To Get It Replaced---\n");

  printf("\n\n\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[6],a[7],a[8]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[3],a[4],a[5]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[0],a[1],a[2]);
                                                    //PLAYER 1

printf("\n\n%s's TURN\n",player1);
printf("Enter Your Choice:");
scanf("%d",&y);

                      a[y]=88;
                       printf("\n\n\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[6],a[7],a[8]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[3],a[4],a[5]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[0],a[1],a[2]);



                                                       //PLAYER 2


printf("\n\n%s's TURN\n",player2);
printf("Enter Your Choice:");
scanf("%d",&z);

if(z==y)
                {
                       printf("\n\t\t-----INVALID-----\n");
                       printf("\n\n\t|  %c   %c   %c |\n",a[6],a[7],a[8]);
                       printf("\t|  %c   %c   %c |\n",a[3],a[4],a[5]);
                       printf("\t|  %c   %c   %c |\n",a[0],a[1],a[2]);
                       printf("\n\n%s's TURN\n",player2);
                       printf("Enter Your Choice:");
                       scanf("%d",&z);

                }


a[z]=79;
printf("\n\n\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[6],a[7],a[8]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[3],a[4],a[5]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[0],a[1],a[2]);


                                                         //PLAYER 1

printf("\n\n%s's TURN\n",player1);
printf("Enter Your Choice:");
scanf("%d",&b[1]);


if(b[1]==z || b[1]==y)
                {
                                           printf("\n\t\t-----INVALID-----\n");
                       printf("\n\n\t|  %c   %c   %c |\n",a[6],a[7],a[8]);
                       printf("\t|  %c   %c   %c |\n",a[3],a[4],a[5]);
                       printf("\t|  %c   %c   %c |\n",a[0],a[1],a[2]);
                       printf("\n\n%s's TURN\n",player1);
                       printf("Enter Your Choice:");
                       scanf("%d",&b[1]);


                }

a[b[1]]=88;
printf("\n\n\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[6],a[7],a[8]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[3],a[4],a[5]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[0],a[1],a[2]);


                                                        // PLAYER 2

printf("\n\n%s's TURN\n",player2);
printf("Enter Your Choice:");
scanf("%d",&b[2]);

  if(b[2]==b[1] || b[2]==y || b[2]==z)
                {
                          printf("\n\t\t-----INVALID-----\n");
                       printf("\n\n\t|  %c   %c   %c |\n",a[6],a[7],a[8]);
                       printf("\t|  %c   %c   %c |\n",a[3],a[4],a[5]);
                       printf("\t|  %c   %c   %c |\n",a[0],a[1],a[2]);
                       printf("\n\n%s's TURN\n",player2);
                       printf("Enter Your Choice:");
                       scanf("%d",&b[2]);


                }
a[b[2]]=79;
printf("\n\n\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[6],a[7],a[8]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[3],a[4],a[5]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[0],a[1],a[2]);


                                                  // PLAYER 1
printf("\n\n%s's TURN\n",player1);
printf("Enter Your Choice:");
scanf("%d",&b[3]);
if(b[3]==b[2] || b[3]==b[1] || b[3]==y || b[3]==z)
                {
                    printf("\n\t\t-----INVALID-----\n");
                       printf("\n\n\t|  %c   %c   %c |\n",a[6],a[7],a[8]);
                       printf("\t|  %c   %c   %c |\n",a[3],a[4],a[5]);
                       printf("\t|  %c   %c   %c |\n",a[0],a[1],a[2]);
                       printf("\n\n%s's TURN\n",player1);
                       printf("Enter Your Choice:");
                       scanf("%d",&b[3]);


                }
a[b[3]]=88;
printf("\n\n\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[6],a[7],a[8]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[3],a[4],a[5]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[0],a[1],a[2]);

if( (a[6]==a[7] && a[7]==a[8] && a[6]==88) ||(a[3]==a[4] && a[3]==a[5] && a[3]==88) || (a[0]==a[1] && a[0]==a[2] && a[0]==88)||(a[6]==a[3] && a[3]==a[0] && a[6]==88)
   ||(a[7]==a[4] && a[4]==a[1] && a[7]==88) ||(a[8]==a[5] && a[5]==a[2] && a[8]==88)||(a[6]==a[2] && a[2]==a[4] && a[6]==88)||(a[8]==a[4] && a[8]==a[0] && a[8]==88))

                    {
                        printf("\t\t\t\t\t\n====== %s is the WINNER.========Game by grpnpraveen\n\n",player1);
                        exit(0);

                    }

if( (a[6]==a[7] && a[7]==a[8] && a[6]==79) ||(a[3]==a[4] && a[3]==a[5] && a[3]==79) || (a[0]==a[1] && a[0]==a[2] && a[0]==79)||(a[6]==a[3] && a[3]==a[0] && a[6]==79)
   ||(a[7]==a[4] && a[4]==a[1] && a[7]==79) ||(a[8]==a[5] && a[5]==a[2] && a[8]==79)||(a[6]==a[2] && a[2]==a[4] && a[6]==79)||(a[8]==a[4] && a[8]==a[0] && a[8]==79))

                    {
                        printf("\t\t\t\t\t\n====== %s is the WINNER.========Game by grpnpraveen\n\n",player2);
                        exit(0);

                    }



                                                            // PLAYER 2
printf("\n\n%s's TURN\n",player2);
printf("Enter Your Choice:");
scanf("%d",&b[4]);

  if(b[4]==b[3] || b[4]==b[2] || b[4]==b[1] || b[4]==x || b[4]==z)
                {
                          printf("\n\t\t-----INVALID-----\n");
                       printf("\n\n\t|  %c   %c   %c |\n",a[6],a[7],a[8]);
                       printf("\t|  %c   %c   %c |\n",a[3],a[4],a[5]);
                       printf("\t|  %c   %c   %c |\n",a[0],a[1],a[2]);
                       printf("\n\n%s's TURN\n",player2);
                       printf("Enter Your Choice:");
                       scanf("%d",&b[2]);




                }
a[b[4]]=79;
printf("\n\n\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[6],a[7],a[8]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[3],a[4],a[5]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[0],a[1],a[2]);


if( (a[6]==a[7] && a[7]==a[8] && a[6]==88) ||(a[3]==a[4] && a[3]==a[5] && a[3]==88) || (a[0]==a[1] && a[0]==a[2] && a[0]==88)||(a[6]==a[3] && a[3]==a[0] && a[6]==88)
   ||(a[7]==a[4] && a[4]==a[1] && a[7]==88) ||(a[8]==a[5] && a[5]==a[2] && a[8]==88)||(a[6]==a[2] && a[2]==a[4] && a[6]==88)||(a[8]==a[4] && a[8]==a[0] && a[8]==88))

                    {
                        printf("\t\t\t\t\t\n====== %s is the WINNER.========Game by grpnpraveen\n\n",player1);
                        exit(0);

                    }

if( (a[6]==a[7] && a[7]==a[8] && a[6]==79) ||(a[3]==a[4] && a[3]==a[5] && a[3]==79) || (a[0]==a[1] && a[0]==a[2] && a[0]==79)||(a[6]==a[3] && a[3]==a[0] && a[6]==79)
   ||(a[7]==a[4] && a[4]==a[1] && a[7]==79) ||(a[8]==a[5] && a[5]==a[2] && a[8]==79)||(a[6]==a[2] && a[2]==a[4] && a[6]==79)||(a[8]==a[4] && a[8]==a[0] && a[8]==79))

                    {
                        printf("\t\t\t\t\t\n====== %s is the WINNER.========Game by grpnpraveen\n\n",player2);
                        exit(0);

                    }


                                                           //PLLAYER 1
printf("\n\n%s's TURN\n",player1);
printf("Enter Your Choice:");
scanf("%d",&b[5]);

  if(b[5]==b[3] || b[5]==b[2] || b[5]==b[1] || b[5]==x || b[5]==z ||b[5]==b[4] )
                {
                          printf("\n\t\t-----INVALID-----\n");
                       printf("\n\n\t|  %c   %c   %c |\n",a[6],a[7],a[8]);
                       printf("\t|  %c   %c   %c |\n",a[3],a[4],a[5]);
                       printf("\t|  %c   %c   %c |\n",a[0],a[1],a[2]);
                       printf("\n\n%s's TURN\n",player1);
                       printf("Enter Your Choice:");
                       scanf("%d",&b[5]);


                }
a[b[5]]=88;
printf("\n\n\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[6],a[7],a[8]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[3],a[4],a[5]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[0],a[1],a[2]);



if( (a[6]==a[7] && a[7]==a[8] && a[6]==88) ||(a[3]==a[4] && a[3]==a[5] && a[3]==88) || (a[0]==a[1] && a[0]==a[2] && a[0]==88)||(a[6]==a[3] && a[3]==a[0] && a[6]==88)
   ||(a[7]==a[4] && a[4]==a[1] && a[7]==88) ||(a[8]==a[5] && a[5]==a[2] && a[8]==88)||(a[6]==a[2] && a[2]==a[4] && a[6]==88)||(a[8]==a[4] && a[8]==a[0] && a[8]==88))

                    {
                        printf("\t\t\t\t\t\n====== %s is the WINNER.========Game by grpnpraveen\n\n",player1);
                        exit(0);

                    }

if( (a[6]==a[7] && a[7]==a[8] && a[6]==79) ||(a[3]==a[4] && a[3]==a[5] && a[3]==79) || (a[0]==a[1] && a[0]==a[2] && a[0]==79)||(a[6]==a[3] && a[3]==a[0] && a[6]==79)
   ||(a[7]==a[4] && a[4]==a[1] && a[7]==79) ||(a[8]==a[5] && a[5]==a[2] && a[8]==79)||(a[6]==a[2] && a[2]==a[4] && a[6]==79)||(a[8]==a[4] && a[8]==a[0] && a[8]==79))

                    {
                        printf("\t\t\t\t\t\n====== %s is the WINNER.========Game by grpnpraveen\n\n",player2);
                        exit(0);

                    }

                                                 //PLAYER 2

printf("\n\n%s's TURN\n",player2);
printf("Enter Your Choice:");
scanf("%d",&b[6]);

  if(b[6]==b[3] || b[6]==b[2] || b[6]==b[1] || b[6]==x || b[6]==z ||b[6]==b[4] || b[6]==b[5] )
                {
                          printf("\n\t\t-----INVALID-----\n");
                       printf("\n\n\t|  %c   %c   %c |\n",a[6],a[7],a[8]);
                       printf("\t|  %c   %c   %c |\n",a[3],a[4],a[5]);
                       printf("\t|  %c   %c   %c |\n",a[0],a[1],a[2]);
                       printf("\n\n%s's TURN\n",player2);
                       printf("Enter Your Choice:");
                       scanf("%d",&b[6]);


                }
a[b[6]]=79;
printf("\n\n\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[6],a[7],a[8]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[3],a[4],a[5]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[0],a[1],a[2]);



if( (a[6]==a[7] && a[7]==a[8] && a[6]==88) ||(a[3]==a[4] && a[3]==a[5] && a[3]==88) || (a[0]==a[1] && a[0]==a[2] && a[0]==88)||(a[6]==a[3] && a[3]==a[0] && a[6]==88)
   ||(a[7]==a[4] && a[4]==a[1] && a[7]==88) ||(a[8]==a[5] && a[5]==a[2] && a[8]==88)||(a[6]==a[2] && a[2]==a[4] && a[6]==88)||(a[8]==a[4] && a[8]==a[0] && a[8]==88))

                    {
                        printf("\t\t\t\t\t\n====== %s is the WINNER.========Game by grpnpraveen \n\n",player1);
                        exit(0);

                    }

if( (a[6]==a[7] && a[7]==a[8] && a[6]==79) ||(a[3]==a[4] && a[3]==a[5] && a[3]==79) || (a[0]==a[1] && a[0]==a[2] && a[0]==79)||(a[6]==a[3] && a[3]==a[0] && a[6]==79)
   ||(a[7]==a[4] && a[4]==a[1] && a[7]==79) ||(a[8]==a[5] && a[5]==a[2] && a[8]==79)||(a[6]==a[2] && a[2]==a[4] && a[6]==79)||(a[8]==a[4] && a[8]==a[0] && a[8]==79))

                    {
                        printf("\t\t\t\t\t\n====== %s is the WINNER.========Game by grpnpraveen\n\n",player2);
                        exit(0);

                    }



                                                    // PLAYER 1

printf("\n\n%s's TURN\n",player1);
printf("Enter Your Choice:");
scanf("%d",&b[7]);

  if(b[7]==b[3] || b[7]==b[2] || b[7]==b[1] || b[7]==x || b[7]==z ||b[7]==b[4] || b[7]==b[5] || b[7]==b[6] )
                {
                          printf("\n\t\t-----INVALID-----\n");
                       printf("\n\n\t|  %c   %c   %c |\n",a[6],a[7],a[8]);
                       printf("\t|  %c   %c   %c |\n",a[3],a[4],a[5]);
                       printf("\t|  %c   %c   %c |\n",a[0],a[1],a[2]);
                       printf("\n\n%s's TURN\n",player1);
                       printf("Enter Your Choice:");
                       scanf("%d",&b[7]);


                }
a[b[7]]=88;
printf("\n\n\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[6],a[7],a[8]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[3],a[4],a[5]);
printf("\t\t\t\t\t\t\t|  %c   %c   %c |\n",a[0],a[1],a[2]);

                            // condition of winning
if( (a[6]==a[7] && a[7]==a[8] && a[6]==88) ||(a[3]==a[4] && a[3]==a[5] && a[3]==88) || (a[0]==a[1] && a[0]==a[2] && a[0]==88)||(a[6]==a[3] && a[3]==a[0] && a[6]==88)
   ||(a[7]==a[4] && a[4]==a[1] && a[7]==88) ||(a[8]==a[5] && a[5]==a[2] && a[8]==88)||(a[6]==a[2] && a[2]==a[4] && a[6]==88)||(a[8]==a[4] && a[8]==a[0] && a[8]==88))

                    {
                        printf("\t\t\t\t\t\n====== %s is the WINNER.========Game by grpnpraveen\n\n",player1);
                        exit(0);

                    }

if( (a[6]==a[7] && a[7]==a[8] && a[6]==79) ||(a[3]==a[4] && a[3]==a[5] && a[3]==79) || (a[0]==a[1] && a[0]==a[2] && a[0]==79)||(a[6]==a[3] && a[3]==a[0] && a[6]==79)
   ||(a[7]==a[4] && a[4]==a[1] && a[7]==79) ||(a[8]==a[5] && a[5]==a[2] && a[8]==79)||(a[6]==a[2] && a[2]==a[4] && a[6]==79)||(a[8]==a[4] && a[8]==a[0] && a[8]==79))

                    {
                        printf("\t\t\t\t\t\n====== %s is the WINNER.========Game by grpnpraveen\n\n",player2);
                        exit(0);

                    }




printf("\t\t\t\n ----MATCH IS TIE--Game by grpnpraveen-----");


}



