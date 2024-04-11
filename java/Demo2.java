public class Demo2 {
    public static void main(String[] args) {
        Demo d = new Demo();
        d.show();
        d.show2();
    }

    public void show() {
        int number = 10; // 局部变量
        System.out.println("number=" + number);
    }

    public void show2() {
        int number = 20000; // 局部变量
        System.out.println("number=" + number);
    }
}