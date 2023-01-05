%%
a = arduino('COM3','Uno','libraries','RotaryEncoder','BaudRate',115200);
%%
% b=arduino('COM7','Uno','libraries','RotaryEncoder');
%%

%%
encoder_motor = rotaryEncoder(a,"D2",'D3',400);
%%encoder_enc=rotaryEncoder(b,"D2",'D3',1440);

%%  
motor1SpeedPin = 'D5';
motor1Direction_cw_Pin = 'D7';
motor1Direction_ccw_Pin = 'D8';
motor_1_enable='A0';

%%
  direction =1;
  enable=0;
  initialPWMVoltage =1;
  duty=1;
  writeDigitalPin(a,motor_1_enable,enable);
  writeDigitalPin(a,motor1Direction_cw_Pin,direction);
  writeDigitalPin(a,motor1Direction_ccw_Pin,~(direction));
  %writePWMVoltage(a,motor1SpeedPin,initialPWMVoltage);
  writePWMDutyCycle(a,motor1SpeedPin,duty)
  pause(1);

 %%
executionTime = 20; 
period = 0.1;                             
rpm=zeros(1,2000);
flag=zeros(1,2000);
i=1;

%%
tic;
while toc < executionTime
    rpm(i)=readSpeed(encoder_motor);
    readSpeed(encoder_motor)
%  new_count=readCount(encoder_a);
%  fprintf('new: %.2f\n',new_count);
%  rpm(i)=(60*(new_count-prev_count)/2880)/(period);
%  prev_count=new_count;
%  fprintf('old: %.2f\n',prev_count);
 if toc<0.35*executionTime
     flag(i)=1;
     enable=1;
     writeDigitalPin(a,motor_1_enable,enable);
 end      
 if toc>0.35*executionTime && toc<0.6*executionTime
     flag(i)=2;
     enable=0;
     writeDigitalPin(a,motor_1_enable,enable);
 end
 if toc>0.7*executionTime && toc<executionTime
     flag(i)=3;
     enable=1;
     writeDigitalPin(a,motor_1_enable,enable);
 end
%rpm
   
 %count = readCount(encoder_a);
 %fprintf('Current motor speed is: %.2f\n',rpm);
 i=i+1;
 %pause(period);
end
resetCount(encoder_motor);
enable=0;
writeDigitalPin(a,motor_1_enable,enable);
%%
time=linspace(0,20,169);
%%
plot(time,rpm(1:169))
%%
t_input=linspace(0,20,169);
v_input=linspace(0,20,169);
%%
v_input(1:57)=12;
v_input(57:119)=0;
v_input(119:169)=12;
%%
plot(t_input,v_input)
%%
v_input=transpose(v_input);
time=transpose(time);
rpm_exp=transpose(rpm(1:169));
t_input=transpose(t_input);