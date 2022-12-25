using System;

namespace DistanceConverter

{

    class Program

    {

        static void Main(string[] args)

        {

            // Print the available options

            Console.WriteLine("The available options are:");

            Console.WriteLine("1. Foot");

            Console.WriteLine("2. Inch");

            // Accept input for the output measurement

            Console.Write("Output measurement: ");

            int outputMeasurement = int.Parse(Console.ReadLine());

            // Accept input for the distance in yards

            Console.Write("Enter the distance in yards: ");

            double distanceInYards = double.Parse(console.ReadLine());

            // Convert the distance to the chosen output measurement

            if (outputMeasurement == 1)

            {

                double distanceInFeet = distanceInYards * 3;

                Console.WriteLine("The distance of \"" + distanceInYards + " Yard\" is equivalent to \"" + distanceInFeet + " Feet\"");

            }

            else if (outputMeasurement == 2)

            {

                double distanceInInches = distanceInYards * 3 * 12;

                Console.WriteLine("The distance of \"" + distanceInYards + " Yard\" is equivalent to \"" + distanceInInches + " Inches\"");

            }

            else

            {

                Console.WriteLine("Error: Invalid output measurement selected");

            }

        }

    }

}

