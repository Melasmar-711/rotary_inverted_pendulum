  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
    nTotData      = 0; %add to this count as we go
    nTotSects     = 1;
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
    ;% Auto data (untitled_P)
    ;%
      section.nData     = 15;
      section.data(15)  = dumData; %prealloc
      
	  ;% untitled_P.K_final
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
	  ;% untitled_P.refernce_values
	  section.data(2).logicalSrcIdx = 1;
	  section.data(2).dtTransOffset = 5;
	
	  ;% untitled_P.Constant2_Value
	  section.data(3).logicalSrcIdx = 2;
	  section.data(3).dtTransOffset = 9;
	
	  ;% untitled_P.Constant1_Value
	  section.data(4).logicalSrcIdx = 3;
	  section.data(4).dtTransOffset = 10;
	
	  ;% untitled_P.Saturation2_UpperSat
	  section.data(5).logicalSrcIdx = 4;
	  section.data(5).dtTransOffset = 11;
	
	  ;% untitled_P.Saturation2_LowerSat
	  section.data(6).logicalSrcIdx = 5;
	  section.data(6).dtTransOffset = 12;
	
	  ;% untitled_P.Gain2_Gain
	  section.data(7).logicalSrcIdx = 6;
	  section.data(7).dtTransOffset = 13;
	
	  ;% untitled_P.Saturation1_UpperSat
	  section.data(8).logicalSrcIdx = 7;
	  section.data(8).dtTransOffset = 14;
	
	  ;% untitled_P.Saturation1_LowerSat
	  section.data(9).logicalSrcIdx = 8;
	  section.data(9).dtTransOffset = 15;
	
	  ;% untitled_P.Gain1_Gain
	  section.data(10).logicalSrcIdx = 9;
	  section.data(10).dtTransOffset = 16;
	
	  ;% untitled_P.Saturation_UpperSat
	  section.data(11).logicalSrcIdx = 10;
	  section.data(11).dtTransOffset = 17;
	
	  ;% untitled_P.Saturation_LowerSat
	  section.data(12).logicalSrcIdx = 11;
	  section.data(12).dtTransOffset = 18;
	
	  ;% untitled_P.Switch_Threshold
	  section.data(13).logicalSrcIdx = 12;
	  section.data(13).dtTransOffset = 19;
	
	  ;% untitled_P.Gain3_Gain
	  section.data(14).logicalSrcIdx = 13;
	  section.data(14).dtTransOffset = 20;
	
	  ;% untitled_P.Switch1_Threshold
	  section.data(15).logicalSrcIdx = 14;
	  section.data(15).dtTransOffset = 21;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
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
    nTotSects     = 0;
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
    sigMap.nTotData            = -1;
    
    ;%
    ;% Auto data (untitled_B)
    ;%
    
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
    nTotSects     = 3;
    sectIdxOffset = 0;
    
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
    ;% Auto data (untitled_DW)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% untitled_DW.obj
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 4;
      section.data(4)  = dumData; %prealloc
      
	  ;% untitled_DW.gobj_1
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% untitled_DW.gobj_2
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 1;
	
	  ;% untitled_DW.gobj_3
	  section.data(3).logicalSrcIdx = 3;
	  section.data(3).dtTransOffset = 2;
	
	  ;% untitled_DW.gobj_4
	  section.data(4).logicalSrcIdx = 4;
	  section.data(4).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% untitled_DW.obj_n
	  section.data(1).logicalSrcIdx = 5;
	  section.data(1).dtTransOffset = 0;
	
	  ;% untitled_DW.obj_g
	  section.data(2).logicalSrcIdx = 6;
	  section.data(2).dtTransOffset = 1;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
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


  targMap.checksum0 = 739715205;
  targMap.checksum1 = 1964440623;
  targMap.checksum2 = 601306640;
  targMap.checksum3 = 3389210895;

