package cse2200.oop.intro;

public class Programme {
    private String code;
    private String name;
    private  Integer credits;

    public Programme(String code, String name, Integer credits) {
        this.code = code;
        this.name = name;
        this.credits = credits;
    }

    public String getCode() {
        return code;
    }

    public String getName() {
        return name;
    }

    public Integer getCredits() {
        return credits;
    }

    public void setCode(String code) {
        this.code = code;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setCredits(Integer credits) {
        this.credits = credits;
    }

    public void print() {
        System.out.println(this.code);
        System.out.println(this.name);
        System.out.println(this.credits);
    }
}
