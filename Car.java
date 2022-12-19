
class Car {
    int wheel;
    Car() {
        wheel = 4;
        System.out.println("I am car cons");
    }
    void start() {
        System.out.println("car stating");
    } 
    void start(int id){
        System.out.println(id + " starting");
    }
    public static void main(String args[]) {
        Car car = new Car();
        car.start();
        car.start(10);
        BMW bmw = new BMW();
        bmw.start();
        bmw.start(11);
    }
}

abstract class design {
    abstract void color();
}

class BMW extends Car {
    void start(){
        System.out.println("bmw starting");
    }
}

