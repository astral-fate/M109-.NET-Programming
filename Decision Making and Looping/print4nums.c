classProgram {
  staticvoid Main(string[] args){
    int i;
    for (i = 0; i < 5; i++){
      if (i == 4){Console.Write(i + " "); 
                  continue;
          }
      elseif (i != 4)
        Console.Write(i + " ");
      
      elsebreak;}
    Console.ReadLine();
  
  }

}
