import java.util.Stack;

public class novaMainListas {
    public static void main(String[] args) {
        Stack<String> stack = new Stack<String>();
        stack.push("Primeiro");
        stack.push("Segundo");
        stack.push("Terceiro");
        
        for(int i = 0; i < stack.size(); i++) {
            System.out.println(stack);
        }
        if(stack.empty()) {
            System.out.println("vazia");
        }
    }
}
