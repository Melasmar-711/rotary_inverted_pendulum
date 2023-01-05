function out=get_feedback()
global alpha dalpha theta dtheta;
global encoder_motor encoder_enc

%global prev_count_motor now_count_motor prev_count_encoder now_count_encoder;

alpha=(readCount(encoder_enc)/4);
if alpha>0
    alpha=rem(alpha,360)*(3.14/180);
else
    alpha=rem(alpha,-360)*(3.14/180);
end
dalpha=readSpeed(encoder_enc)*0.104719755;
theta=readCount(encoder_motor)/4;
if theta>0
    theta=rem(theta,360)*(3.14/180);
 else
    theta=rem(theta,-360)*(3.14/180);
end
dtheta=readSpeed(encoder_motor)*0.104719755;
out=[ theta; dtheta;alpha; dalpha]
