using System;

namespace ConsoleApplication35
{
    class Program
    {
        static void Main()
        {
            Console.WriteLine("Введіть тризначне число X");
            int x = int.Parse(Console.ReadLine());
            int first, mid, end;
            first = x / 100;
            end = x % 10;
            mid = ((x % 100) / 10);
            int result = (end * 100) + (mid * 10) + first;
            Console.WriteLine("Отримане тризначне число: {0}", result);
        }
    }
}