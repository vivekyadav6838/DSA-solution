import java.util.*;


public class Main {
    //@author Ritika Garg
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n = sc.nextInt();
        int[] a = new int[n];
        for (int i = 0; i < n; i++)
            a[i] = sc.nextInt();

        long[] prefSum = new long[n];
        prefSum[0] = a[0];
        for (int i = 1; i < n; i++)
            prefSum[i] = prefSum[i - 1] + a[i];

        int t = 0, j = 0, k = 0;
        long antar = Integer.MAX_VALUE;
        for (int i = 0; i < n - 1; i++) {
            long l = prefSum[i];
            long r = prefSum[n - 1] - l;
            if (Math.abs(r - l) < antar) {
                j = i;
                antar = Math.abs(r - l);
            }
        }

        antar = Integer.MAX_VALUE;
        for (int i = 0; i < j; i++) {
            long l = prefSum[i];
            long r = prefSum[j] - l;
            if (Math.abs(r - l) < antar) {
                t = i;
                antar = Math.abs(r - l);
            }
        }

        antar = Integer.MAX_VALUE;
        for (int i = j + 1; i < n - 1; i++) {
            long l = prefSum[i] - prefSum[j];
            long r = prefSum[n - 1] - prefSum[j] - l;
            if (Math.abs(r - l) < antar) {
                k = i;
                antar = Math.abs(r - l);
            }
        }

        int[] l = {0, t+1, j+1, k+1, n };
        ArrayList<Long> al = new ArrayList<>();
        for (int i = 1; i < l.length; i++) {
            long sum = 0;
            for (int i1 = l[i - 1]; i1 < l[i]; i1++) {
                sum += a[i1];
            }
            al.add(sum);
        }
        Collections.sort(al);
        System.out.println(al.get(3) - al.get(0));

    }


}