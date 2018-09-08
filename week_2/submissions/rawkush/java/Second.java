/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package second;

import java.util.Scanner;

/**
 *
 * @author aarav
 */
public class Second {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        // TODO code application logic here
       System.out.print("Enter the number of times to runt the program");
        Scanner in = new Scanner(System.in);
      
	    int len;
	    len= in.nextInt();
	    int A[]= new int[len];
       System.out.print("Enter the number of varibles");
	    for(int i=0; i<len; i++)  
		 A[i]=in.nextInt();;
	           System.out.print("Enter the number to search");
	    int numberFind;
	    numberFind=in.nextInt();
	    
	    int flag=0;
	    for(int i=0; i<len; i++){
	        for(int j=i+1; j<len; j++){
	            for(int k=j+1; k<len; k++){
	                for(int l=k+1; l<len; l++){
	                    if(numberFind==A[i]+A[j]+A[k]+A[l])  
	                    flag=1;
	                }
	            }
	        }
	    }
	    System.out.print( flag) ;
	
	

    }
    
}
