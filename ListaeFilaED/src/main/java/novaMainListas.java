import java.util.Stack;

public class novaMainListas {
    public static void main(String[] args) {
        Stack<String> stack = new Stack<String>();
        stack.push("Primeiro");
        stack.push("Segundo");
        stack.push("Terceiro");
        
        for(int i = 0; i < 3; i++) {
            stack.pop();
        }
        
        if(stack.empty()) {
            System.out.println("vazia");
        }
    }
}
