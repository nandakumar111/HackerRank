import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int[] h = new int[26];
        for(int h_i=0; h_i < 26; h_i++){
            h[h_i] = in.nextInt();
        }
        String word = in.next();

        int maxH = 0;
        int width = word.length();
        for (int i=0; i < width; i++) {
            char c = word.charAt(i);
            int index = c - 'a';
            int height = h[index];
            if (height > maxH) {
                maxH = height;
            }
        }
        int area = width * maxH;
        System.out.println(area + "");
    }
}