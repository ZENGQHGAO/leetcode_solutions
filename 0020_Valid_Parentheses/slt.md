## 思路1 stack 直接把当前左括号对应的右括号入栈

注意括号交错要返回False

一种映射方法是只把右括号push入栈

## 思路2 stack 把左括号入栈，遇到对应的右括号则弹出

这是最容易想到的方法
