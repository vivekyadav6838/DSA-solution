import java.io.*;
import java.util.*;


public class TestClass {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        PrintWriter wr = new PrintWriter(System.out);
        int T = Integer.parseInt(br.readLine().trim());
        for(int t_i = 0; t_i < T; t_i++)
        {
            int N = Integer.parseInt(br.readLine().trim());
            int[][] edges = new int[N-1][2];
            for(int i_edges = 0; i_edges < N-1; i_edges++)
            {
            	String[] arr_edges = br.readLine().split(" ");
            	for(int j_edges = 0; j_edges < arr_edges.length; j_edges++)
            	{
            		edges[i_edges][j_edges] = Integer.parseInt(arr_edges[j_edges]);
            	}
            }

            int out_ = solve(N, edges);
            System.out.println(out_);
            
         }

         wr.close();
         br.close();
    }
    static int solve(int N, int[][] edges){
         int solve(int N, int[][] edges) {
        adj = new ArrayList<>();
        for (int i = 0; i < N; i++) {
            adj.add(new ArrayList<>());
        }
        for (int[] edge : edges) {
            int u = edge[0] - 1, v = edge[1] - 1;
            adj.get(u).add(v);
            adj.get(v).add(u);
        }
        int min = Integer.MAX_VALUE;
        for (int i = 0; i < N - 1; i++) {
            for (int j = i + 1; j < N - 1; j++) {
                ArrayList<Integer> al = new ArrayList<>();
                vis = new boolean[N];
                int u = edges[i][0] - 1, v = edges[i][1] - 1;
                int u1 = edges[j][0] - 1, v1 = edges[j][1] - 1;
                adj.get(u).remove(Integer.valueOf(v));
                adj.get(v).remove(Integer.valueOf(u));
                adj.get(u1).remove(Integer.valueOf(v1));
                adj.get(v1).remove(Integer.valueOf(u1));
                if (!vis[u]) {
                    al.add(dfs(u));
                }
                if (!vis[v]) {
                    al.add(dfs(v));
                }
                if (!vis[u1]) {
                    al.add(dfs(u1));
                }
                if (!vis[v1]) {
                    al.add(dfs(v1));
                }
                Collections.sort(al);
                min = Math.min(min, al.get(al.size() - 1) - al.get(0));
                adj.get(u).add(v);
                adj.get(v).add(u);
                adj.get(u1).add(v1);
                adj.get(v1).add(u1);

            }
        }
       
        int result = 0;

        return result;
    
    }
}