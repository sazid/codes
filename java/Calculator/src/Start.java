import java.awt.*;

public class Start {
    public static void main(String[] args) {
        // *using lambda instead of anonymous classes (requires java 8)
        // run the GUI from a different (EDT) thread so that calculations
        // on the main thread do not *halt* the GUI thread
        EventQueue.invokeLater(() -> {
            Calculator calc = new Calculator();
            calc.setVisible(true);
        });
    }
}
