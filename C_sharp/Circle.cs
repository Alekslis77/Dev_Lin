/*
    Это простая программа на C#.
    Назовём её Circle.cs. 
*/

using System;

class Circle {

    // Любая программа на C# начинается с вызова метода Main().
    static void Main() {
        double radius;
        double area;
        const double PI = 3.1416;

        radius = 10.0;
        area = radius*radius*PI;
        
        Console.WriteLine("Площадь круга равна " + area);
    }
}