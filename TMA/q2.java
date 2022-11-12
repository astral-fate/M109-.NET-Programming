import java.util.*;
public class Program{
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
  int[] myArray = new int [10];
                                
  while (true) { 
    System.out.println("enter seat number (-1 to end):");
    int user =5;
    
    if (user ==-1){
       break;
      
      };
    if (user>10){ 
       break;
      
      };
       
   for (int i =0;i<myArray.length; i++){
    i=user;
    myArray[i] = myArray[user];
 
     
    if (arr[user-1] != true){
        arr[i-1] = true;
      
      } ;
      
    if (arr[user-1] == true){
      
      System.out.println("Reservation cancelled due to unavailable seat number");
      break;

      } ;
      
    if (i<=10){
       count =count +1;
      
      };
      
      
    System.out.println("enter the weight of the bag:"); 
    //int weight = scan.nextInt();
     int weight = 15;
    
    if (weight==10 || weight<=10){
        extra = 0; 
        total = (count * tiket );
        System.out.println("Reservation is confirmed for seat no. "+ i);
        System.out.println("Fees of extra weight:"+ fees+ "$");
        System.out.println("Total fees: "+ total +"$");

      } ;
      
     if (weight>=25 || weight==25){ 
        System.out.println("Reservation cancelled due to unallowed baggage weight");
         count =count-1;
     } ;    
    
                            
    };

    };
    
    System.out.println();
    System.out.println("The flight has" + count + "reserved seats with total income" + total );       //1 mark
    System.out.println("Thank you for choosing our airlines ( AOU airline )");
    
    };
    
};
