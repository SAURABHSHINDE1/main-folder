import java.io.*;
import java.io.DataInputStream;

class NumoutRange extends Exception{}
public class slip27A {
    static int n;
    public static void main(String[] args) {
        DataInputStream dr = new DataInputStream(System.in);
        try{
            System.out.print("Enter number:");
            n = Integer.parseInt(dr.readLine());
            if( n >100)
            {
                throw new NumoutRange();
            }
            else{
                for(int i = 1; i < n; i++)
                {
                    if(n%i==0)
                    {
                        System.out.println(i +" ");
                    }
                }
            }
        }
        catch(NumoutRange nz){
            System.out.println("num is out of range...!");
        }
        catch(Exception e)
        {
            System.out.println(""+e.getMessage());
        }
    }
}
