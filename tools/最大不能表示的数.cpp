1. 对于两个数A，B，如果A，B互质，那么Ax+By (x>=0 && y>=0) 最大的不能表示的数为AB-A-B，且不能表示数的个数为：(A-1)(B-1)/2

2. 对于3个数：
定理一：
设a,b,c为正整数，(a,b,c)=1，x,y,z为非负整数，ax+by+cz所不能表出的最大整数为M，那么当 c > ab/(a,b)^2 - a/(a,b) - b/(a,b) 时，M = ab/(a,b) + c(a,b) - a - b - c;

定理二：
设a,b,c为正整数，(a,b,c)=1，x,y,z为非负整数，ax+by+cz所不能表出的最大整数为M，N = ab/(a,b) + c(a,b) - a - b - c，则：
(1) M <= N
(2) M == N 的充要条件是a1*u + b1*v可以表示出c，其中(a,b) = d，a = a1*d，b = b1*d，u,v为非负整数。
实际上定理二包含定理一。

猜想，对于a1,a2,a3,...,an的最大不能表示的数的上界<=max(ai*aj), 其中1 <= i < j < n
