package sazid;

import javax.swing.*;
import javax.swing.border.EmptyBorder;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;

public class NewGame extends JFrame {

    ScoreButton newGameBtn, quitBtn;
    JPanel panel;

    public NewGame() {
        super("Play Puzzle Matching");

        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setLayout(new FlowLayout());

        panel = new JPanel();

        newGameBtn = new ScoreButton("NEW GAME");
        newGameBtn.setFont(new Font("Courier", Font.BOLD, 18));
        quitBtn = new ScoreButton("QUIT");
        quitBtn.setFont(new Font("Courier", Font.PLAIN, 18));

        panel.add(newGameBtn);
        panel.add(quitBtn);
        panel.setBorder(new EmptyBorder(10, 10, 10, 10));
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
