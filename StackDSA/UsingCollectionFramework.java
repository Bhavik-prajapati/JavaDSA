package StackDSA;

import org.jcp.xml.dsig.internal.dom.ApacheTransform;

import java.util.Stack;

public class UsingCollectionFramework {

    public static void pushAtBottom(int data,Stack<Integer> s){
        if(s.isEmpty()){
            s.push(data);
            return;
        }
        int top=s.pop();
        pushAtBottom(data,s);
        s.push(top);

    }

//    revrese stack

    public static void reverseStack(Stack<Integer> s){
        if(s.empty()){
            return;
        }

        int top=s.pop();
        reverseStack(s);
        pushAtBottom(top,s);
    }



        public static void printStack(Stack<Integer> s1){
        while (!s1.isEmpty()){
            System.out.println(s1.peek());
            s1.pop();
        }
    }
    public static void main(String[] args) {

        Stack<Integer> s1=new Stack<>();
        s1.push(10);
        s1.push(20);
        s1.push(30);
        s1.push(40);

//        pushAtBottom(400,s1);
        reverseStack(s1);
        printStack(s1);
//        printStack(s1);

    }
}
