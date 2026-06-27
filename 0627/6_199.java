enum Alpha{
    A("1"), B("2"), C("3");
    String n;
    Alpha(String n){ this.n = n;}
    public String get() { return n; }
}
public class Soojebi {
    public static void main(String[] args) {
        Alpha n = Alpha.C; //¿­°Å °´Ã¼
        System.out.println(n.name());
        System.out.println(n.ordinal());
        System.out.println(n.compareTo(Alpha.A));
        System.out.println(n.get());
        for(int i=0; i<3; i++) {
            System.out.print(Alpha.values()[i]);
        }
    }
}