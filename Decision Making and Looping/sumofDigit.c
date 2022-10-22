namespace ConsoleApp14{
  classProgram{staticvoid Main(string[] args){
    Console.Write("Enter a Number : ");
    int numb = int.Parse(Console.ReadLine());       
    sum = 0;         
    while (numb > 0){
      int rem = numb % 10;                        
      ssum = sum + rem;                            
      snumb = numb / 10;                           
    }
    Console.WriteLine();
    Console.WriteLine("Sum of digits : " + sum);       
    Console.ReadLine();
  }
 }
}
