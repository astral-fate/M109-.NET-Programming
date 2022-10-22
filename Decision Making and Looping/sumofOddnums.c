classProgram{
  staticvoid Main(string[] args){
    int[] num = { 10, 8, 21, 8, 13, 12, 9, 4, 11, 17 };
    int sum = 0;
    
    for (int i = 0; i < num.Length; i++){
      
      if (num[i] % 2 != 0){
        
        sum=sum+num[i]; 
      
      }
    
    }
    
    Console.WriteLine("Sum = " + sum);Console.ReadLine();
  
  }
}
