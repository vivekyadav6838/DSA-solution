 int[] fq = new int[256];
        for (char c : S.toCharArray()) {
            fq[c]++;
        }
        int i = 0;
        int j = S.length() - 1;
        boolean x = true;
        HashSet<Integer> hset = new HashSet<>();
        StringBuilder sb = new StringBuilder();
        int count  = 0;
        while (i <= j) {
            if (x) {
                if (fq[S.charAt(i)] == 1) {
                    hset.add(i);
                } else{
                    x = false;
                    count++;
                }
                fq[S.charAt(i)]--;
                i++;
            } else {
                if (fq[S.charAt(j)] == 1) {
                    hset.add(j);
                } else {
                    x = true;
                    count++;
                }
                fq[S.charAt(j)]--;
                j--;
            }
        }
        for (int k = 0; k < S.length(); k++) {
            if (hset.contains(k)) sb.append(S.charAt(k));
        }
        int vk=0;

        if(count%2!=0) return sb.reverse().toString();
        return sb.toString();