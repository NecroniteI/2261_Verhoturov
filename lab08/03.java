public class 03 {
    public static void main(String[] args) {

        int[][] a = {
                {5, 3, 8},
                {2, 7, 0},
                {4, 0, 9}};

        //boolean found = false;

        found:
        for (int i = 0; i < 3; i++) {
            for (int j = 0; j < 3; j++) {
                if (a[i][j] == 0) {
                    //found = true;
                    System.out.printf("Первый ноль на позиции a[%d][%d]", i + 1, j + 1);
                    break found;
                }
                //if (found) {
                //    break;
            }
        }
    }
}
