import java.util.Scanner;
public class vowels {
public static void main(String[] args) {
Scanner scanner = new Scanner(System.in);
System.out.println("Enter a string to find vowels on it.");
String user_string = scanner.nextLine();
scanner.close();
int vowel_count = 0;
for(int i=0;i<user_string.length();i++){
if(user_string.charAt(i)=='a' ||user_string.charAt(i)=='e'
||user_string.charAt(i)=='i'
||user_string.charAt(i)=='o'
||user_string.charAt(i)=='u'
||user_string.charAt(i)=='A'
||user_string.charAt(i)=='E'
||user_string.charAt(i)=='I'
||user_string.charAt(i)=='O'
||user_string.charAt(i)=='U'){
vowel_count++;
System.out.println("Vowel found("+user_string.charAt(i)+") at index "+i);
}
}
if (vowel_count == 0){
System.out.println("Vowel not found in given string.");
}
}
}