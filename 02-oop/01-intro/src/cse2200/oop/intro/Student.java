package cse2200.oop.intro;

import java.text.*;
import java.util.Date;

public class Student {
    private static SimpleDateFormat simpleDateFormat = new SimpleDateFormat("dd/MM/yyyy");

    private String usi;
    private String fullName;
    private Date dateOfBirth;

    public Student(String usi, String fullName, String dateOfBirth) throws ParseException {
        this.usi = usi;
        this.fullName = fullName;
        this.dateOfBirth = Student.simpleDateFormat.parse(dateOfBirth);
    }

    public String getUsi() {
        return usi;
    }

    public String getFullName() {
        return fullName;
    }

    public Date getDateOfBirth() {
        return dateOfBirth;
    }

    public void setUsi(String usi) {
        this.usi = usi;
    }

    public void setFullName(String fullName) {
        this.fullName = fullName;
    }

    public void setDateOfBirth(String dateOfBirth) throws ParseException {
        this.dateOfBirth = Student.simpleDateFormat.parse(dateOfBirth);
    }

    public  void print(){
        System.out.println(this.usi);
        System.out.println(this.fullName);
        System.out.println(this.dateOfBirth);
    }

}
