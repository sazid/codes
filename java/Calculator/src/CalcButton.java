import javax.swing.*;
import java.awt.*;

public class CalcButton extends JButton {
    public CalcButton() {
        setDefaults();
    }

    public CalcButton(String iconPath, String extension) {
        setDefaults();
        setIcons(iconPath, extension);
    }

    public CalcButton(String s) {
        super(s);
        setDefaults();
    }

    public CalcButton(Icon icon) {
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
        setOpaque(true);
        setBorderPainted(false);
        setCursor(Cursor.getPredefinedCursor(Cursor.HAND_CURSOR));
    }
}
