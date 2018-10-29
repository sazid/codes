package sazid;

import javax.swing.*;
import javax.swing.border.EmptyBorder;
import java.awt.*;
import java.awt.event.ActionEvent;
import java.awt.event.ActionListener;
import java.util.Random;

public class Board extends JFrame {

    private ScoreButton quitBtn;
    private ScoreButton gameButtons[] = new ScoreButton[10];
    private JLabel scoreLabel;
    private JPanel panel;
    private int score;
    private Thread t;
    private final Random rand = new Random();

    public Board() {
        super("Click and Score!");

        setResizable(false);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
        setSize(400, 650);

        score = 0;

        initUi();
        initPanel();
        bind();

        initThread();

        setLocationRelativeTo(null);
    }

    private void initThread() {
        t = new Thread(new Runnable() {
            public void run() {
                while (true) {
                    for (int i = 0; i < 10; ++i) {
                        gameButtons[i].setSelected(false);
                    }

                    int pos = rand.nextInt(10);
                    gameButtons[pos].setSelected(true);

                    try {
                        Thread.sleep(600);
                    } catch (InterruptedException e) {
                        e.printStackTrace();
                    }
                }
            }
        }, "GameThread");

        t.start();
    }

    private void initPanel() {
        panel = new JPanel();
        panel.setBorder(new EmptyBorder(10, 10, 10, 10));
        panel.setLayout(new GridLayout(6, 2));

        panel.add(quitBtn);
        panel.add(scoreLabel);

        for (int i = 0; i < 10; ++i) {
            panel.add(gameButtons[i]);
        }

        add(panel);
    }

    private void initUi() {

        quitBtn = new ScoreButton("EXIT");
        quitBtn.setFont(new Font("Courier", Font.PLAIN, 24));

        scoreLabel = new JLabel("Score: " + score, SwingConstants.CENTER);
        scoreLabel.setFont(new Font("Courier", Font.PLAIN, 32));

        for (int i = 1; i <= 10; ++i) {
            gameButtons[i-1] = new ScoreButton(String.valueOf(i));
            gameButtons[i-1].setFont(new Font("Courier", Font.PLAIN, 24));
        }

    }

    private void addScore() {
        scoreLabel.setText("Score: " + ++score);
    }

    private void deductScore() {
        scoreLabel.setText("Score: " + --score);
    }

    private void bind() {
        quitBtn.addActionListener(new ActionListener() {
            public void actionPerformed(ActionEvent actionEvent) {
                t.stop();

                new NewGame().setVisible(true);

                dispose();
            }
        });

        for (int i = 0; i < 10; ++i) {
            final ScoreButton btn = gameButtons[i];
            btn.addActionListener(new ActionListener() {
                public void actionPerformed(ActionEvent actionEvent) {
                    if (btn.isSelected()) {
                        addScore();
                    } else {
                        deductScore();
                    }
                }
            });
        }
    }

}
