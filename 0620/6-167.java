publice class Soojebi{
    public static void main(String[] args) {
        String a = "abc";
        String b = "abc"
        String c = new String("abc");
        String d = new String("abc");
        Stirng e = a;
        System.out.println(a==b);   //true
        System.out.println(a==c);   //false
        System.out.println(b==e);   //true
        System.out.println(c==d);   //false
        System.out.println(d==e);   //false
        //문자열 비교는 equals로 한다!
        System.out.println(a.equals(b));    
        System.out.println(a.equals(c));
        System.out.println(b.equals(e));
        System.out.println(c.equals(d));
        System.out.println(d.equals(e));
    }
}