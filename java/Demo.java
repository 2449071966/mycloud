public class Demo {
        int number = 20; // 成员变量

        public void show() {
                int number = 10; // 局部变量
                System.out.println("number=" + number);

        }

        public static void main(String[] args) {
                Demo d = new Demo();
                d.show();

        }

        public void show2() {
        }
}
