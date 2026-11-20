class Solution:
    def evalRPN(self, tokens: List[str]) -> int:
        stack = []
        for i in range(len(tokens)):
            if tokens[i] not in {"+", "-", "/", "*"}:
                stack.append(int(tokens[i]))
            else:
                b = stack.pop()
                a = stack.pop()
                match tokens[i]:
                    case "+":
                        stack.append(a + b)
                    case "-":
                        stack.append(a - b)
                    case "*":
                        stack.append(a * b)
                    case "/":   
                        stack.append(int(a / b))
        return stack[0]