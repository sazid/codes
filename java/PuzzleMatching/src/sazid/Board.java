package sazid;

import javax.swing.*;
import javax.swing.border.EmptyBorder;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.ArrayList;
import java.util.Random;

public class Board extends JFrame {

    private ArrayList<ScoreButton> gameButtons = new ArrayList<>();
    private JLabel scoreLabel;
    private JPanel panel;
    private int score;
    private final Random rand = new Random();

    private String selected = "";
    private int idx = -1;

    public Board() {
        super("Puzzle Matching!");

        setResizable(false);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setSize(600, 800);

        score = 0;

        initUi();
        initPanel();
        bind();

        setLocationRelativeTo(null);
    }

    private void initPanel() {
        panel = new JPanel();
        panel.setBorder(new EmptyBorder(10, 10, 10, 10));
        panel.setLayout(null);

        panel.add(scoreLabel);

        for (int i = 0; i < 10; ++i) {
            panel.add(gameButtons.get(i));
        }

        add(panel);
    }

    private void initUi() {

        scoreLabel = new JLabel("Score: " + score);
        scoreLabel.setBounds(10, 10, 100, 50);
        scoreLabel.setFont(new Font("Courier", Font.BOLD, 18));

        for (int i = 0; i < 5; ++i) {
            int val = rand.nextInt(100);

            final ScoreButton btn = new ScoreButton(String.valueOf(val));
            btn.setFont(new Font("Courier", Font.BOLD, 20));
            btn.setBounds(rand.nextInt(520), rand.nextInt(680), 80, 100);

            final ScoreButton btn2 = new ScoreButton(String.valueOf(val));
            btn2.setFont(new Font("Courier", Font.BOLD, 20));
            btn2.setBounds(rand.nextInt(520), rand.nextInt(680), 80, 100);
            btn.setSelected(true);

            gameButtons.add(btn);
            gameButtons.add(btn2);
        }

    }

    private void addScore() {
        scoreLabel.setText("Score: " + ++score);
    }

    private void deductScore() {
        scoreLabel.setText("Score: " + --score);
    }

    private void bind() {
        for (int i = 0; i < 10; ++i) {
            final ScoreButton btn = gameButtons.get(i);
            int finalI = i;
            btn.addActionListener(new ActionListener() {
                public void actionPerformed(ActionEvent actionEvent) {
                    if (selected.isEmpty() || idx == -1) {
                        selected = btn.getScore();
                        idx = finalI;
                    } else if (selected.equals(btn.getScore())) {
                        btn.setVisible(false);
                        gameButtons.get(idx).setVisible(false);

                        gameButtons.remove(btn);
                        gameButtons.remove(idx);

                        idx = -1;
                        selected = "";
                    } else {
                        selected = "";
                        idx = -1;
                    }
                }
            });
        }
    }

}
