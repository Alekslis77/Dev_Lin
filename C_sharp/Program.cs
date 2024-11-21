/*
    Это простая программа на C#.
    Назовём её Program.cs. 
*/

using System;

class Program {

    // Любая программа на C# начинается с вызова метода Main().
    static void Main() {
        int x;
        int y;

        x = 100;
        
        Console.WriteLine("Простая программа на C#.");
        Console.WriteLine("x содержит " + x);

        y = x / 2;

        Console.Write("y содержит x / 2: ");
        Console.WriteLine(y);
    }
}