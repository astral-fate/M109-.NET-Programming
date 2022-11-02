import java.util.Scanner; 
public class Program{
     static int ROWS = 20;

    static int COLUMNS = 20;
  
  public static void  main(String[] args){

    int[][] product = new int[ROWS][COLUMNS];


    System.out.println("MULTIPLICATION TABLE"); 
    System.out.println(" ");
    int i,j;
    

         for(i=10; i<ROWS;i++) {
           
            for (j=10; j<COLUMNS; j++) {
              
               product[ROWS][COLUMNS] = i*j;
               
               System.out.println(" " +product[ROWS][COLUMNS]);
               
               }
               
               System.out.println(" ");
    }
 }
}
