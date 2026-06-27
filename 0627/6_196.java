public class Soojebi {
    public static void main(String[] args) {
        try {
            int result=10 / 0;
        }
        catch (ArithmeticException e) {
            System.out.print("A");
        }
        finally {
            System.out.print("B");
        }
    }
}