import java.util.Scanner; 
public class Program{
  public static void main(String[] args){
  System.out.println("Enter a Number : ");
 // Scanner scan = new Scanner(System.in);
  //int num = scan.nextInt();      //2 marksint 
  int num = 123;
  int sum = 0;                                    //1 mark
  while (num > 0) {                               //1.5 marks
    int rem = num % 10;                        //1.5 marks
    sum = sum + rem;                            //1.5 marks
    num = num / 10;                           //1.5 marks
    }
    System.out.println();
    System.out.println("Sum of digits : " + sum);       //1 mark
//    num = scan.nextInt();
    }
    }

