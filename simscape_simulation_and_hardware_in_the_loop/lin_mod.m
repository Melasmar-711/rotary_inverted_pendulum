%% Linearized System Matrices
% K-Matrix Initialization
K=[0 0 0 0];
K_final=[0 0 0 0];
refernce_values=[0; 0 ;0; 0];

mdl='mod_inverted_pend'
linsystem=[mdl '/all_system']%plant
io(1) = linio('mod_inverted_pend/Voltage',1,'input');
io(2) = linio('mod_inverted_pend/output_mux',1,'openoutput');
linsys1 = linearize(mdl,io)
