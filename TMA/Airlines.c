using System;
using System.Collections.Generic;

namespace Qustion1
{
    class Program
    {
        static void Main(string[] args)
        
        //define vars of type double
        {
            double gallonsUsed,  milesDriven, TnakedUsed, midean;
             //define vars of type double and assign value to zero
            double MilesNumber = 0;
             //define vars of type double and assign value to zero
            double gallonsNumber = 0;
           
           // while user have not enter -1
            while (true)  { 
                //ask the user to enter gallons user
                Console.Write("Enter the gallons that used, (Enter -1 to end:) ");
        
                gallonsUsed = Convert.ToDouble(Console.ReadLine());
   
                if (gallonsUsed == -1) {
                    break;
                }
                //ask the user to enter miles
                Console.Write("Enter the miles driven: ");
                //read miles from user
                milesDriven = Convert.ToDouble(Console.ReadLine());
                TnakedUsed =  (double)milesDriven / gallonsUsed;
                //print the mile/galon for this tank
                Console.Write("The miles/gallon for this tank is: ");
               
                //Console.WriteLine (Convert.ToDouble(TnakedUsed));
                Console.WriteLine(String.Format("{0:0.00}", TnakedUsed));
                
      
                
                
               //calcluate the number of total miles
                MilesNumber = milesDriven + MilesNumber;
                 //calcluate the number of total gallons
                gallonsNumber = gallonsUsed + gallonsNumber;
            }
            midean = (double)MilesNumber / gallonsNumber;
            
         //print the avrage of the goalns and miles
            //Console.Write("The average is: " + midean);
            Console.Write("The average is: ");
           Console.Write(String.Format("{0:0.00}", midean));
             if (midean > 30)
            {
              //print the avrage is low when avrage>30    

                Console.Write(" :Low");
            }
            
             //print the avrage is normal when avrage>=20    
            else if (midean >= 20 && midean<30)
            {
                Console.Write(" :Normal");

            }
            
         //print the avrage is high when avrage<20    
            else if (midean<20 ) {
                Console.Write(" :High");

            
            }
        }
    }
}



