import javax.swing.*;
class ChildLabour{
    public static void main(String[] args){
        String st;
        st =JOptionPane.showInputDialog("Enter child Age");
        int age = Integer.parseInt(st);

        if(age>17)
            JOptionPane.showMessageDialog(null,"Your age is: "+ age +"You are allowed");
        else
            JOptionPane.showMessageDialog(null,"Your age is: "+ age +"You are not allowed");

    }
}
