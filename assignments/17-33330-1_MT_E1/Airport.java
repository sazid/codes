import java.lang.*;

public class Airport {
    private int id;
    private String name;
    private Coordinate location;

    public void setId(int id) {
        this.id = id;
    }

    public void setName(String name) {
        this.name = name;
    }

    public void setLocation(Coordinate location) {
        this.location = location;
    }

    public int getId() {
        return this.id;
    }

    public String getName() {
        return this.name;
    }

    public Coordinate getLocation() {
        return this.location;
    }
}

