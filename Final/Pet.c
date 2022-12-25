using System;

namespace Pet

{

    class Pet

    {

        // Properties

        public string Name { get; set; }

        public string Type { get; set; }

        public int Age { get; set; }

        public string State { get; set; }

        // Constructor

        public Pet(string name, string type)

        {

            Name = name;

            Type = type;

            Age = 0;

            State = "Single";

        }

        // Grow method

        public int Grow()

        {

            Age++;

            return Age;

        }

        // Give_Birth method

        public void Give_Birth()

        {

            State = "Mother";

        }
        
         class Program

    {
        static void Main(string[] args)
        {
            // Create a new Pet object
            Pet myPet = new Pet("Fluffy", "Cat");

            // Print the initial values of the object's properties
            Console.WriteLine("Name: " + myPet.Name);
            Console.WriteLine("Type: " + myPet.Type);
            Console.WriteLine("Age: " + myPet.Age);
            Console.WriteLine("State: " + myPet.State);

            // Call the Grow method
            Console.WriteLine("Age after growing: " + myPet.Grow());

            // Call the Give_Birth method
            myPet.Give_Birth();
            Console.WriteLine("State after giving birth: " + myPet.State);
        }
    }
}

    }

}

