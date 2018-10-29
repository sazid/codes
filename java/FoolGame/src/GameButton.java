import javax.swing.*;

public class GameButton extends JButton {
    public GameButton() {
        setDefaults();
    }

    public GameButton(String s) {
        super(s);
        setDefaults();
    }

    public GameButton(Icon icon) {
        super(icon);
        setDefaults();
    }

    public void setIcons(String iconPath, String extension) {
        setIcon(new ImageIcon(iconPath + '.' + extension));
        setPressedIcon(new ImageIcon(iconPath + "o." + extension));
    }

    private void setDefaults() {
        setFocusPainted(false);
        setContentAreaFilled(false);
        setBorderPainted(false);
    }
}
