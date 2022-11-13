
using System;
class HelloWorld {
  static void Main() {
    Console.WriteLine("Enter a Number : ");
   


  int extra =0;
  int fees = 0;
  int total = 0;
  int count =0;
  int tiket = 500;
  int user;
  int weight;
 
  bool[] arr = new bool[10];
  
  int [ ] myArray = new int [11];
                                
  while (count<=10) { 
   
    Console.WriteLine("enter seat number (-1 to end):");
   
  
    user = Convert.ToInt32(Console.ReadLine());
    //int user = 5;
    
    if (user ==-1){
       break;
      
      };
      
      
    if (user>10){ 
       break;
      
      };
      
        if (arr[user-1] == true){
      
      Console.WriteLine("Reservation cancelled due to unavailable seat number");
      break;

      } ;  
       
   for (int i =0;i<user; ++i){
    i=user;
    arr[i-1] = true;   
    
    myArray[i] = myArray[user];
 
     

      
    if (i<=10){
       count =count +1;
      
      };
      
      
    Console.WriteLine("enter the weight of the bag:"); 
    weight = Convert.ToInt32(Console.ReadLine());
  
    //weight = scan.nextInt();
   
    if (weight==10 || weight<=10){
        extra = 0; 
        total = (count * tiket ) + extra;
        Console.WriteLine("Reservation is confirmed for seat no. "+ user);
        Console.WriteLine("Fees of extra weight: "+ extra+ "$");
        Console.WriteLine("Total fees: "+ total +"$");

      } 
      
        if (weight==10 || weight<=20){
        extra = (weight - 10) * 5; 
        total = (count * tiket )+ extra;
        Console.WriteLine("Reservation is confirmed for seat no. "+ i);
        Console.WriteLine("Fees of extra weight: "+ extra+ " $");
        Console.WriteLine("Total fees: "+ total +"$");

      } ; 
      
      
     if (weight>=25 || weight==25){ 
        Console.WriteLine("Reservation cancelled due to unallowed baggage weight");
         count =count-1;
     } ;    
    
                            
    };

    };
    
  
    Console.WriteLine("The flight has " + count + " reserved seats with total income " + total ); 
    Console.WriteLine("Thank you for choosing our airlines ( AOU airline )");
    
      
      
 
  }
}
