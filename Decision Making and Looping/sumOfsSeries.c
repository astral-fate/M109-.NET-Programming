namespace ConsoleApp14{
  classProgram{
    staticvoid Main(string[] args)
    {int i = 2, s = 0;                
     while (i <= 12) {
       s = s + i * i;                             
       i = i + 2;            
     }
     Console.WriteLine("Sum of the series = " + s);  
     Console.ReadLine();
    }
  }
}
