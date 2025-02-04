/*
 * 
 * Write a function to find the longest common prefix string amongst an array of strings.
If there is no common prefix, return an empty string "".
Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"

Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
 */
import java.util.*;

public class longest{
    public static String prefix(String[] arr){
        //Arrays.sort(arr);
        String first_string = arr[0];//flower
        String last_string = arr[arr.length - 1 ];//flight
        
        int minLength = Math.min(first_string.length(), last_string.length());//6-> per character
        int i = 0;
        while(i < minLength && first_string.charAt(i) == last_string.charAt(i)){
            i++;
        }
        return first_string.substring(0,i);
    }
    public static void main(String[] args) {
        String[] arr = { "flower","flow","flight"};
        String[] arr2 = { "aaa","aa","aaa"};
        //prefix(arr);
        System.out.println(prefix(arr));
        System.out.println(prefix(arr2));
    }
}
