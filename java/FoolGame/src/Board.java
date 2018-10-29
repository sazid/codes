import javax.swing.*;
import java.awt.*;
import java.awt.event.*;
import java.util.Random;

public class Board extends JFrame {

    private static final int BOARD_WIDTH = 600;
    private static final int BOARD_HEIGHT = 400;

    public static final int BTN_WIDTH = 64;
    public static final int BTN_HEIGHT = 32;

    private static Random rand = new Random();

    JPanel mainPanel;
    GameButton yesBtn, noBtn;
    JLabel background, infoLabel;
    ImageIcon backgroundImage, cursorImage, yesImage, noImage, foolImage, cleverImage;

    public Board() {
        super("Fool Game");

        setSize(BOARD_WIDTH, BOARD_HEIGHT);
        setResizable(false);
        setDefaultCloseOperation(DO_NOTHING_ON_CLOSE);
        setLocationRelativeTo(null);

        loadAssets();
        setupCursor();
        init();
        bind();

        add(mainPanel);
    }

    private void setupCursor() {
        Toolkit toolkit = Toolkit.getDefaultToolkit();
        Image image = cursorImage.getImage();
        Point hotspot = new Point(0,0);
        Cursor cursor = toolkit.createCustomCursor(image, hotspot, "cursor");
        setCursor(cursor);
    }

    private void loadAssets() {
        backgroundImage = new ImageIcon("resources/background.gif");
        cursorImage = new ImageIcon("resources/cursor.gif");
        yesImage = new ImageIcon("resources/yes.gif");
        noImage = new ImageIcon("resources/no.gif");
        foolImage = new ImageIcon("resources/fool.gif");
        cleverImage = new ImageIcon("resources/clever.gif");
    }

    private void init() {
        mainPanel = new JPanel();
        mainPanel.setLayout(null);

        infoLabel = new JLabel("ARE YOU A FOOL?");
        infoLabel.setBounds(225, 400-128, 200, 40);
        Font font = new Font("Courier", Font.BOLD, 16);
        infoLabel.setForeground(Color.WHITE);
        infoLabel.setFont(font);

        yesBtn = new GameButton(yesImage);
        yesBtn.setBounds(600/2-32, 400-84, BTN_WIDTH, BTN_HEIGHT);

        noBtn = new GameButton(noImage);
        noBtn.setBounds(0, 0, BTN_WIDTH, BTN_HEIGHT);

        background = new JLabel();
        background.setIcon(backgroundImage);
        background.setBounds(0, 0, BOARD_WIDTH, BOARD_HEIGHT);

        mainPanel.add(infoLabel);
        mainPanel.add(yesBtn);
        mainPanel.add(noBtn);
        mainPanel.add(background);
    }

    private void bind() {
        noBtn.addMouseListener(new MouseListener() {
            @Override
            public void mouseClicked(MouseEvent mouseEvent) {
                infoLabel.setText("BERY BERY CLEVER :O");
                infoLabel.setForeground(Color.BLACK);
                background.setIcon(cleverImage);
                noBtn.setBounds(-50, -50, BTN_WIDTH, BTN_HEIGHT);
                yesBtn.setBounds(-50, -50, BTN_WIDTH, BTN_HEIGHT);
            }

            @Override
            public void mousePressed(MouseEvent mouseEvent) {
            }

            @Override
            public void mouseReleased(MouseEvent mouseEvent) {
            }

            @Override
            public void mouseEntered(MouseEvent mouseEvent) {
                int x = rand.nextInt(BOARD_WIDTH - BTN_WIDTH - 20);
                int y = rand.nextInt(BOARD_HEIGHT - BTN_HEIGHT - 20);

                noBtn.setBounds(x, y, BTN_WIDTH, BTN_HEIGHT);
            }

            @Override
            public void mouseExited(MouseEvent mouseEvent) {
            }
        });

        yesBtn.addMouseListener(new MouseListener() {
            @Override
            public void mouseClicked(MouseEvent mouseEvent) {
                infoLabel.setText("");
                noBtn.setBounds(-50, -50, BTN_WIDTH, BTN_HEIGHT);
                yesBtn.setBounds(-50, -50, BTN_WIDTH, BTN_HEIGHT);

                background.setIcon(foolImage);
            }

            @Override
            public void mousePressed(MouseEvent mouseEvent) {
            }

            @Override
            public void mouseReleased(MouseEvent mouseEvent) {
            }

            @Override
            public void mouseEntered(MouseEvent mouseEvent) {
            }

            @Override
            public void mouseExited(MouseEvent mouseEvent) {
            }
        });

        addWindowListener(new java.awt.event.WindowAdapter() {
            public void windowClosing(WindowEvent winEvt) {
                new NewGame().setVisible(true);
                dispose();
            }
        });
    }

}
