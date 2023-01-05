
%%
global a
a = arduino('COM3','Uno','libraries','RotaryEncoder','BaudRate',115200);
%%
global b
b=arduino('COM5','Uno','libraries','RotaryEncoder','BaudRate',115200);
%%

%%
global encoder_motor encoder_enc
encoder_motor = rotaryEncoder(a,"D2",'D3',400);
encoder_enc=rotaryEncoder(b,"D2",'D3',360);

%%
global alpha dalpha theta dtheta;
alpha=0;dalpha=0;theta=0;dtheta=0;
%%
global prev_count_motor now_count_motor prev_count_encoder now_count_encoder;
prev_count_motor=0;now_count_motor=0;prev_count_encoder=0;now_count_encoder=0;

%%  
motor1SpeedPin = 'D5';
motor1Direction_ccw_Pin = 'D7';
motor1Direction_cw_Pin = 'D8';
motor_1_enable='A0';


%%
  direction =0;
  enable=0
  
  writeDigitalPin(a,motor_1_enable,enable);
  resetCount(encoder_enc);
  resetCount(encoder_motor);

  %%
  %control
  while(1)
  feed=get_feedback()
  diff=refernce_values-feed;
  control_action=K_final(1:4)*diff
  
if sign(control_action)==1
    sat_(control_action,12,6);
    direction=1;
end
if sign(control_action)==-1 

  sat_(control_action,-6,-12);
  direction=0;
end
if sign(control_action)==0 
    control_action=0;
    
  direction=0;
end
  enable=1;
  action=abs(control_action);
  writeDigitalPin(a,motor_1_enable,enable);
  writeDigitalPin(a,motor1Direction_cw_Pin,~(direction));
  writeDigitalPin(a,motor1Direction_ccw_Pin,direction);
  writePWMDutyCycle(a,motor1SpeedPin,action/12);


  end
  enable=0;
  writeDigitalPin(a,motor_1_enable,enable);

