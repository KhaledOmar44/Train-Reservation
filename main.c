#include <stdio.h>
#include <math.h>

int main()
{
 int chosenseat=0;
   int seats [31]={1};
   int checker=0;
   int prof=0;
   int chooser;
//filling the array of seats
for(int i=0;i<31;i++){
      seats[i]=i+1;}
    
     
      for(;;){

printf("enter the number of the prosecces you want\n");
      printf("1-reservation\n");
      printf("2-show avaliable seats\n");
      printf("3-cancel the ticket\n");
      printf("4-exit\n");
      printf("5-profit\n");
      scanf("%d",&chooser);











         if(chooser==1){
             //CHOOSE SEATS
             printf("enter the nummber of the seats betweean 1-31 ");
             scanf("%d",&chosenseat);
             if(0<chosenseat&&chosenseat<32&&seats[chosenseat-1]==0)
               {
             printf("\nthe chair is already taken");
             continue;}
                                       
            else if(0<chosenseat&&chosenseat<32)
            {
             printf("the ticket has been reserverd successfully");
             seats[chosenseat-1]=0;
            continue;}
            
            else if(0>chosenseat||chosenseat>32){
             printf("\nwrong nummber");}
                 }
         else if(chooser==2){
            //showing avaliable seats
            int back;
            for (int j=0;j<31;j++){
            printf ("\n%d",seats[j]);}
            printf("for back to the main manu type anything");
            scanf("%d",&back);
            if(back==0){
               continue;
            }
            else{
               continue;
            }

         }

      
    //cancel of tickets
         else   if(chooser==3){

            int cancel;
            printf("enter the nummber of the seat that you want to cancel");
            scanf("%d",&cancel);
            if(
            seats[cancel-1]!=0)
   {
            printf("\nwrong seat the seat is already avaliable\n");
            continue;
   }
            else{
                  
                  seats[cancel-1]=cancel;
                  printf("\nthe cancel has been complited\n");
                  continue;
      }
         }
        else if(chooser==4){
            break;
         }
          //profits
        else if(chooser==5){
   for(int p=0;p<31;p++){
      checker = seats[p];
      if(checker==0){
         prof=prof+250;
         printf("\nthe profit of the day is %d$\n",prof);
      }}}
          
          
          
          
          
          
      }
   
      return 0;
      }
  







      // for showing seats 

       /*for (int j=0;j<31;j++){
         printf ("\n%d",seats[j]);


       }
         



















  
   //CHOOSE SEATS
   /*scanf("%d",&chosenseat);
   seats[chosenseat-1]=0;

   //profits
    */
   /*for(int p=0;p<31;p++){
      checker = seats[p];
      if(checker==0){
         prof=prof+250;
      }*/


   
   //cancelation of the ticket
   /*int cancel;
   printf("enter the nummber of the seat that you want to cancel");
   if(
      seats[cancel-1]!=0
   ){
      printf("wrong seat the seat is already avaliable");
   }
      else{
   scanf("%d",cancel);
   seats[cancel-1]=cancel;
      }
      */
   








        

   


  

   
