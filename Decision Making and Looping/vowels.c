"Write a C# program that asks the user to enter any alphabet between ‘a’ and‘e’. If the user has entered a vowel
 " [ letter ‘a’ OR letter ‘e’], display themessage “You have entered a vowel” to the screen, if s/he entered 
 " a non-vowel[ letter ‘b’ , letter ‘c’, OR letter ‘d’], display the message “You have notentered a vowel”.
 " If the user has entered an alphabet which is not between ‘a’and ‘e’, display the message “Invalid In
  
  
  classProgram{
  public static void Main(string[] args)  {
  char lt; 
  lt=(char)Console.Read();
  if( lt == ‘a’) || (lt == ‘e’) 
  Console.WriteLine(“You have entered a vowel”);  /
  else if ( lt == ‘b’) || ( lt == ‘c’) || ( lt == ‘d’) 
  Console.WriteLine(“You have not entered a vowel”); /
  else   
  Console.WriteLine(“Invalid Input”); /
  Console.ReadLine();
  }
  }
