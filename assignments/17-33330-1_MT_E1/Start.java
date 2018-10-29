import java.lang.*;

public class Start {

    public static void main(String[] args) {
        // Create and intialize the objects
        Coordinate coordFrom = new Coordinate();
        Coordinate coordTo = new Coordinate();

        coordFrom.setLatitude(72.58);
        coordFrom.setLongitude(23.69);

        coordTo.setLatitude(35.63);
        coordTo.setLongitude(73.18);

        Airport from = new Airport();
        Airport to = new Airport();

        from.setId(701);
        from.setLocation(coordFrom);
        from.setName("NYC Airport");

        to.setId(901);
        to.setLocation(coordTo);
        to.setName("LA Airport");

        Employee pilot = new Employee();
        pilot.setId("AVNGR002");
        pilot.setName("Tony Stark");
        pilot.setDesignation("Senior Pilot");

        Schedule departure = new Schedule();
        Schedule arrival = new Schedule();

        departure.setHour(8);
        departure.setMinute(15);
        
        arrival.setHour(10);
        arrival.setMinute(20);

        Flight flight = new Flight();
        flight.setId(707);
        flight.setName("OOP1MTAssignment");
        flight.setCapacity(60);
        flight.setPilot(pilot);
        flight.setFrom(from);
        flight.setTo(to);
        flight.setDeparture(departure);
        flight.setArrival(arrival);

        // Print all the details
        P("Flight ID", flight.getId());
        P("Flight Name", flight.getName());
        P("Flight Capacity", flight.getCapacity());

        P("Pilot Name", flight.getPilot().getName());
        P("Pilot ID", flight.getPilot().getId());
        P("Pilot Designation", flight.getPilot().getDesignation());

        P("Airport From Name", flight.getFrom().getName());
        P("Airport From ID", flight.getFrom().getId());
        P("Airport From Longitude", flight.getFrom().getLocation().getLongitude());
        P("Airport From Latitude", flight.getFrom().getLocation().getLatitude());


        P("Airport To Name", flight.getTo().getName());
        P("Airport To ID", flight.getTo().getId());
        P("Airport To Longitude", flight.getTo().getLocation().getLongitude());
        P("Airport To Latitude", flight.getTo().getLocation().getLatitude());

        P("Scheduled Departure at", formatTime(flight.getDeparture()));
        P("Scheduled Arrival at", formatTime(flight.getArrival()));
    }

    /**
     * Utility method for printing two Objects in the format
     * Object A [tabs] :  Object B
     * where "tabs" is calculated based on the length of Object A
     */
    public static void P(Object a, Object b) {
        String tabs = a.toString().length() > 15 ? "\t" : "\t\t";
        System.out.println(a + tabs + ":  " + b);
    }

    /**
     * Utility method for formatting given Schedule in the format
     * hh:mm
     */
    public static String formatTime(Schedule schedule) {
        String formattedStr = String.format("%02d:%02d",
                schedule.getHour(), schedule.getMinute());
        return formattedStr;
    }

}

