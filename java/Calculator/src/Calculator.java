import javax.swing.*;
import javax.swing.border.EmptyBorder;
import javax.swing.border.LineBorder;
import java.awt.*;

public class Calculator extends JFrame {

    JPanel mainPanel, displayPanel, buttonPanel;
    CalcButton btn_0, btn_1, btn_2, btn_3, btn_4, btn_5, btn_6, btn_7, btn_8, btn_9,
            btn_add, btn_subtract, btn_divide, btn_multiply, btn_root, btn_equals, btn_clear, btn_calc;
    JLabel displayLabel;

    public Calculator() {
        super("Calculator");

        setSize(300, 480);
        setDefaultCloseOperation(EXIT_ON_CLOSE);

        initDisplayPanel();
        initButtonPanel();
        initMainPanel();

        add(mainPanel);
    }

    private void initDisplayPanel() {
        displayPanel = new JPanel();
        displayPanel.setLayout(new GridLayout());

        displayLabel = new JLabel("0.0123456789", SwingConstants.RIGHT);
        displayLabel.setBorder(new EmptyBorder(0, 0, 0, 10));
        displayLabel.setFont(new Font("Courier", Font.PLAIN, 32));

        displayPanel.add(displayLabel);
    }

    private void initMainPanel() {
        mainPanel = new JPanel();
        mainPanel.setLayout(new BoxLayout(mainPanel, BoxLayout.Y_AXIS));

        JSeparator separator = new JSeparator();
        separator.setBackground(Color.BLACK);

        mainPanel.add(displayPanel);
        mainPanel.add(separator);
        mainPanel.add(buttonPanel);
    }

    private void initButtonPanel() {
        // use grid layout manager to size everything into a 6x4 grid
        buttonPanel = new JPanel();
        buttonPanel.setLayout(new GridLayout(5,4));

        btn_0 = new CalcButton("0", "png");
        btn_1 = new CalcButton("1", "png");
        btn_2 = new CalcButton("2", "png");
        btn_3 = new CalcButton("3", "png");
        btn_4 = new CalcButton("4", "png");
        btn_5 = new CalcButton("5", "png");
        btn_6 = new CalcButton("6", "png");
        btn_7 = new CalcButton("7", "png");
        btn_8 = new CalcButton("8", "png");
        btn_9 = new CalcButton("9", "png");
        btn_add = new CalcButton("plus", "png");
        btn_subtract = new CalcButton("minus", "png");
        btn_multiply = new CalcButton("multiply", "png");
        btn_divide = new CalcButton("divide", "png");
        btn_equals = new CalcButton("equals", "png");
        btn_clear = new CalcButton("clear", "png");
        btn_calc = new CalcButton("calc", "png");
        btn_root = new CalcButton("root", "png");

        buttonPanel.add(btn_clear);
        buttonPanel.add(new CalcButton());
        buttonPanel.add(btn_root);
        buttonPanel.add(btn_multiply);

        buttonPanel.add(btn_7);
        buttonPanel.add(btn_8);
        buttonPanel.add(btn_9);
        buttonPanel.add(btn_divide);

        buttonPanel.add(btn_4);
        buttonPanel.add(btn_5);
        buttonPanel.add(btn_6);
        buttonPanel.add(btn_subtract);

        buttonPanel.add(btn_1);
        buttonPanel.add(btn_2);
        buttonPanel.add(btn_3);
        buttonPanel.add(btn_add);

        buttonPanel.add(btn_0);
        buttonPanel.add(new CalcButton());
        buttonPanel.add(new CalcButton());
        buttonPanel.add(btn_equals);
    }

}
