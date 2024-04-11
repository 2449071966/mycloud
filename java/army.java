public class army {
    public static void main(String[] args) {
        int x=0;
        //判断x的值，三个条件有真则真，当且仅当三者均为假才能跳出循环
        while(x%3!=2|x%5!=3|x%7!=4){
            x++;
        }
        
        System.out.println(x);
    }
}