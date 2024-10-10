import java.awt.*;
import java.awt.event.*;
public class slip7A extends Frame{
    public void paint(Graphics g)
    {
        Font f = new Font("Georgia",Font.PLAIN,20);
        g.setFont(f);
        g.drawString("Dr D Y patil college",50,70);
        setBackground(Color.RED);
    }
    public static void main(String[] args)
    {
        slip7A s = new slip7A();
        s.setVisible(true);
        s.setSize(200,300);
    }
}
