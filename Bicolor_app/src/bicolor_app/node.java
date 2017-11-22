/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package bicolor_app;

/**
 *
 * @author sabian98
 */
class node {

    int color;
    int adj_mat[][];
    //boolean bicolor;

    node() {
        //this.color = color;
        //throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }

    public void initial_mat(int no_no) {
        int[][] adj_mat = new int[no_no][no_no];
        // adj_mat[][]=0;not needed
    }

    public void add_edge(int a, int b) {
        
        adj_mat[a][b] = 1;
         adj_mat[b][a] = 1;
    }

    public void set_color(int color) {
        this.color = color;
    }

    public int get_color() {
        return this.color;
    }

    public String bicolor() {
        return "success";
    }
}
