public class UpGrade {
    public static void main(String[] args) {//程 序 的 入 口 ， 主 方 法
    /**一次性声明两个int类型的变量，numA用于存储数据10，numB用于存储数据20*/
    int numA=10,numB=20;
    System.out.println("+numA="+numA+"tnumB="+numB);
    // 将 变 量 numB 的 值 赋 给 变 量 numA
    numA=numB;
    System.out.println("numA="+numA+"tnumB="+numB);
    }
}
