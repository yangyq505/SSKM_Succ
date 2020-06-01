%建立符号变量a(发展系数)和b(灰作用量)
syms a b;
c = [a b]';
file = load('PCP1.txt');
[m,n] = size(file);
result = [];
for ii=1:m
    A = file(ii,:);
    %原始数列 A
    %A = [174, 179, 183, 189, 207, 234, 220.5, 256, 270, 285];
    %n = length(A);

    %对原始数列 A 做累加得到数列 B
    B = cumsum(A);

%对数列 B 做紧邻均值生成
    for i = 2:n
        C(i) = (B(i) + B(i - 1))/2; 
    end
    C(1) = [];

%构造数据矩阵 
    B = [-C;ones(1,n-1)];
    Y = A; Y(1) = []; Y = Y';

%使用最小二乘法计算参数 a(发展系数)和b(灰作用量)
    c = inv(B*B')*B*Y;
    c = c';
    a = c(1); 
    b = c(2);
    out = [a b];
    result = [result; out];
end
save('GM1.txt','result','-ascii')%文件输出位置



%1111111
syms a1 b1;
c1 = [a1 b1]';
file1 = load('PCP2.txt');
[m1,n1] = size(file1);
result1 = [];
for ii=1:m1
    A1 = file1(ii,:);
    %原始数列 A
    %A = [174, 179, 183, 189, 207, 234, 220.5, 256, 270, 285];
    %n = length(A);

    %对原始数列 A 做累加得到数列 B
    B1 = cumsum(A1);

%对数列 B 做紧邻均值生成
    for i = 2:n1
        C1(i) = (B1(i) + B1(i - 1))/2; 
    end
    C1(1) = [];

%构造数据矩阵 
    B1 = [-C1;ones(1,n1-1)];
    Y1 = A1; Y1(1) = []; Y1 = Y1';

%使用最小二乘法计算参数 a(发展系数)和b(灰作用量)
    c1 = inv(B1*B1')*B1*Y1;
    c1 = c1';
    a1 = c1(1); 
    b1 = c1(2);
    out1 = [a1 b1];
    result1 = [result1; out1];
end
save('GM2.txt','result1','-ascii')%文件输出位置


%2222
syms a2 b2;
c2 = [a2,b2]';
file2 = load('PCP3.txt');
[m2,n2] = size(file2);
result2 = [];
for ii=1:m2
    A2 = file2(ii,:);
    %原始数列 A
    %A = [174, 179, 183, 189, 207, 234, 220.5, 256, 270, 285];
    %n = length(A);

    %对原始数列 A 做累加得到数列 B
    B2 = cumsum(A2);

%对数列 B 做紧邻均值生成
    for i = 2:n2
        C2(i) = (B2(i) + B2(i - 1))/2; 
    end
    C2(1) = [];

%构造数据矩阵 
    B2 = [-C2;ones(1,n2-1)];
    Y2 = A2; Y2(1) = []; Y2 = Y2';

%使用最小二乘法计算参数 a(发展系数)和b(灰作用量)
    c2 = inv(B2*B2')*B2*Y2;
    c2 = c2';
    a2 = c2(1); 
    b2 = c2(2);
    out2 = [a2 b2];
    result2 = [result2;out2];
end
save('GM3.txt','result2','-ascii')%文件输出位置


%333333333
syms a3 b3;
c3 = [a3,b3]';
file3 = load('PCP4.txt');
[m3,n3] = size(file3);
result3 = [];
for ii=1:m3
    A3 = file3(ii,:);
    %原始数列 A
    %A = [174, 179, 183, 189, 207, 234, 220.5, 256, 270, 285];
    %n = length(A);

    %对原始数列 A 做累加得到数列 B
    B3 = cumsum(A3);

%对数列 B 做紧邻均值生成
    for i = 2:n3
        C3(i) = (B3(i) + B3(i - 1))/2; 
    end
    C3(1) = [];

%构造数据矩阵 
    B3 = [-C3;ones(1,n3-1)];
    Y3 = A3; Y3(1) = []; Y3 = Y3';

%使用最小二乘法计算参数 a(发展系数)和b(灰作用量)
    c3 = inv(B3*B3')*B3*Y3;
    c3 = c3';
    a3 = c3(1); 
    b3 = c3(2);
    out3 = [a3 b3];
    result3 = [result3; out3];
end
save('GM4.txt','result3','-ascii')%文件输出位置

%%%%4
syms a4 b4;
c4 = [a4,b4]';
file4 = load('PCP5.txt');
[m4,n4] = size(file4);
result4 = [];
for ii=1:m4
    A4 = file4(ii,:);
    %原始数列 A
    %A = [174, 179, 183, 189, 207, 234, 220.5, 256, 270, 285];
    %n = length(A);

    %对原始数列 A 做累加得到数列 B
    B4 = cumsum(A4);

%对数列 B 做紧邻均值生成
    for i = 2:n4
        C4(i) = (B4(i) + B4(i - 1))/2; 
    end
    C4(1) = [];

%构造数据矩阵 
    B4 = [-C4;ones(1,n4-1)];
    Y4 = A4; Y4(1) = []; Y4 = Y4';

%使用最小二乘法计算参数 a(发展系数)和b(灰作用量)
    c4 = inv(B4*B4')*B4*Y4;
    c4 = c4';
    a4 = c4(1); 
    b4 = c4(2);
    out4 = [a4 b4];
    result4 = [result4;out4];
end
save('GM5.txt','result4','-ascii')%文件输出位置


%%%%5
syms a5 b5;
c5 = [a5,b5]';
file5 = load('PCP6.txt');
[m5,n5] = size(file5);
result5 = [];
for ii=1:m5
    A5 = file5(ii,:);
    %原始数列 A
    %A = [174, 179, 183, 189, 207, 234, 220.5, 256, 270, 285];
    %n = length(A);

    %对原始数列 A 做累加得到数列 B
    B5 = cumsum(A5);

%对数列 B 做紧邻均值生成
    for i = 2:n5
        C5(i) = (B5(i) + B5(i - 1))/2; 
    end
    C5(1) = [];

%构造数据矩阵 
    B5 = [-C5;ones(1,n5-1)];
    Y5 = A5; Y5(1) = []; Y5 = Y5';

%使用最小二乘法计算参数 a(发展系数)和b(灰作用量)
    c5 = inv(B5*B5')*B5*Y5;
    c5 = c5';
    a5 = c5(1); 
    b5 = c5(2);
    out5 = [a5 b5];
    result5 = [result5;out5];
end
save('GM6.txt','result5','-ascii')%文件输出位置



%%%%7
syms a6 b6;
c6 = [a6,b6]';
file6 = load('PCP7.txt');
[m6,n6] = size(file6);
result6 = [];
for ii=1:m6
    A6 = file6(ii,:);
    %原始数列 A
    %A = [174, 179, 183, 189, 207, 234, 220.5, 256, 270, 285];
    %n = length(A);

    %对原始数列 A 做累加得到数列 B
    B6 = cumsum(A6);

%对数列 B 做紧邻均值生成
    for i = 2:n6
        C6(i) = (B6(i) + B6(i - 1))/2; 
    end
    C6(1) = [];

%构造数据矩阵 
    B6 = [-C6;ones(1,n6-1)];
    Y6 = A6; Y6(1) = []; Y6 = Y6';

%使用最小二乘法计算参数 a(发展系数)和b(灰作用量)
    c6 = inv(B6*B6')*B6*Y6;
    c6 = c6';
    a6 = c6(1); 
    b6 = c6(2);
    out6 = [a6 b6];
    result6 = [result6;out6];
end
save('GM7.txt','result6','-ascii')%文件输出位置


%%%%7
syms a7 b7;
c7 = [a7,b7]';
file7 = load('PCP8.txt');
[m7,n7] = size(file7);
result7 = [];
for ii=1:m7
    A7 = file7(ii,:);
    %原始数列 A
    %A = [174, 179, 183, 189, 207, 234, 220.5, 256, 270, 285];
    %n = length(A);

    %对原始数列 A 做累加得到数列 B
    B7 = cumsum(A7);

%对数列 B 做紧邻均值生成
    for i = 2:n7
        C7(i) = (B7(i) + B7(i - 1))/2; 
    end
    C7(1) = [];

%构造数据矩阵 
    B7 = [-C7;ones(1,n7-1)];
    Y7 = A7; Y7(1) = []; Y7 = Y7';

%使用最小二乘法计算参数 a(发展系数)和b(灰作用量)
    c7 = inv(B7*B7')*B7*Y7;
    c7 = c7';
    a7 = c7(1); 
    b7 = c7(2);
    out7 = [a7 b7];
    result7 = [result7; out7];
end
save('GM8.txt','result7','-ascii')%文件输出位置




%%%%8
syms a8 b8;
c8 = [a8,b8]';
file8 = load('PCP9.txt');
[m8,n8] = size(file8);
result8 = [];
for ii=1:m8
    A8 = file8(ii,:);
    %原始数列 A
    %A = [174, 179, 183, 189, 207, 234, 220.5, 256, 270, 285];
    %n = length(A);

    %对原始数列 A 做累加得到数列 B
    B8 = cumsum(A8);

%对数列 B 做紧邻均值生成
    for i = 2:n8
        C8(i) = (B8(i) + B8(i - 1))/2; 
    end
    C8(1) = [];

%构造数据矩阵 
    B8 = [-C8;ones(1,n8-1)];
    Y8 = A8; Y8(1) = []; Y8 = Y8';

%使用最小二乘法计算参数 a(发展系数)和b(灰作用量)
    c8 = inv(B8*B8')*B8*Y8;
    c8 = c8';
    a8 = c8(1); 
    b8 = c8(2);
    out8 = [a8 b8];
    result8 = [result8; out8];
end
save('GM9.txt','result8','-ascii')%文件输出位置


%%%%9
syms a9 b9;
c9 = [a9,b9]';
file9 = load('PCP10.txt');
[m9,n9] = size(file9);
result9 = [];
for ii=1:m9
    A9 = file9(ii,:);
    %原始数列 A
    %A = [174, 179, 183, 189, 207, 234, 220.5, 256, 270, 285];
    %n = length(A);

    %对原始数列 A 做累加得到数列 B
    B9 = cumsum(A9);

%对数列 B 做紧邻均值生成
    for i = 2:n9
        C9(i) = (B9(i) + B9(i - 1))/2; 
    end
    C9(1) = [];

%构造数据矩阵 
    B9 = [-C9;ones(1,n9-1)];
    Y9 = A9; Y9(1) = []; Y9 = Y9';

%使用最小二乘法计算参数 a(发展系数)和b(灰作用量)
    c9 = inv(B9*B9')*B9*Y9;
    c9 = c9';
    a9 = c9(1); 
    b9 = c9(2);
    out9 = [a9 b9];
    result9 = [result9;out9];
end


save('GM10.txt','result9','-ascii')%文件输出位置