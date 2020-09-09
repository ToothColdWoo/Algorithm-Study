import java.util.Scanner;

public class Main {
    public int[][] board = {{0,0,0,0,0},{0,0,1,0,3},{0,2,5,0,1},{4,2,4,4,2},{3,5,1,3,1}};
    public int[]    moves = {1,5,3,5,1,2,1,4};


    public void result() {
        Solution solution = new Solution();
        System.out.println(solution.solution(board, moves));
    }

    public static void main(String[] args) {
        Main m = new Main();
        m.result();
    }
}