import java.lang.*;
import java.util.Random;
import java.awt.event.*;
import javax.swing.*;

public class MyGui extends JFrame {
	private JLabel label;

	public MyGui() {
		super("GUI Title");

		this.setSize(800, 500);
		this.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);

		JPanel panel = new JPanel();
		panel.setLayout(null);

		label = new JLabel("Hello World");
		label.setBounds(10, 10, 100, 20);
		panel.add(label);

		JButton btn = new JButton("Click");
		btn.setBounds(10, 40, 70, 30);
		btn.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				Random rnd = new Random();
				label.setText("Clicked on the button! " + rnd.nextInt(10));
				label.setBounds(10, 10, 200, 20);
			}
		});
		panel.add(btn);

		JButton exitBtn = new JButton("Exit");
		exitBtn.setBounds(100, 40, 70, 30);
		btn.addActionListener(new ActionListener() {
			@Override
			public void actionPerformed(ActionEvent e) {
				MyGui.quit();
			}
		});
		panel.add(exitBtn);

		this.add(panel);
	}
}

