# rotary_inverted_pendulum
 lqr control over rotary inverted pendulum

[<img src="data:image/jpeg;base64,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" width="600" height="300"/>](https://www.youtube.com/embed/https://youtu.be/KOM0r-w6caM)
 

# Description
lqr control method used to control a Futura inverted pendulum . modeled , simulated and tested in real life

# usage
- download the zip file
- add to your MATLAB path
- run all2datafile.m 
- add motor_parametrs.mat to your workspace which were estimated using the motor parameters folder
- run mod_lin.m file to linearize the pyhsical model on simscape
- run lqr.m
- run simulink simulation
# adding your own physical model to the system
- download the zip file
- use run_motor.m found in  motor_parametrs_estimation to estimate your motor paramters
- export your pyhsical model from CAD and import it to the mod_inverted_pend.slx found in the other folder
- run mod_lin.m
- adjust Q,R matrixes and run lqr.m
- monitor the simulation

# prequesites 
if you are using the Hardware in the loop simulink model in the real life application:
- Simulink Hardware Support package for arduino
- Drivers guide 

if you are using the simulink model in the real life application:
- Arduinoio
