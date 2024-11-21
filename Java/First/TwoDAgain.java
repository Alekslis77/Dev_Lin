class TwoDAgain {
    public static void main(String[] args) {
        int m = 4;
        int[][] twoD = new int[m][];

        for (int z = 0; z < twoD.length; z++)
            twoD[z] = new int[z + 1];

        int i, j, k = 0;

        for (i = 0; i < twoD.length; i++)
            for (j = 0; j < twoD[i].length; j++) {
                twoD[i][j] = k;
                k++;
            }
        for (i = 0; i < twoD.length; i++) {
            for (j = 0; j < twoD[i].length; j++)
                System.out.print(twoD[i][j] + " ");
            System.out.println();
        }
    }
}