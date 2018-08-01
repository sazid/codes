import java.awt.*;

public class Start {
    public static void main(String[] args) {
        // NOTE: using lambda instead of anonymous classes (requires java 8)
        // run the GUI from a different (EDT) thread so that calculations
        // on the main thread do not *halt* the GUI thread
        EventQueue.invokeLater(() -> {
            Calculator calc = new Calculator();
            calc.setVisible(true);
        });

//        EquationParser parser = new EquationParser();
//        parser.equation.add("23");
//        parser.equation.add("*");
//        parser.equation.add("-4");
//        parser.equation.add("-");
//        parser.equation.add("89.32");
//        parser.equation.add("-");
//        parser.equation.add("0.012");
//        parser.equation.add("/");
//        parser.equation.add("1");
//        System.out.println(parser.validate(parser.equation));
//
//        System.out.println(parser.solve(parser.equation));
    }
}
