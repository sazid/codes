package sazid;

import javax.swing.*;
import java.awt.*;

public class ScoreButton extends JButton {

    private Color color;
    private final Color SELECTED_COLOR = Color.GREEN;
    private final Color UNSELECTED_COLOR = Color.YELLOW;
    private String score = "";

    public ScoreButton(String s) {
        super(s);
        setScore(s);

        color = UNSELECTED_COLOR;

        updateColor();
    }

    public ScoreButton(String s, String score) {
        super(s);
        setScore(score);

        color = UNSELECTED_COLOR;

        updateColor();
    }


    public void setScore(String score) {
        this.score = score;
    }

    public String getScore() {
        return this.score;
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
