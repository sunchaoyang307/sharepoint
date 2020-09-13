# 基于给定的模板，自动生成循环式的代码。

#背景
我发现同花顺里无法使用数组，这个限制，导致我无法很好的使用循环语句，于是我考虑设计一个简单的转换方法，实现代码自动生成来避免因为而需要绕开没有数组而采取的繁琐的代码搬运。
## auto_gen.c
这个是C语言版本，
目前模板是写死在代码里了，后面可优化为文件输入或中断输入。输出到中断。
### How to make
gcc -o auto_gen auto_gen.c
### How to run
./auto_gen <star> <end>
#### Example
##### 运行 
    ./auto_gen 3 4
#### 输出
  
     WHILE(STOP == 0 AND MEET == 0) 
      { 
               N=N+1; 
               BX=BX+B4; 
               AVG=BX/N; 

        .....

