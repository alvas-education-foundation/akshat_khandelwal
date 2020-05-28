//Write a function that accepts a string consisting entiring of brackets ({}) and returns whether it is balanced. Every "opening" bracket must be followed by a closing bracket of the same type. There can also be nested brackets, which adhere to the same rule.
f('()[]{}(([])){[()][]}') // true
f('())[]{}') // false
//



import java.util.Stack;
 import java.util.Scanner;
public class Main {
 public static void main(String[] args) {
     Scanner s=new Scanner(System.in);
     System.out.println("Enter the string");
     String ct=s.next();
 String checkBalancedExpr1=checkBalancedParentesis(ct);
 System.out.println(ct+" is "+checkBalancedExpr1);
 
 }
 public static String checkBalancedParentesis(String expr)
 {
 if (expr.isEmpty())
 return "True";
 
 Stack<Character> stack = new Stack<Character>();
 for (int i = 0; i < expr.length(); i++)
 {
 char current = expr.charAt(i);
 if (current == '{' || current == '(' || current == '[')
 {
 stack.push(current);
 }
 if (current == '}' || current == ')' || current == ']')
 {
 if (stack.isEmpty())
 return "False";
 char last = stack.peek();
 if (current == '}' && last == '{' || current == ')' && last == '(' || current == ']' && last == '[')
 stack.pop();
 else 
 return "Not Balanced";
 }
 }
 return stack.isEmpty()?"Balanced":"Not Balanced";
 }
 
}