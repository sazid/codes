import java.awt.*;

public class Start {
    public static void main(String[] args) {
        // run the GUI from a different (EDT) thread so that calculations
        // on the main thread do not *halt* the GUI thread
        EventQueue.invokeLater(new Runnable() {
            @Override
            public void run() {
                Calculator calc = new Calculator();
                calc.setVisible(true);
            }
        });
    }
}
