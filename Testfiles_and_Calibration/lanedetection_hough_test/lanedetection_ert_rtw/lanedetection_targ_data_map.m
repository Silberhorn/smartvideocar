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
    ;% Auto data (lanedetection_P)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% lanedetection_P.DrawShapes_lineWidth
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% lanedetection_P.FindLocalMaxima_threshold
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      paramMap.sections(2) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% lanedetection_P.DrawShapes_color
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% lanedetection_P.Threshold_Value
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
    ;% Auto data (lanedetection_B)
    ;%
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% lanedetection_B.Submatrix1
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
	  ;% lanedetection_B.Submatrix
	  section.data(2).logicalSrcIdx = 2;
	  section.data(2).dtTransOffset = 2;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(1) = section;
      clear section
      
      section.nData     = 3;
      section.data(3)  = dumData; %prealloc
      
	  ;% lanedetection_B.HoughTransform_o1
	  section.data(1).logicalSrcIdx = 3;
	  section.data(1).dtTransOffset = 0;
	
	  ;% lanedetection_B.HoughTransform_o2
	  section.data(2).logicalSrcIdx = 4;
	  section.data(2).dtTransOffset = 120780;
	
	  ;% lanedetection_B.HoughTransform_o3
	  section.data(3).logicalSrcIdx = 5;
	  section.data(3).dtTransOffset = 120960;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(2) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% lanedetection_B.HoughLines
	  section.data(1).logicalSrcIdx = 6;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(3) = section;
      clear section
      
      section.nData     = 6;
      section.data(6)  = dumData; %prealloc
      
	  ;% lanedetection_B.V4L2VideoCapture_o1
	  section.data(1).logicalSrcIdx = 7;
	  section.data(1).dtTransOffset = 0;
	
	  ;% lanedetection_B.V4L2VideoCapture_o2
	  section.data(2).logicalSrcIdx = 8;
	  section.data(2).dtTransOffset = 76800;
	
	  ;% lanedetection_B.V4L2VideoCapture_o3
	  section.data(3).logicalSrcIdx = 9;
	  section.data(3).dtTransOffset = 115200;
	
	  ;% lanedetection_B.DrawShapes_o1
	  section.data(4).logicalSrcIdx = 10;
	  section.data(4).dtTransOffset = 153600;
	
	  ;% lanedetection_B.Resize
	  section.data(5).logicalSrcIdx = 13;
	  section.data(5).dtTransOffset = 185600;
	
	  ;% lanedetection_B.Resize1
	  section.data(6).logicalSrcIdx = 14;
	  section.data(6).dtTransOffset = 217600;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(4) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% lanedetection_B.Resize2
	  section.data(1).logicalSrcIdx = 11;
	  section.data(1).dtTransOffset = 0;
	
	  ;% lanedetection_B.Resize3
	  section.data(2).logicalSrcIdx = 12;
	  section.data(2).dtTransOffset = 16000;
	
      nTotData = nTotData + section.nData;
      sigMap.sections(5) = section;
      clear section
      
      section.nData     = 2;
      section.data(2)  = dumData; %prealloc
      
	  ;% lanedetection_B.Transpose
	  section.data(1).logicalSrcIdx = 15;
	  section.data(1).dtTransOffset = 0;
	
	  ;% lanedetection_B.EdgeDetection
	  section.data(2).logicalSrcIdx = 16;
	  section.data(2).dtTransOffset = 32000;
	
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
    nTotSects     = 3;
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
    ;% Auto data (lanedetection_DW)
    ;%
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% lanedetection_DW.obj
	  section.data(1).logicalSrcIdx = 0;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(1) = section;
      clear section
      
      section.nData     = 1;
      section.data(1)  = dumData; %prealloc
      
	  ;% lanedetection_DW.FindLocalMaxima_TEMP_IN_DWORKS
	  section.data(1).logicalSrcIdx = 1;
	  section.data(1).dtTransOffset = 0;
	
      nTotData = nTotData + section.nData;
      dworkMap.sections(2) = section;
      clear section
      
      section.nData     = 18;
      section.data(18)  = dumData; %prealloc
      
	  ;% lanedetection_DW.EdgeDetection_VO_DW
	  section.data(1).logicalSrcIdx = 2;
	  section.data(1).dtTransOffset = 0;
	
	  ;% lanedetection_DW.EdgeDetection_HO_DW
	  section.data(2).logicalSrcIdx = 3;
	  section.data(2).dtTransOffset = 2;
	
	  ;% lanedetection_DW.EdgeDetection_VOU_DW
	  section.data(3).logicalSrcIdx = 4;
	  section.data(3).dtTransOffset = 4;
	
	  ;% lanedetection_DW.EdgeDetection_VOD_DW
	  section.data(4).logicalSrcIdx = 5;
	  section.data(4).dtTransOffset = 6;
	
	  ;% lanedetection_DW.EdgeDetection_VOL_DW
	  section.data(5).logicalSrcIdx = 6;
	  section.data(5).dtTransOffset = 8;
	
	  ;% lanedetection_DW.EdgeDetection_VOR_DW
	  section.data(6).logicalSrcIdx = 7;
	  section.data(6).dtTransOffset = 10;
	
	  ;% lanedetection_DW.EdgeDetection_HOU_DW
	  section.data(7).logicalSrcIdx = 8;
	  section.data(7).dtTransOffset = 12;
	
	  ;% lanedetection_DW.EdgeDetection_HOD_DW
	  section.data(8).logicalSrcIdx = 9;
	  section.data(8).dtTransOffset = 14;
	
	  ;% lanedetection_DW.EdgeDetection_HOL_DW
	  section.data(9).logicalSrcIdx = 10;
	  section.data(9).dtTransOffset = 16;
	
	  ;% lanedetection_DW.EdgeDetection_HOR_DW
	  section.data(10).logicalSrcIdx = 11;
	  section.data(10).dtTransOffset = 18;
	
	  ;% lanedetection_DW.EdgeDetection_VOUL_DW
	  section.data(11).logicalSrcIdx = 12;
	  section.data(11).dtTransOffset = 20;
	
	  ;% lanedetection_DW.EdgeDetection_VOLL_DW
	  section.data(12).logicalSrcIdx = 13;
	  section.data(12).dtTransOffset = 22;
	
	  ;% lanedetection_DW.EdgeDetection_VOUR_DW
	  section.data(13).logicalSrcIdx = 14;
	  section.data(13).dtTransOffset = 24;
	
	  ;% lanedetection_DW.EdgeDetection_VOLR_DW
	  section.data(14).logicalSrcIdx = 15;
	  section.data(14).dtTransOffset = 26;
	
	  ;% lanedetection_DW.EdgeDetection_HOUL_DW
	  section.data(15).logicalSrcIdx = 16;
	  section.data(15).dtTransOffset = 28;
	
	  ;% lanedetection_DW.EdgeDetection_HOLL_DW
	  section.data(16).logicalSrcIdx = 17;
	  section.data(16).dtTransOffset = 30;
	
	  ;% lanedetection_DW.EdgeDetection_HOUR_DW
	  section.data(17).logicalSrcIdx = 18;
	  section.data(17).dtTransOffset = 32;
	
	  ;% lanedetection_DW.EdgeDetection_HOLR_DW
	  section.data(18).logicalSrcIdx = 19;
	  section.data(18).dtTransOffset = 34;
	
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


  targMap.checksum0 = 2595789524;
  targMap.checksum1 = 2759855367;
  targMap.checksum2 = 2299279627;
  targMap.checksum3 = 1982392442;
