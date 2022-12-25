using System;

namespace ArrayStatistics

{

    class Program

    {

        static void Main(string[] args)

        {

            // Declare and initialize an array of 5 integers

            int[] numbers = new int[5];

            // Accept input from the user and store it in the array

            Console.WriteLine("Enter the element of the array number:");

            for (int i = 0; i < 5; i++)

            {

                numbers[i] = int.Parse(Console.ReadLine());

            }

            // Find the smallest number in the array

            int smallest = numbers[0];

            for (int i = 1; i < 5; i++)

            {

                if (numbers[i] < smallest)

                {

                    smallest = numbers[i];

                }

            }

            // Find the largest number in the array

            int largest = numbers[0];

            for (int i = 1; i < 5; i++)

            {

                if (numbers[i] > largest)

                {

                    largest = numbers[i];

                }

            }

            // Find the sum of all numbers in the array

            int sum = 0;

            for (int i = 0; i < 5; i++)

            {

                sum += numbers[i];

            }

            // Calculate the average of all numbers in the array

            double average = sum / 5.0;

            // Print the results

            Console.WriteLine("The smallest number is: " + smallest);

            Console.WriteLine("The largest number is: " + largest);

            Console.WriteLine("The sum of numbers is: " + sum);

            Console.WriteLine("The average of numbers is: " + average);

        }

    }

}

