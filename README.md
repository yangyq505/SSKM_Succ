# SSKM_Succ
Description: This package implements the SSKM_Succ algorithm incorporating K-means clustering with a new semi-supervised learning algorithm for predicting of the succinylation sites.

1.Code

(1) peptide.cpp: This file divides the sequence.txt into the name+position.txt and window21.txt.
(2) AAindex.cpp: This file computes the physical and chemical scores of the peptides in the window21.txt.
(3) GM.m: This file computes the Grey amino acid composition features.
(4) combine_GM.cpp: This file combines the GM1.txt to GM10.txt and output the GM.txt.
(5) K-space.cpp: This file computes the K-space features.
(6) multiPTM1.cpp-multiPTM6.cpp: Those files compute the information of proximal PTMs features.
(7) PSAAP.cpp: This file computes the position-special amino acid propensity features.
(8) feature_selection1.cpp-feature_selection3.cpp: Those files can select the important features.
(9) combine_feature.cpp: This file can integrate all features.
(10) cluster.cpp: This file can designate the test samples into the corresponding cluster.
(11) convert.cpp: This file can convert the format of the test file.

2. The detail steps of getting the prediction results.

(1) The user stores the protein sequence to be tested in the sequence.txt, according to the following format.
>P01234
MSDHFUISHFKSADHFK
(The first line is the name of the data in the Uniprot database, the second line is the protein sequence)
(2) For the GM folder in the feature folder, in turn run AAindex.exe, GM.m and combine_GM.exe, you can get the GM.txt which has been stored in the feature_selection folder.
(3) For the K-space folder in the feature folder, run K-space.exe, you can get the k-space.txt which has been stored in the feature_selection folder.
(4) For the PSAAP folder in the feature folder, run PSAAP.exe, you can get the PSAAP.txt which has been stored in the feature_selection folder.
(5) For the multiPTM folder in the feature folder, in turn run multiPTM1.exe, multiPTM2.exe, multiPTM3.exe, multiPTM4.exe, multiPTM5.exe, and multiPTM6.exe. The final files (77.txt, 198.txt, 111.txt, 120.txt) will be stored in the feature_selection folder.
(6) For the programs in the feature_selection folder, in turn run feature_selection1.exe, feature_selection2.exe, feature_selection3.exe, and combine.exe. The final file feature.txt will be stored in the cluster folder.
(7) For the programs in the cluster folder, run cluster.exe. The final files (name+positionX.txt, labelX.txt, and test_X.txt, X=1, 2, 3, 4, 5) will be stored in the predict folder.
(8) Finally, according to the clustering results of each sample, the user runs the convert.exe to change the file format, then the user selects the corresponding training model in the predict folder to obtain the prediction results. For example, if the test1.txt is not null, user should run the following commend: 
svm-predict test1.txt train1.model outputfile1 
The prediction results will be stored in the outputfile1.

If you have any problems, please contact zhaoxw303@nenu.edu.cn













