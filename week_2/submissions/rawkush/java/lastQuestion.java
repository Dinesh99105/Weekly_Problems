/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

import java.util.Scanner;

/**
 *
 * @author aarav
 */
public class lastQuestion {

    /**
     * @param args the command line arguments
     */
    
    public static void main(String[] args) {
        // TODO code application logic here
        Scanner in = new Scanner(System.in);
        Second t=new Second();
         String s;
	 s= in.next();
         
	 System.out.print(t.reversedString(s));

         
    }
    
    private String reversedString(String s){
        
        String a[]=s.split(".");
               System.out.print(a[0]);

        String temp="";
        for(String l:a)
        {
            
            temp=l+"."+temp;
        
                }
        
        
        return temp;
    }
    
    
}
