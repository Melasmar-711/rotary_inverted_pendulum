refernce_values=[0; 0;0;0 ];
A=linsys1.A;
B=linsys1.B

Q=[1    0   0   0     0 ; 
   0    1   0   0     0;
   0    0   1   0     0; 
   0    0   0   1     0; 
   0    0   0   0     1; ]
R=1;

[K,eigen,s]=lqr(A,B,Q,R)
K_final=K