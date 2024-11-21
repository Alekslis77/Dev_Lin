// Здесь класс Box позволяет один объект инициализировать другим
class Box {
    double width;
    double height;
    double depth;
    // Обратите внимание на этот конструктор, который принимает объект типа Box
    Box(Box ob) { //передает объект конструктору
            width = ob.width;
            height = ob.height;
            depth = ob.depth;
    }
    // Конструктор, используемый в случае указания всех размеров.
    Box(double w, double h, double d) {
        width = w;
        height = h;
        depth = d;
    }
    // Конструктор, применяемый в случае, если размеры вообще не указаны.
    Box() {
        width = -1; // использовать -1 для обозначения
        height = -1; // неинициализированного
        depth = -1; // объекта коробки
    }
    // Конструктор, используемый в случае создания объекта кубика.
    Box(double len) {
        width = height = depth = len;
    }
    // Вычислить и возвратить объём.
    double volume() {
        return width * height * depth;
    }
}
class OverloadCons2 {
    public static void main(String[] args) {
        // Создать объекты коробок с применением различных конструкторов.
        Box mybox1 = new Box(10, 20, 15);
        Box mybox2 = new Box();
        Box mycube = new Box(7);
        Box myclone = new Box(mybox1); // Создать копию объекта mybox1
        double vol;
        // Вычислить объём первой коробки.
        vol = mybox1.volume();
        System.out.println("Объём mybox1 равен " + vol);

        // Вычислить объём второй коробки.
        vol = mybox2.volume();
        System.out.println("Объём mybox2 равен " + vol);

        // Вычислить объём кубика.
        vol = mycube.volume();
        System.out.println("Объём mycube равен " + vol);

        // Вычислить объём копии.
        vol = myclone.volume();
        System.out.println("Объём myclone равен " + vol);
    }
}