  function targMap = targDataMap(),

  ;%***********************
  ;% Create Parameter Map *
  ;%***********************
      
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
    ;% Init/prealloc paramMap
    ;%
    paramMap.nSections           = nTotSects;
    paramMap.sectIdxOffset       = sectIdxOffset;
      paramMap.sections(nTotSects) = dumSection; %prealloc
    paramMap.nTotData            = -1;
    
    ;%
    ;% Auto data (lanedetection_rgb_P)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% lanedetection_rgb_P.DrawShapes_lineWidth
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% lanedetection_rgb_P.FindLocalMaxima_threshold
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% lanedetection_rgb_P.DrawShapes_color
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% lanedetection_rgb_P.Threshold_Value
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 3;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(3) = section;
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
    nTotSects     = 6;
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
    ;% Auto data (lanedetection_rgb_B)
    ;%
      section.nData     = 5;
      section.data(5)  = dumData; %prealloc
      
	  ;% lanedetection_rgb_B.V4L2VideoCapture_o2
	  section.data(1).logicalSrcIdx = 8;
	  section.data(1).dtTransOffset = 0;
	
	  ;% lanedetection_rgb_B.V4L2VideoCapture_o3
	  section.data(2).logicalSrcIdx = 9;
	  section.data(2).dtTransOffset = 76800;
	
	  ;% lanedetection_rgb_B.DrawShapes_o1
	  section.data(3).logicalSrcIdx = 10;
	  section.data(3).dtTransOffset = 153600;
	
	  ;% lanedetection_rgb_B.DrawShapes_o2
	  section.data(4).logicalSrcIdx = 11;
	  section.data(4).dtTransOffset = 175720;
	
	  ;% lanedetection_rgb_B.DrawShapes_o3
	  section.data(5).logicalSrcIdx = 12;
	  section.data(5).dtTransOffset = 197840;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% lanedetection_rgb_B.HoughTransform_o2
	  section.data(1).logicalSrcIdx = 3;
	  section.data(1).dtTransOffset = 0;
	
	  ;% lanedetection_rgb_B.HoughTransform_o3
	  section.data(2).logicalSrcIdx = 4;
	  section.data(2).dtTransOffset = 180;
	
	  ;% lanedetection_rgb_B.HoughLines
	  section.data(3).logicalSrcIdx = 5;
	  section.data(3).dtTransOffset = 397;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% lanedetection_rgb_B.HoughTransform_o1
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% lanedetection_rgb_B.V4L2VideoCapture_o1
	  section.data(1).logicalSrcIdx = 7;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% lanedetection_rgb_B.Transpose
	  section.data(1).logicalSrcIdx = 14;
	  section.data(1).dtTransOffset = 0;
	
	  ;% lanedetection_rgb_B.EdgeDetection
	  section.data(2).logicalSrcIdx = 15;
	  section.data(2).dtTransOffset = 22120;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% lanedetection_rgb_B.Submatrix1
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% lanedetection_rgb_B.Submatrix
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(6) = section;
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
    nTotSects     = 4;
    sectIdxOffset = 6;
    
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
    ;% Auto data (lanedetection_rgb_DW)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% lanedetection_rgb_DW.obj
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 18;
      section.data(18)  = dumData; %prealloc
      
	  ;% lanedetection_rgb_DW.EdgeDetection_VO_DW
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% lanedetection_rgb_DW.EdgeDetection_HO_DW
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 2;
	
	  ;% lanedetection_rgb_DW.EdgeDetection_VOU_DW
	  section.data(3).logicalSrcIdx = 3;
	  section.data(3).dtTransOffset = 4;
	
	  ;% lanedetection_rgb_DW.EdgeDetection_VOD_DW
	  section.data(4).logicalSrcIdx = 4;
	  section.data(4).dtTransOffset = 6;
	
	  ;% lanedetection_rgb_DW.EdgeDetection_VOL_DW
	  section.data(5).logicalSrcIdx = 5;
	  section.data(5).dtTransOffset = 8;
	
	  ;% lanedetection_rgb_DW.EdgeDetection_VOR_DW
	  section.data(6).logicalSrcIdx = 6;
	  section.data(6).dtTransOffset = 10;
	
	  ;% lanedetection_rgb_DW.EdgeDetection_HOU_DW
	  section.data(7).logicalSrcIdx = 7;
	  section.data(7).dtTransOffset = 12;
	
	  ;% lanedetection_rgb_DW.EdgeDetection_HOD_DW
	  section.data(8).logicalSrcIdx = 8;
	  section.data(8).dtTransOffset = 14;
	
	  ;% lanedetection_rgb_DW.EdgeDetection_HOL_DW
	  section.data(9).logicalSrcIdx = 9;
	  section.data(9).dtTransOffset = 16;
	
	  ;% lanedetection_rgb_DW.EdgeDetection_HOR_DW
	  section.data(10).logicalSrcIdx = 10;
	  section.data(10).dtTransOffset = 18;
	
	  ;% lanedetection_rgb_DW.EdgeDetection_VOUL_DW
	  section.data(11).logicalSrcIdx = 11;
	  section.data(11).dtTransOffset = 20;
	
	  ;% lanedetection_rgb_DW.EdgeDetection_VOLL_DW
	  section.data(12).logicalSrcIdx = 12;
	  section.data(12).dtTransOffset = 22;
	
	  ;% lanedetection_rgb_DW.EdgeDetection_VOUR_DW
	  section.data(13).logicalSrcIdx = 13;
	  section.data(13).dtTransOffset = 24;
	
	  ;% lanedetection_rgb_DW.EdgeDetection_VOLR_DW
	  section.data(14).logicalSrcIdx = 14;
	  section.data(14).dtTransOffset = 26;
	
	  ;% lanedetection_rgb_DW.EdgeDetection_HOUL_DW
	  section.data(15).logicalSrcIdx = 15;
	  section.data(15).dtTransOffset = 28;
	
	  ;% lanedetection_rgb_DW.EdgeDetection_HOLL_DW
	  section.data(16).logicalSrcIdx = 16;
	  section.data(16).dtTransOffset = 30;
	
	  ;% lanedetection_rgb_DW.EdgeDetection_HOUR_DW
	  section.data(17).logicalSrcIdx = 17;
	  section.data(17).dtTransOffset = 32;
	
	  ;% lanedetection_rgb_DW.EdgeDetection_HOLR_DW
	  section.data(18).logicalSrcIdx = 18;
	  section.data(18).dtTransOffset = 34;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% lanedetection_rgb_DW.FindLocalMaxima_TEMP_IN_DWORKS
	  section.data(1).logicalSrcIdx = 19;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(3) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% lanedetection_rgb_DW.ColorSpaceConversion_DWORK1
	  section.data(1).logicalSrcIdx = 20;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(4) = section;
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


  targMap.checksum0 = 963921893;
  targMap.checksum1 = 406326302;
  targMap.checksum2 = 3064103111;
  targMap.checksum3 = 3997718587;

