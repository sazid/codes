import java.awt.*;

public class Start {

    public static void main(String[] args) {
        EventQueue.invokeLater(new Runnable() {
            @Override
            public void run() {
                NewGame game = new NewGame();
                game.setVisible(true);
            }
        });
    }

}
