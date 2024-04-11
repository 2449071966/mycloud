import javax.swing.*;
import java.awt.*;

public class happyteachersday extends JPanel {
    public static void main(String[] args) {
        JFrame frame = new JFrame();
        frame.setTitle("2022双节快乐");
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setAlwaysOnTop(true);
        frame.setBackground(Color.white);
        frame.setSize(400, 400);
        happyteachersday happy = new happyteachersday();
        frame.add(happy);
        frame.setVisible(true);
    }

    @Override
    public void paintComponent(Graphics graphics) {
        graphics.drawOval(30, 30, 300, 300);
        graphics.drawString("^ _ ^", 175, 155);
        graphics.drawString("我是一个简单好吃的的月饼！", 110, 175);
    }

}