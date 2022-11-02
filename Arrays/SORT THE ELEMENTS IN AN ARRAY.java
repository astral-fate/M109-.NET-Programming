public class YourClassNameHere {
    public static void main(String[] args) {
      
            
      int number []  = { 55,40,10,5,2};
      
      int n = number.length;
      
      System.out.println("Given List");
      
      for(int i=0;i<n;i++) {
      
           System.out.println(" "+number[i]);
      
         }
      
       System.out.println("\n");
      
      //Sorting Begins
      
      for(int i=0;i<n;i++) {
      
              for(int j=i+1;j<n;j++){
              
                  if(number[i]<number[j]) {
                  
                      int temp=number[i];
                      
                      number[i]=number[j];
                      
                      number[j]=temp;
                      
                      }
      
                    }
    
                  }
      
       System.out.println("Sorted List");
      
            for(int i=0;i<n;i++){
            
                 System.out.println(" "+number[i]);
            
            }
      
       System.out.println(" ");
      
    }
      
  }
