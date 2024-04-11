public class chicken {
    public static void main(String[] args) {
        //第一层循环，用于表示鸡翁的范围，初始化表达式的变量定义为 x=0，判断条件是x<=0
        for (int x = 0; x <= 20; x++) {
            //第二层循环，用于表示鸡母的范围，初始化表达式的变量定义为 y=0，判断条件是y<=33
            for (int y = 0; y <= 33; y++) {
                //此时，表示鸡雏的变量 z = 100 - x - y
                int z = 100 - x - y;
 
                if (z % 3 == 0 && 5 * x + y * 3 + z / 3 == 100) {
                    System.out.println(x + "," + y + "," + z);
                }
            }
        }
    }

    
}
