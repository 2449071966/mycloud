public class Person2{
    String name;
    int age ;
    String sex;
    public Person2(){
        
    }
    public Person2(String name){
    this.name=name;
    }
    public Person2(String name,int age,String sex){
    this(name);
    this.age=age;
    this.sex=sex;
    }
    public void introduce(){
    System.out.println(" 姓名:"+name+"\t 年龄 :"+age+"\t 性别: "+sex);
    }
}