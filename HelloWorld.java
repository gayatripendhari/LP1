import java.util.*;
class HelloWorld{
    public static void main(String[] args){
        System.out.println("Hello Gayatri");
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter Your Age: ");
        int num = sc.nextInt();
        System.out.println("Your runing age is:"+num);
        System.out.println("Enter any two number which you want, I will tell you which on is greater...!");
        int num2 =sc.nextInt();
        int num3 = sc.nextInt();
        if(num2>num3){
            System.out.println("First Number is greater than Second");
        }
        else if(num3>num2){
            System.out.println("Second Number is greater than first");
        }
        else{
            System.out.println("Both are equal");
        }

    }
}