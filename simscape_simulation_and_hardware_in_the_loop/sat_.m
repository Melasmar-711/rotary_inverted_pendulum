function satu_=sat_(inp_val,max,min)
if inp_val>max
    satu_=max;
    return
end
if inp_val<min
    satu_=min;
    return
else
    satu_=inp_val;
    return
end
