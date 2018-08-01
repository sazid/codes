import javax.swing.*;
import javax.swing.border.EmptyBorder;
import java.awt.*;
import java.awt.event.*;
import java.util.ArrayList;

public class Calculator extends JFrame implements ActionListener {

    JPanel mainPanel, displayPanel, buttonPanel;
    CalcButton btn_0, btn_1, btn_2, btn_3, btn_4, btn_5, btn_6, btn_7, btn_8, btn_9, btn_dot,
            btn_add, btn_subtract, btn_divide, btn_multiply, btn_root, btn_equals, btn_clear;
    JLabel displayLabel, equationLabel;

    EquationParser parser;
    ArrayList<Object> equation = new ArrayList<>();

    public Calculator() {
        super("Calculator");

        setSize(300, 480);
        setDefaultCloseOperation(EXIT_ON_CLOSE);

        parser = new EquationParser();

        initDisplayPanel();
        initButtonPanel();
        initMainPanel();
        bind();

        add(mainPanel);
    }

    private void initDisplayPanel() {
        displayPanel = new JPanel();
        displayPanel.setLayout(new GridLayout(2,1));

        displayLabel = new JLabel(" ", SwingConstants.RIGHT);
        displayLabel.setBorder(new EmptyBorder(0, 0, 0, 10));
        displayLabel.setFont(new Font("Courier", Font.PLAIN, 32));

        equationLabel = new JLabel(" ", SwingConstants.RIGHT);
        equationLabel.setBorder(new EmptyBorder(0, 0, 0, 10));
        equationLabel.setFont(new Font("Courier", Font.PLAIN, 12));

        displayPanel.add(displayLabel);
        displayPanel.add(equationLabel);
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
        buttonPanel.setLayout(new GridLayout(5, 4));

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
        btn_dot = new CalcButton("dot", "png");
        btn_add = new CalcButton("plus", "png");
        btn_subtract = new CalcButton("minus", "png");
        btn_multiply = new CalcButton("multiply", "png");
        btn_divide = new CalcButton("divide", "png");
        btn_equals = new CalcButton("equals", "png");
        btn_clear = new CalcButton("clear", "png");
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
        buttonPanel.add(btn_dot);
        buttonPanel.add(btn_equals);
    }

    private void bind() {
        btn_0.addActionListener(this);
        btn_1.addActionListener(this);
        btn_2.addActionListener(this);
        btn_3.addActionListener(this);
        btn_4.addActionListener(this);
        btn_5.addActionListener(this);
        btn_6.addActionListener(this);
        btn_7.addActionListener(this);
        btn_8.addActionListener(this);
        btn_9.addActionListener(this);
        btn_dot.addActionListener(this);

        btn_clear.addActionListener(this);
        btn_add.addActionListener(this);
        btn_subtract.addActionListener(this);
        btn_multiply.addActionListener(this);
        btn_divide.addActionListener(this);
        btn_root.addActionListener(this);

        btn_equals.addActionListener(this);
    }

    @Override
    public void actionPerformed(ActionEvent e) {
        String t = displayLabel.getText().trim();
        Object src = e.getSource();

        if (src == btn_dot) {
            if (!t.isEmpty())
                displayLabel.setText(t + '.');
            else
                displayLabel.setText("0.");
        } else if (src == btn_0) {
            if (!t.isEmpty())
                displayLabel.setText(t + "0");
        } else if (src == btn_1) {
            displayLabel.setText(t + "1");
        } else if (src == btn_2) {
            displayLabel.setText(t + "2");
        } else if (src == btn_3) {
            displayLabel.setText(t + "3");
        } else if (src == btn_4) {
            displayLabel.setText(t + "4");
        } else if (src == btn_5) {
            displayLabel.setText(t + "5");
        } else if (src == btn_6) {
            displayLabel.setText(t + "6");
        } else if (src == btn_7) {
            displayLabel.setText(t + "7");
        } else if (src == btn_8) {
            displayLabel.setText(t + "8");
        } else if (src == btn_9) {
            displayLabel.setText(t + "9");
        } else if (src == btn_clear) {
            displayLabel.setText(" ");
        } else if (src == btn_root) {
            try {
                double a = Double.parseDouble(t);
                a = Math.sqrt(a);
                displayLabel.setText("" + a);
            } catch (NumberFormatException ignored) {
            }
        } else if (src == btn_subtract) {
            if (t.isEmpty()) {
                displayLabel.setText("-");
            } else {
                addToEquation(t, "-");
            }
        } else if (src == btn_add) {
            addToEquation(t, "+");
        } else if (src == btn_multiply) {
            addToEquation(t, "*");
        } else if (src == btn_divide) {
            addToEquation(t, "/");
        } else if (src == btn_equals) {
            solveEquation(t);
        }

    }

    private void addToEquation(String val, String op) {
        try {
            double d = Double.parseDouble(val);
            equation.add(d);
            equation.add(op);
            displayLabel.setText(" ");

            StringBuilder s = new StringBuilder();
            for (Object o: equation) s.append(o.toString());
            equationLabel.setText(s.toString());
        } catch (NumberFormatException ignored) {
        }
    }

    private void solveEquation(String val) {
        try {
            double d = Double.parseDouble(val);
            equation.add(d);

            double result = parser.solve(equation);
            displayLabel.setText(String.valueOf(result));

            equation.clear();
            equationLabel.setText(" ");
        } catch (NumberFormatException ignored) {
        }
    }

}
