using System;

public static class Kata
{
    public static string BonusTime(int salary, bool bonus)
    {
        if (bonus)
            return $"${salary * 10}";
        else
            return $"${salary}";
    }
}

class Program
{
    static void Main()
    {
        Console.WriteLine(Kata.BonusTime(10000, true));
        Console.WriteLine(Kata.BonusTime(25000, false));
    }
}