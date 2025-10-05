import java.util.Scanner;
public class climbing{
    public static int BinarySearch(int[] scores, int levelScore) {
        int low = 0;
        int high = scores.length - 1;

        while (low <= high) {
            int mid = (low + high) / 2;
            if (scores[mid] == levelScore) {
                return mid; // Found the score
            } else if (scores[mid] < levelScore) {
                high = mid - 1; // Search in the left half
            } else {
                low = mid + 1; // Search in the right half
            }
        }
        return low; // Return the position where the score would fit
    }
    public static void main(String[] args) {
        int[] scores = {100, 90, 90, 80, 75, 60};
        int levelScore = 85; // Example score to search for
        System.out.println(BinarySearch(scores, levelScore));

        // Scanner sc = new Scanner(System.in);
        // System.out.println("Enter the number of scores in the leaderboard:");
        // int input = sc.nextInt();
        // int[] scores = new int[input];
        // int[] rank = new int[input];

        // // inisialiasi untuk rank 
        // for(int i = 0, inisialRank = 1; i < input; i++){
        //     int s = sc.nextInt();
        //     scores[i] = s;
        //     if (i > 0 && scores[i-1] != s){
        //         inisialRank++;
        //     rank[i] = inisialRank;       
        //     }
        //     System.out.println("Score: " + s + ", Rank: " + inisialRank);
        // }

        // // inisialisasi untuk alice mulai bergerak dari bawah
        // int aliceRank = rank[rank.length - 1];
        // int leaderboardIndex = input - 1;;
        // int m = sc.nextInt();// number of scores alice has achieved
        
        // int prevScore = -1;

        // for (int aliceScores = 0; aliceScores < m; aliceScores++){
            
        //     int levelScore = sc.nextInt(); //contains the scoore of Alice
            
        //     for(int i = leaderboardIndex; i>= -1 ; i--){

        //         if(i < 0 || scores[i] > levelScore){
        //             System.out.println(aliceRank);
        //             break;
        //         }
        //         else if(scores[i] < levelScore){
        //             if (scores[i] != prevScore){
        //                 aliceRank--;
        //             }
        //             leaderboardIndex--;
        //         }
        //         else{
        //             leaderboardIndex--;
        //             aliceRank = rank[i];
        //         }
        //         prevScore = scores[i];
        //     }
        // }

        // sc.close();
    }
}