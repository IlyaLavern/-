using System;

namespace Лабораторна1
{
    public class Program
    {
        static void Main()
        {
            string text;
            do
            {
                Console.WriteLine("Введіть тризначне число X");
                Console.Write("X = ");
                text = Console.ReadLine();
                bool ok = int.TryParse(text, out int x);
                if (ok && text.Length == 3)
                {
                    Console.WriteLine("\nОтримане тризначне число: {0}\n", Mirror(x));
                    
                }
                else if (text != "")
                {
                    Console.WriteLine("\nПотрібно ввести тризначне число X\n");
                }
            } 
        }

        public static int Mirror(int x)
        {
            int first, mid, end;
            first = x / 100;
            end = x % 10;
            mid = ((x % 100) / 10);
            return (end * 100) + (mid * 10) + first;
        }
    }
}
