/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bicolor_app;

import java.util.Scanner;

/**
 *
 * @author sabian98
 */
public class Bicolor_app {

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) {
        
        node n = new node();
        Scanner in = new Scanner(System.in);
        int num = in.nextInt();// 
        if (num != 0) {   //int no_nodes = in.nextInt();
            n.initial_mat(num);
            int no_edges = in.nextInt();
            for (int i = 0; i < no_edges; i++) {
                int a = in.nextInt();
                int b = in.nextInt();
                n.add_edge(a, b);

            }
            System.out.println(n.bicolor());

            num = in.nextInt();

        }
    }

}
