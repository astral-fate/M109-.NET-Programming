import java.util.*;
public class Main{
  public static void main(String[] args){
  System.out.println("Enter a Number : ");
 // Scanner scan = new Scanner(System.in);
  //int num = scan.nextInt();      //2 marksint
  Scanner scan = new Scanner(System.in);
  

  int extra =0;
  int fees = 0;
  int total = 0;
  int count =0;
  int tiket = 500;
  boolean[] arr = new boolean[10];
  arr[0] = false;
  int[] myArray = new int [11];
                                
  while (count<=10) { 
    System.out.println("enter seat number (-1 to end):");
    int user = scan.nextInt();
    //int user = 5;
    
    if (user ==-1){
       break;
      
      };
      
      
    if (user>10){ 
       break;
      
      };
      
        if (arr[user-1] == true){
      
      System.out.println("Reservation cancelled due to unavailable seat number");
      break;

      } ;  
       
   for (int i =0;i<user; ++i){
    i=user;
    arr[i-1] = true;   
    
    myArray[i] = myArray[user];
 
     

      
    if (i<=10){
       count =count +1;
      
      };
      
      
    System.out.println("enter the weight of the bag:"); 
    int weight = scan.nextInt();
   
    if (weight==10 || weight<=10){
        extra = 0; 
        total = (count * tiket ) + extra;
        System.out.println("Reservation is confirmed for seat no. "+ user);
        System.out.println("Fees of extra weight: "+ extra+ "$");
        System.out.println("Total fees: "+ total +"$");

      } 
      
        if (weight==10 || weight<=20){
        extra = (weight - 10) * 5; 
        total = (count * tiket )+ extra;
        System.out.println("Reservation is confirmed for seat no. "+ i);
        System.out.println("Fees of extra weight: "+ extra+ " $");
        System.out.println("Total fees: "+ total +"$");

      } ; 
      
      
     if (weight>=25 || weight==25){ 
        System.out.println("Reservation cancelled due to unallowed baggage weight");
         count =count-1;
     } ;    
    
                            
    };

    };
    
    System.out.println();
    System.out.println("The flight has " + count + " reserved seats with total income " + total );       //1 mark
    System.out.println("Thank you for choosing our airlines ( AOU airline )");
    
    };
    
};
