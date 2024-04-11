public static void main(String[] args){

    try{

        int num1 = 2;

        int num2 = 0;

        int result = num1/num2;

        System.out.println(result);

        throw new NumberFormatException();

    }catch(ArrayIndexOutOfBoundsException e){

        System.out.print("1");

    }catch(NumberFormatException e){

        System.out.print("2");

    }catch(Exception e){

        System.out.print("3");

    }finally{

        System.out.print("4");

    }

    System.out.print("5");

}