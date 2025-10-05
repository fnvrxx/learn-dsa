import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Read number of test cases
        int t;
        try {
            t = Integer.parseInt(sc.nextLine());
            if (t < 1) {
                System.out.println("Input Error");
                return;
            }
        } catch (Exception e) {
            System.out.println("Input Error");
            return;
        }

        for (int test = 1; test <= t; test++) {
            // Read k and n
            String[] param;
            try {
                param = sc.nextLine().split(" ");
                if (param.length != 2) {
                    System.out.println("Input Error");
                    // Consume the next line (digits) to move to next test case
                    if (sc.hasNextLine()) sc.nextLine();
                    continue;
                }
            } catch (Exception e) {
                System.out.println("Input Error");
                if (sc.hasNextLine()) sc.nextLine();
                continue;
            }

            int k, n;
            try {
                k = Integer.parseInt(param[0]);
                n = Integer.parseInt(param[1]);
                if (k < 1 || k > 9 || n < 1 || n > 100) {
                    throw new Exception();
                }
            } catch (Exception e) {
                System.out.println("Input Error");
                if (sc.hasNextLine()) sc.nextLine();
                continue;
            }

            // Read allowed digits
            String[] digitStr;
            try {
                digitStr = sc.nextLine().split(" ");
                if (digitStr.length != k) {
                    System.out.println("Input Error");
                    continue;
                }
            } catch (Exception e) {
                System.out.println("Input Error");
                continue;
            }

            // Validate digits
            boolean[] allowedDigits = new boolean[10];
            boolean digitError = false;
            for (int i = 0; i < k; i++) {
                try {
                    int d = Integer.parseInt(digitStr[i]);
                    if (d < 0 || d > 9) {
                        digitError = true;
                        break;
                    }
                    allowedDigits[d] = true;
                } catch (Exception e) {
                    digitError = true;
                    break;
                }
            }

            if (digitError) {
                System.out.println("Input Error");
                continue;
            }

            // Find smallest number composed of allowed digits and divisible by n
            boolean found = false;
            // We'll limit the search to numbers with up to 6 digits for practicality
            int maxDigits = 6;
            int maxNumber = (int) Math.pow(10, maxDigits) - 1;
            
            for (int i = n; i <= maxNumber; i += n) {
                if (isComposedOfAllowedDigits(String.valueOf(i), allowedDigits)) {
                    System.out.print(i + " ");
                    found = true;
                    break;
                }
            }

            if (!found) {
                System.out.print("Input Error ");
            }
        }
    }

    static boolean isComposedOfAllowedDigits(String s, boolean[] allowedDigits) {
        for (int i = 0; i < s.length(); i++) {
            int d = s.charAt(i) - '0';
            if (!allowedDigits[d]) return false;
        }
        return true;
    }
}