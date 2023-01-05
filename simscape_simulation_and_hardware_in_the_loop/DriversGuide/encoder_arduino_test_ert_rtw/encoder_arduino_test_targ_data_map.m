  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (encoder_arduino_test_P)
    ;%
      section.nData     = 47;
      section.data(47)  = dumData; %prealloc
      
	  ;% encoder_arduino_test_P.K_final
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% encoder_arduino_test_P.refernce_values
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 5;
	
	  ;% encoder_arduino_test_P.FilteredDerivativeDiscreteorCon
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 9;
	
	  ;% encoder_arduino_test_P.FilteredDerivativeDiscreteorC_n
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 10;
	
	  ;% encoder_arduino_test_P.FilteredDerivativeDiscreteorC_k
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 11;
	
	  ;% encoder_arduino_test_P.FilteredDerivativeDiscreteorC_e
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 12;
	
	  ;% encoder_arduino_test_P.FilteredDerivativeDiscreteor_kd
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 13;
	
	  ;% encoder_arduino_test_P.FilteredDerivativeDiscreteorC_b
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 14;
	
	  ;% encoder_arduino_test_P.FilteredDerivativeDiscreteorC_d
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 15;
	
	  ;% encoder_arduino_test_P.FilteredDerivativeDiscreteorC_c
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 16;
	
	  ;% encoder_arduino_test_P.FilteredDerivativeDiscreteorC_f
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 17;
	
	  ;% encoder_arduino_test_P.FilteredDerivativeDiscreteorC_l
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 18;
	
	  ;% encoder_arduino_test_P.Constant2_Value
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 19;
	
	  ;% encoder_arduino_test_P.Constant1_Value
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 20;
	
	  ;% encoder_arduino_test_P.Saturation3_UpperSat
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 21;
	
	  ;% encoder_arduino_test_P.Saturation3_LowerSat
	  section.data(16).logicalSrcIdx = 15;
	  section.data(16).dtTransOffset = 22;
	
	  ;% encoder_arduino_test_P.Gain2_Gain
	  section.data(17).logicalSrcIdx = 16;
	  section.data(17).dtTransOffset = 23;
	
	  ;% encoder_arduino_test_P.Saturation2_UpperSat
	  section.data(18).logicalSrcIdx = 17;
	  section.data(18).dtTransOffset = 24;
	
	  ;% encoder_arduino_test_P.Saturation2_LowerSat
	  section.data(19).logicalSrcIdx = 18;
	  section.data(19).dtTransOffset = 25;
	
	  ;% encoder_arduino_test_P.Gain1_Gain
	  section.data(20).logicalSrcIdx = 19;
	  section.data(20).dtTransOffset = 26;
	
	  ;% encoder_arduino_test_P.Constant3_Value
	  section.data(21).logicalSrcIdx = 20;
	  section.data(21).dtTransOffset = 27;
	
	  ;% encoder_arduino_test_P.Constant2_Value_f
	  section.data(22).logicalSrcIdx = 21;
	  section.data(22).dtTransOffset = 28;
	
	  ;% encoder_arduino_test_P.Constant1_Value_p
	  section.data(23).logicalSrcIdx = 22;
	  section.data(23).dtTransOffset = 29;
	
	  ;% encoder_arduino_test_P.Constant_Value
	  section.data(24).logicalSrcIdx = 23;
	  section.data(24).dtTransOffset = 30;
	
	  ;% encoder_arduino_test_P.MATLABSystem1_SampleTime
	  section.data(25).logicalSrcIdx = 24;
	  section.data(25).dtTransOffset = 31;
	
	  ;% encoder_arduino_test_P.MATLABSystem_SampleTime
	  section.data(26).logicalSrcIdx = 25;
	  section.data(26).dtTransOffset = 32;
	
	  ;% encoder_arduino_test_P.Switch_Threshold
	  section.data(27).logicalSrcIdx = 26;
	  section.data(27).dtTransOffset = 33;
	
	  ;% encoder_arduino_test_P.Gain2_Gain_n
	  section.data(28).logicalSrcIdx = 27;
	  section.data(28).dtTransOffset = 34;
	
	  ;% encoder_arduino_test_P.Constant_Value_f
	  section.data(29).logicalSrcIdx = 28;
	  section.data(29).dtTransOffset = 35;
	
	  ;% encoder_arduino_test_P.Integrator_gainval
	  section.data(30).logicalSrcIdx = 29;
	  section.data(30).dtTransOffset = 36;
	
	  ;% encoder_arduino_test_P.Integrator_UpperSat
	  section.data(31).logicalSrcIdx = 30;
	  section.data(31).dtTransOffset = 37;
	
	  ;% encoder_arduino_test_P.Integrator_LowerSat
	  section.data(32).logicalSrcIdx = 31;
	  section.data(32).dtTransOffset = 38;
	
	  ;% encoder_arduino_test_P.Saturation_UpperSat
	  section.data(33).logicalSrcIdx = 32;
	  section.data(33).dtTransOffset = 39;
	
	  ;% encoder_arduino_test_P.Saturation_LowerSat
	  section.data(34).logicalSrcIdx = 33;
	  section.data(34).dtTransOffset = 40;
	
	  ;% encoder_arduino_test_P.Switch1_Threshold
	  section.data(35).logicalSrcIdx = 34;
	  section.data(35).dtTransOffset = 41;
	
	  ;% encoder_arduino_test_P.Gain3_Gain
	  section.data(36).logicalSrcIdx = 35;
	  section.data(36).dtTransOffset = 42;
	
	  ;% encoder_arduino_test_P.Constant_Value_a
	  section.data(37).logicalSrcIdx = 36;
	  section.data(37).dtTransOffset = 43;
	
	  ;% encoder_arduino_test_P.Integrator_gainval_c
	  section.data(38).logicalSrcIdx = 37;
	  section.data(38).dtTransOffset = 44;
	
	  ;% encoder_arduino_test_P.Integrator_UpperSat_c
	  section.data(39).logicalSrcIdx = 38;
	  section.data(39).dtTransOffset = 45;
	
	  ;% encoder_arduino_test_P.Integrator_LowerSat_o
	  section.data(40).logicalSrcIdx = 39;
	  section.data(40).dtTransOffset = 46;
	
	  ;% encoder_arduino_test_P.Saturation_UpperSat_n
	  section.data(41).logicalSrcIdx = 40;
	  section.data(41).dtTransOffset = 47;
	
	  ;% encoder_arduino_test_P.Saturation_LowerSat_c
	  section.data(42).logicalSrcIdx = 41;
	  section.data(42).dtTransOffset = 48;
	
	  ;% encoder_arduino_test_P.Saturation1_UpperSat
	  section.data(43).logicalSrcIdx = 42;
	  section.data(43).dtTransOffset = 49;
	
	  ;% encoder_arduino_test_P.Saturation1_LowerSat
	  section.data(44).logicalSrcIdx = 43;
	  section.data(44).dtTransOffset = 50;
	
	  ;% encoder_arduino_test_P.Switch_Threshold_b
	  section.data(45).logicalSrcIdx = 44;
	  section.data(45).dtTransOffset = 51;
	
	  ;% encoder_arduino_test_P.Gain3_Gain_c
	  section.data(46).logicalSrcIdx = 45;
	  section.data(46).dtTransOffset = 52;
	
	  ;% encoder_arduino_test_P.Switch1_Threshold_n
	  section.data(47).logicalSrcIdx = 46;
	  section.data(47).dtTransOffset = 53;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% encoder_arduino_test_P.Gain_Gain
	  section.data(1).logicalSrcIdx = 47;
	  section.data(1).dtTransOffset = 0;
	
	  ;% encoder_arduino_test_P.Gain1_Gain_i
	  section.data(2).logicalSrcIdx = 48;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (parameter)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    paramMap.nTotData = nTotData;
    


  ;%**************************
  ;% Create Block Output Map *
  ;%**************************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 2;
    sectIdxOffset = 0;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc sigMap
    ;%
    sigMap.nSections           = nTotSects;
    sigMap.sectIdxOffset       = sectIdxOffset;
      sigMap.sections(nTotSects) = dumSection; %prealloc
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (encoder_arduino_test_B)
    ;%
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% encoder_arduino_test_B.Gain
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% encoder_arduino_test_B.Probe
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 1;
	
	  ;% encoder_arduino_test_B.Gain1
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 3;
	
	  ;% encoder_arduino_test_B.Probe_n
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 4;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% encoder_arduino_test_B.MATLABSystem
	  section.data(1).logicalSrcIdx = 4;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (signal)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    sigMap.nTotData = nTotData;
    


  ;%*******************
  ;% Create DWork Map *
  ;%*******************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 8;
    sectIdxOffset = 2;
    
    ;%
    ;% Define dummy sections & preallocate arrays
    ;%
    dumSection.nData = -1;  
    dumSection.data  = [];
    
    dumData.logicalSrcIdx = -1;
    dumData.dtTransOffset = -1;
    
    ;%
    ;% Init/prealloc dworkMap
    ;%
    dworkMap.nSections           = nTotSects;
    dworkMap.sectIdxOffset       = sectIdxOffset;
      dworkMap.sections(nTotSects) = dumSection; %prealloc
    dworkMap.nTotData            = -1;
    
    ;%
    ;% Auto data (encoder_arduino_test_DW)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% encoder_arduino_test_DW.obj
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% encoder_arduino_test_DW.obj_p
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% encoder_arduino_test_DW.obj_h
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% encoder_arduino_test_DW.gobj_1
	  section.data(1).logicalSrcIdx = 3;
	  section.data(1).dtTransOffset = 0;
	
	  ;% encoder_arduino_test_DW.gobj_2
	  section.data(2).logicalSrcIdx = 4;
	  section.data(2).dtTransOffset = 1;
	
	  ;% encoder_arduino_test_DW.gobj_3
	  section.data(3).logicalSrcIdx = 5;
	  section.data(3).dtTransOffset = 2;
	
	  ;% encoder_arduino_test_DW.gobj_4
	  section.data(4).logicalSrcIdx = 6;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% encoder_arduino_test_DW.obj_i
	  section.data(1).logicalSrcIdx = 7;
	  section.data(1).dtTransOffset = 0;
	
	  ;% encoder_arduino_test_DW.obj_ix
	  section.data(2).logicalSrcIdx = 8;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% encoder_arduino_test_DW.Integrator_DSTATE
	  section.data(1).logicalSrcIdx = 9;
	  section.data(1).dtTransOffset = 0;
	
	  ;% encoder_arduino_test_DW.Integrator_DSTATE_o
	  section.data(2).logicalSrcIdx = 10;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(5) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% encoder_arduino_test_DW.Scope2_PWORK.LoggedData
	  section.data(1).logicalSrcIdx = 11;
	  section.data(1).dtTransOffset = 0;
	
	  ;% encoder_arduino_test_DW.Scope1_PWORK.LoggedData
	  section.data(2).logicalSrcIdx = 12;
	  section.data(2).dtTransOffset = 1;
	
	  ;% encoder_arduino_test_DW.Scope_PWORK.LoggedData
	  section.data(3).logicalSrcIdx = 13;
	  section.data(3).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(6) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% encoder_arduino_test_DW.Integrator_PrevResetState
	  section.data(1).logicalSrcIdx = 14;
	  section.data(1).dtTransOffset = 0;
	
	  ;% encoder_arduino_test_DW.Integrator_PrevResetState_e
	  section.data(2).logicalSrcIdx = 15;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(7) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% encoder_arduino_test_DW.Integrator_IC_LOADING
	  section.data(1).logicalSrcIdx = 16;
	  section.data(1).dtTransOffset = 0;
	
	  ;% encoder_arduino_test_DW.Integrator_IC_LOADING_e
	  section.data(2).logicalSrcIdx = 17;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(8) = section;
      clear section
      
    
      ;%
      ;% Non-auto Data (dwork)
      ;%
    

    ;%
    ;% Add final counts to struct.
    ;%
    dworkMap.nTotData = nTotData;
    


  ;%
  ;% Add individual maps to base struct.
  ;%

  targMap.paramMap  = paramMap;    
  targMap.signalMap = sigMap;
  targMap.dworkMap  = dworkMap;
  
  ;%
  ;% Add checksums to base struct.
  ;%


  targMap.checksum0 = 2348332444;
  targMap.checksum1 = 1122250824;
  targMap.checksum2 = 2288700056;
  targMap.checksum3 = 324912368;

