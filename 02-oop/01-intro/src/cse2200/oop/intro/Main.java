package cse2200.oop.intro;

import java.text.ParseException;

public class Main {

    public static void main(String[] args) throws ParseException {

        Student jean = new Student("0000000", "Jean Smith", "01/01/2000");
        Student john = new Student("0000001", "John Smith", "02/02/2000");

        Programme csi = new Programme("0702", "Bachelor of Science (Computer Science)", 138);

        jean.print();
        john.print();
        csi.print();
    }
}
