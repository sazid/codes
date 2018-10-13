package sazid;

import javax.swing.*;
import java.awt.*;

public class ScoreButton extends JButton {

    private Color color;
    private final Color SELECTED_COLOR = Color.GREEN;
    private final Color UNSELECTED_COLOR = Color.WHITE;

    public ScoreButton(String s) {
        super(s);

        color = UNSELECTED_COLOR;

        updateColor();
    }

    private void updateColor() {
        setBackground(color);
    }

    public void setSelected(boolean selected) {
        if (selected) {
            color = SELECTED_COLOR;
        } else {
            color = UNSELECTED_COLOR;
        }
        updateColor();
    }

    public boolean isSelected() {
        return color == SELECTED_COLOR;
    }

}
