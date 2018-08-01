import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Calculator extends JFrame {

    JPanel panel;
    CalcButton btn_0, btn_1, btn_2, btn_3, btn_4, btn_5, btn_6, btn_7, btn_8, btn_9,
            btn_add, btn_subtract, btn_divide, btn_multiply, btn_equals, btn_clear;

    public Calculator() {
        super("Calculator");

        setSize(350, 400);
        setDefaultCloseOperation(EXIT_ON_CLOSE);

        initUI();

        add(panel);
    }

    private void initUI() {
        // use grid layout manager to size everything into a 6x4 grid
        panel = new JPanel();
        panel.setLayout(new GridLayout(6,4));

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

        panel.add(new CalcButton());
        panel.add(new CalcButton());
        panel.add(new CalcButton());
        panel.add(new CalcButton());
        panel.add(btn_clear);
        panel.add(new CalcButton());
        panel.add(new CalcButton());
        panel.add(new CalcButton());
        panel.add(btn_add);
        panel.add(btn_subtract);
        panel.add(btn_divide);
        panel.add(btn_multiply);
        panel.add(btn_6);
        panel.add(btn_7);
        panel.add(btn_8);
        panel.add(btn_9);
        panel.add(btn_2);
        panel.add(btn_3);
        panel.add(btn_4);
        panel.add(btn_5);
        panel.add(btn_0);
        panel.add(btn_1);
        panel.add(new CalcButton());
        panel.add(btn_equals);
    }

}
