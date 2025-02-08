# cpp_tebal-tennis
C++ 乒乓球分数计算

题目描述：
华华通过以下方式进行分析，首先将比赛每个球的胜负列成一张表，然后分别计算在 11 分制和 21 分制下，双方的比赛结果（截至记录末尾）。
比如现在有这么一份记录，（其中 W 表示华华获得一分，L 表示华华对手获得一分）：WWWWWWWWWWWWWWWWWWWWWWLW
在 11 分制下，此时比赛的结果是华华第一局 11 比 0 获胜，第二局 11 比 0 获胜，正在进行第三局，当前比分 1 比 1。
而在 21 分制下，此时比赛结果是华华第一局 21 比 0 获胜，正在进行第二局，比分 2 比 1。
如果一局比赛刚开始，则此时比分为 0 比 0。直到分差大于或者等于 2，才一局结束。
注意：当一局比赛结束后，下一局立刻开始。你的程序就是要对于一系列比赛信息的输入（WL 形式），输出正确的结果。

输入格式：
每个输入文件包含若干行字符串，字符串由大写的 
W 、 L 和 E 组成。其中 E 表示比赛信息结束，程序应该忽略 E 之后的所有内容。

输出格式：
输出由两部分组成，每部分有若干行，每一行对应一局比赛的比分（按比赛信息输入顺序）。其中第一部分是 11 分制下的结果，第二部分是 21 分制下的结果，两部分之间由一个空行分隔。

思路：
先将所有记录存入数组，在定义函数，函数传参是要求的分制。
遍历数组，在对应的人下加分紧接着判断，分数到达分制并且分差必须>=2，符合条件就输出。(分制判断:双方有一方到达分制数(11/21)，才会开始判断分差，最后输出结果)
循环之后就输出当前局的比分(因为循环内判断是完成一局才输出)
