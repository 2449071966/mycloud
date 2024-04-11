
    import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

public class Mid_autumn extends JFrame {
    public static void main(String[] args){
        JFrame jf =new JFrame();
     //背景
        jf.setTitle("中秋节");
        jf.setSize(1024,768);
        jf.setBackground(Color.BLACK);
        jf.setLocationRelativeTo(null);
    
        MyJPanel mj =new MyJPanel();
        jf.add(mj);

        jf.addWindowListener(new WindowAdapter() {
            public void windowClosing(WindowEvent e){
                System.exit(0);
            }
        });
        jf.setVisible(true);
    }
}
class MyJPanel extends JPanel{
    public void paint(Graphics g){
     //制作星星，随机生成
        g.setColor(Color.WHITE);
        for(int i=0;i<300;i++){
            g.drawString("*", (int)(Math.random()*1024), (int)(Math.random()*768));
        }
     //月亮制作，去掉黑色圆可为圆月
        g.setColor(Color.YELLOW);
        g.fillOval(200, 100, 100, 100);
        g.setColor(Color.BLACK);
        g.fillOval(230, 94, 100, 100);
     //文字描述
        g.setColor(Color.WHITE);
        g.setFont(new Font("楷体",Font.BOLD,30));
        g.drawString("吾心自有光明月",700,90);
        g.drawString("千古团圆永无缺",700,130);
    }
}