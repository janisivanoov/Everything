using System;

namespace Distance_Converting
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Hello!");
            Console.WriteLine("Enter Distance in miles: ");
            string distance = Console.ReadLine();
            double miles = double.Parse(distance);
            Console.WriteLine("Result:");
            Console.Write(miles * 1.609);
            Console.ReadLine();
        }
    }
}
