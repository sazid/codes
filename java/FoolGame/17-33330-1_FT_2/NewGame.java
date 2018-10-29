import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class NewGame extends JFrame {

    JButton newGameBtn, quitBtn;
    JPanel panel;

    public NewGame() {
        super("Play the fool game");

        setResizable(false);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLayout(new FlowLayout());

        panel = new JPanel();

        newGameBtn = new JButton("New Game");
        quitBtn = new JButton("Quit");

        panel.add(newGameBtn);
        panel.add(quitBtn);
        add(panel);

        bind();

        pack();
        setLocationRelativeTo(null);
    }

    private void bind() {
        newGameBtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent actionEvent) {
                Board b = new Board();
                b.setVisible(true);

                dispose();
            }
        });

        quitBtn.addActionListener(new ActionListener() {
            @Override
            public void actionPerformed(ActionEvent actionEvent) {
                dispose();
            }
        });
    }

}
