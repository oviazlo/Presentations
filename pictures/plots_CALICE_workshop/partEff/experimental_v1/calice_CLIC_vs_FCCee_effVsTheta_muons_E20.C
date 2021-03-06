void calice_CLIC_vs_FCCee_effVsTheta_muons_E20()
{
//=========Macro generated from canvas: c1/A Simple Graph Example
//=========  (Wed Mar  7 11:36:20 2018) by ROOT version6.08/00
   TCanvas *c1 = new TCanvas("c1", "A Simple Graph Example",110,116,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-1.453333,-0.2675676,1.213333,1.218919);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetTickx(1);
   c1->SetTicky(1);
   c1->SetPhi(150);
   c1->SetLeftMargin(0.17);
   c1->SetRightMargin(0.08);
   c1->SetTopMargin(0.08);
   c1->SetBottomMargin(0.18);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameLineWidth(2);
   c1->SetFrameBorderMode(0);
   
   TH1D *efficiencyVsCosTheta__5 = new TH1D("efficiencyVsCosTheta__5","efficiency vs cos(#theta)",90,-1,1);
   efficiencyVsCosTheta__5->SetBinContent(1,0.3759947);
   efficiencyVsCosTheta__5->SetBinContent(2,0.9955877);
   efficiencyVsCosTheta__5->SetBinContent(3,0.9982101);
   efficiencyVsCosTheta__5->SetBinContent(4,0.9981752);
   efficiencyVsCosTheta__5->SetBinContent(5,0.9991259);
   efficiencyVsCosTheta__5->SetBinContent(6,0.9972612);
   efficiencyVsCosTheta__5->SetBinContent(7,0.9955547);
   efficiencyVsCosTheta__5->SetBinContent(8,0.9982753);
   efficiencyVsCosTheta__5->SetBinContent(9,1);
   efficiencyVsCosTheta__5->SetBinContent(10,0.9981583);
   efficiencyVsCosTheta__5->SetBinContent(11,0.9965267);
   efficiencyVsCosTheta__5->SetBinContent(12,0.9965046);
   efficiencyVsCosTheta__5->SetBinContent(13,0.9982759);
   efficiencyVsCosTheta__5->SetBinContent(14,0.9945747);
   efficiencyVsCosTheta__5->SetBinContent(15,0.9972561);
   efficiencyVsCosTheta__5->SetBinContent(16,0.9949273);
   efficiencyVsCosTheta__5->SetBinContent(17,0.9965948);
   efficiencyVsCosTheta__5->SetBinContent(18,0.9935251);
   efficiencyVsCosTheta__5->SetBinContent(19,0.9973728);
   efficiencyVsCosTheta__5->SetBinContent(20,0.9991409);
   efficiencyVsCosTheta__5->SetBinContent(21,0.9965675);
   efficiencyVsCosTheta__5->SetBinContent(22,0.9972222);
   efficiencyVsCosTheta__5->SetBinContent(23,0.9952953);
   efficiencyVsCosTheta__5->SetBinContent(24,0.9982639);
   efficiencyVsCosTheta__5->SetBinContent(25,0.9973581);
   efficiencyVsCosTheta__5->SetBinContent(26,0.9972643);
   efficiencyVsCosTheta__5->SetBinContent(27,0.9990775);
   efficiencyVsCosTheta__5->SetBinContent(28,0.9963937);
   efficiencyVsCosTheta__5->SetBinContent(29,0.9974696);
   efficiencyVsCosTheta__5->SetBinContent(30,1);
   efficiencyVsCosTheta__5->SetBinContent(31,0.9971068);
   efficiencyVsCosTheta__5->SetBinContent(32,0.9983871);
   efficiencyVsCosTheta__5->SetBinContent(33,0.9951905);
   efficiencyVsCosTheta__5->SetBinContent(34,0.9990602);
   efficiencyVsCosTheta__5->SetBinContent(35,0.9971615);
   efficiencyVsCosTheta__5->SetBinContent(36,0.9955166);
   efficiencyVsCosTheta__5->SetBinContent(37,1);
   efficiencyVsCosTheta__5->SetBinContent(38,0.999004);
   efficiencyVsCosTheta__5->SetBinContent(39,1);
   efficiencyVsCosTheta__5->SetBinContent(40,0.9990876);
   efficiencyVsCosTheta__5->SetBinContent(41,1);
   efficiencyVsCosTheta__5->SetBinContent(42,0.999053);
   efficiencyVsCosTheta__5->SetBinContent(43,0.9963744);
   efficiencyVsCosTheta__5->SetBinContent(44,1);
   efficiencyVsCosTheta__5->SetBinContent(45,0.9588311);
   efficiencyVsCosTheta__5->SetBinContent(46,0.9064111);
   efficiencyVsCosTheta__5->SetBinContent(47,0.9957586);
   efficiencyVsCosTheta__5->SetBinContent(48,0.9973058);
   efficiencyVsCosTheta__5->SetBinContent(49,0.9974435);
   efficiencyVsCosTheta__5->SetBinContent(50,0.9982332);
   efficiencyVsCosTheta__5->SetBinContent(51,0.9981436);
   efficiencyVsCosTheta__5->SetBinContent(52,0.996478);
   efficiencyVsCosTheta__5->SetBinContent(53,1);
   efficiencyVsCosTheta__5->SetBinContent(54,0.9990842);
   efficiencyVsCosTheta__5->SetBinContent(55,0.9973645);
   efficiencyVsCosTheta__5->SetBinContent(56,0.9983321);
   efficiencyVsCosTheta__5->SetBinContent(57,0.9982911);
   efficiencyVsCosTheta__5->SetBinContent(58,0.996554);
   efficiencyVsCosTheta__5->SetBinContent(59,0.9982456);
   efficiencyVsCosTheta__5->SetBinContent(60,1);
   efficiencyVsCosTheta__5->SetBinContent(61,0.9972918);
   efficiencyVsCosTheta__5->SetBinContent(62,0.9956138);
   efficiencyVsCosTheta__5->SetBinContent(63,0.9981904);
   efficiencyVsCosTheta__5->SetBinContent(64,1);
   efficiencyVsCosTheta__5->SetBinContent(65,0.9982343);
   efficiencyVsCosTheta__5->SetBinContent(66,0.9963898);
   efficiencyVsCosTheta__5->SetBinContent(67,0.9962376);
   efficiencyVsCosTheta__5->SetBinContent(68,0.9982323);
   efficiencyVsCosTheta__5->SetBinContent(69,0.9955089);
   efficiencyVsCosTheta__5->SetBinContent(70,0.9945881);
   efficiencyVsCosTheta__5->SetBinContent(71,0.9962809);
   efficiencyVsCosTheta__5->SetBinContent(72,0.9962829);
   efficiencyVsCosTheta__5->SetBinContent(73,0.9982935);
   efficiencyVsCosTheta__5->SetBinContent(74,0.9982132);
   efficiencyVsCosTheta__5->SetBinContent(75,0.9917538);
   efficiencyVsCosTheta__5->SetBinContent(76,0.9935258);
   efficiencyVsCosTheta__5->SetBinContent(77,0.9982706);
   efficiencyVsCosTheta__5->SetBinContent(78,0.9971126);
   efficiencyVsCosTheta__5->SetBinContent(79,0.9946269);
   efficiencyVsCosTheta__5->SetBinContent(80,0.9990234);
   efficiencyVsCosTheta__5->SetBinContent(81,0.9980898);
   efficiencyVsCosTheta__5->SetBinContent(82,0.9973896);
   efficiencyVsCosTheta__5->SetBinContent(83,0.9990421);
   efficiencyVsCosTheta__5->SetBinContent(84,0.9991166);
   efficiencyVsCosTheta__5->SetBinContent(85,0.9972487);
   efficiencyVsCosTheta__5->SetBinContent(86,0.9982956);
   efficiencyVsCosTheta__5->SetBinContent(87,0.9991409);
   efficiencyVsCosTheta__5->SetBinContent(88,0.9973675);
   efficiencyVsCosTheta__5->SetBinContent(89,0.9964379);
   efficiencyVsCosTheta__5->SetBinContent(90,0.36875);
   efficiencyVsCosTheta__5->SetBinError(1,0.0251144);
   efficiencyVsCosTheta__5->SetBinError(2,0.04221195);
   efficiencyVsCosTheta__5->SetBinError(3,0.04228326);
   efficiencyVsCosTheta__5->SetBinError(4,0.0430097);
   efficiencyVsCosTheta__5->SetBinError(5,0.04118874);
   efficiencyVsCosTheta__5->SetBinError(6,0.04242977);
   efficiencyVsCosTheta__5->SetBinError(7,0.04244236);
   efficiencyVsCosTheta__5->SetBinError(8,0.04217471);
   efficiencyVsCosTheta__5->SetBinError(9,0.04236809);
   efficiencyVsCosTheta__5->SetBinError(10,0.04284816);
   efficiencyVsCosTheta__5->SetBinError(11,0.04162082);
   efficiencyVsCosTheta__5->SetBinError(12,0.04238422);
   efficiencyVsCosTheta__5->SetBinError(13,0.04175165);
   efficiencyVsCosTheta__5->SetBinError(14,0.04229694);
   efficiencyVsCosTheta__5->SetBinError(15,0.04322301);
   efficiencyVsCosTheta__5->SetBinError(16,0.042183);
   efficiencyVsCosTheta__5->SetBinError(17,0.04137657);
   efficiencyVsCosTheta__5->SetBinError(18,0.04279881);
   efficiencyVsCosTheta__5->SetBinError(19,0.04185129);
   efficiencyVsCosTheta__5->SetBinError(20,0.04225152);
   efficiencyVsCosTheta__5->SetBinError(21,0.0416872);
   efficiencyVsCosTheta__5->SetBinError(22,0.04198535);
   efficiencyVsCosTheta__5->SetBinError(23,0.0429224);
   efficiencyVsCosTheta__5->SetBinError(24,0.04171616);
   efficiencyVsCosTheta__5->SetBinError(25,0.04183503);
   efficiencyVsCosTheta__5->SetBinError(26,0.04232338);
   efficiencyVsCosTheta__5->SetBinError(27,0.04255898);
   efficiencyVsCosTheta__5->SetBinError(28,0.04275878);
   efficiencyVsCosTheta__5->SetBinError(29,0.04255885);
   efficiencyVsCosTheta__5->SetBinError(30,0.04211394);
   efficiencyVsCosTheta__5->SetBinError(31,0.0438072);
   efficiencyVsCosTheta__5->SetBinError(32,0.04151346);
   efficiencyVsCosTheta__5->SetBinError(33,0.04331762);
   efficiencyVsCosTheta__5->SetBinError(34,0.04302167);
   efficiencyVsCosTheta__5->SetBinError(35,0.04327128);
   efficiencyVsCosTheta__5->SetBinError(36,0.04171931);
   efficiencyVsCosTheta__5->SetBinError(37,0.04311205);
   efficiencyVsCosTheta__5->SetBinError(38,0.04482417);
   efficiencyVsCosTheta__5->SetBinError(39,0.04287956);
   efficiencyVsCosTheta__5->SetBinError(40,0.0419511);
   efficiencyVsCosTheta__5->SetBinError(41,0.04250413);
   efficiencyVsCosTheta__5->SetBinError(42,0.04289541);
   efficiencyVsCosTheta__5->SetBinError(43,0.04246138);
   efficiencyVsCosTheta__5->SetBinError(44,0.04326412);
   efficiencyVsCosTheta__5->SetBinError(45,0.04164617);
   efficiencyVsCosTheta__5->SetBinError(46,0.0393379);
   efficiencyVsCosTheta__5->SetBinError(47,0.04167325);
   efficiencyVsCosTheta__5->SetBinError(48,0.04217177);
   efficiencyVsCosTheta__5->SetBinError(49,0.04202306);
   efficiencyVsCosTheta__5->SetBinError(50,0.04240293);
   efficiencyVsCosTheta__5->SetBinError(51,0.04230481);
   efficiencyVsCosTheta__5->SetBinError(52,0.04256252);
   efficiencyVsCosTheta__5->SetBinError(53,0.04305635);
   efficiencyVsCosTheta__5->SetBinError(54,0.0435361);
   efficiencyVsCosTheta__5->SetBinError(55,0.04157039);
   efficiencyVsCosTheta__5->SetBinError(56,0.04139032);
   efficiencyVsCosTheta__5->SetBinError(57,0.04163547);
   efficiencyVsCosTheta__5->SetBinError(58,0.04204023);
   efficiencyVsCosTheta__5->SetBinError(59,0.04371792);
   efficiencyVsCosTheta__5->SetBinError(60,0.04089875);
   efficiencyVsCosTheta__5->SetBinError(61,0.04224962);
   efficiencyVsCosTheta__5->SetBinError(62,0.04214123);
   efficiencyVsCosTheta__5->SetBinError(63,0.04255987);
   efficiencyVsCosTheta__5->SetBinError(64,0.04211049);
   efficiencyVsCosTheta__5->SetBinError(65,0.04274909);
   efficiencyVsCosTheta__5->SetBinError(66,0.04273389);
   efficiencyVsCosTheta__5->SetBinError(67,0.04335935);
   efficiencyVsCosTheta__5->SetBinError(68,0.04174705);
   efficiencyVsCosTheta__5->SetBinError(69,0.04205058);
   efficiencyVsCosTheta__5->SetBinError(70,0.04221655);
   efficiencyVsCosTheta__5->SetBinError(71,0.04263205);
   efficiencyVsCosTheta__5->SetBinError(72,0.04299052);
   efficiencyVsCosTheta__5->SetBinError(73,0.04300758);
   efficiencyVsCosTheta__5->SetBinError(74,0.04227835);
   efficiencyVsCosTheta__5->SetBinError(75,0.0429109);
   efficiencyVsCosTheta__5->SetBinError(76,0.04262031);
   efficiencyVsCosTheta__5->SetBinError(77,0.04288514);
   efficiencyVsCosTheta__5->SetBinError(78,0.04371107);
   efficiencyVsCosTheta__5->SetBinError(79,0.04266607);
   efficiencyVsCosTheta__5->SetBinError(80,0.04305518);
   efficiencyVsCosTheta__5->SetBinError(81,0.04283454);
   efficiencyVsCosTheta__5->SetBinError(82,0.04101598);
   efficiencyVsCosTheta__5->SetBinError(83,0.04192943);
   efficiencyVsCosTheta__5->SetBinError(84,0.04259073);
   efficiencyVsCosTheta__5->SetBinError(85,0.04246847);
   efficiencyVsCosTheta__5->SetBinError(86,0.04109596);
   efficiencyVsCosTheta__5->SetBinError(87,0.04138767);
   efficiencyVsCosTheta__5->SetBinError(88,0.04277007);
   efficiencyVsCosTheta__5->SetBinError(89,0.04272631);
   efficiencyVsCosTheta__5->SetBinError(90,0.02574289);
   efficiencyVsCosTheta__5->SetMinimum(0);
   efficiencyVsCosTheta__5->SetMaximum(1.1);
   efficiencyVsCosTheta__5->SetEntries(49025.18);
   efficiencyVsCosTheta__5->SetStats(0);
   efficiencyVsCosTheta__5->SetLineWidth(2);
   efficiencyVsCosTheta__5->SetMarkerStyle(0);
   efficiencyVsCosTheta__5->SetMarkerSize(1.2);
   efficiencyVsCosTheta__5->GetXaxis()->SetTitle(" cos(#theta)");
   efficiencyVsCosTheta__5->GetXaxis()->SetRange(1,360);
   efficiencyVsCosTheta__5->GetXaxis()->SetNdivisions(506);
   efficiencyVsCosTheta__5->GetXaxis()->SetLabelFont(42);
   efficiencyVsCosTheta__5->GetXaxis()->SetLabelOffset(0.015);
   efficiencyVsCosTheta__5->GetXaxis()->SetLabelSize(0.06);
   efficiencyVsCosTheta__5->GetXaxis()->SetTitleSize(0.07);
   efficiencyVsCosTheta__5->GetXaxis()->SetTitleFont(42);
   efficiencyVsCosTheta__5->GetYaxis()->SetTitle("Efficiency");
   efficiencyVsCosTheta__5->GetYaxis()->SetNdivisions(506);
   efficiencyVsCosTheta__5->GetYaxis()->SetLabelFont(42);
   efficiencyVsCosTheta__5->GetYaxis()->SetLabelOffset(0.015);
   efficiencyVsCosTheta__5->GetYaxis()->SetLabelSize(0.06);
   efficiencyVsCosTheta__5->GetYaxis()->SetTitleSize(0.07);
   efficiencyVsCosTheta__5->GetYaxis()->SetTitleOffset(1.2);
   efficiencyVsCosTheta__5->GetYaxis()->SetTitleFont(42);
   efficiencyVsCosTheta__5->GetZaxis()->SetLabelFont(42);
   efficiencyVsCosTheta__5->GetZaxis()->SetLabelOffset(0.015);
   efficiencyVsCosTheta__5->GetZaxis()->SetLabelSize(0.06);
   efficiencyVsCosTheta__5->GetZaxis()->SetTitleSize(0.07);
   efficiencyVsCosTheta__5->GetZaxis()->SetTitleOffset(1.2);
   efficiencyVsCosTheta__5->GetZaxis()->SetTitleFont(42);
   efficiencyVsCosTheta__5->Draw("HIST");
   
   TH1D *efficiencyVsCosTheta__6 = new TH1D("efficiencyVsCosTheta__6","efficiency vs cos(#theta)",90,-1,1);
   efficiencyVsCosTheta__6->SetBinContent(1,0.4734908);
   efficiencyVsCosTheta__6->SetBinContent(2,0.9838372);
   efficiencyVsCosTheta__6->SetBinContent(3,0.9889359);
   efficiencyVsCosTheta__6->SetBinContent(4,0.9907383);
   efficiencyVsCosTheta__6->SetBinContent(5,0.9973729);
   efficiencyVsCosTheta__6->SetBinContent(6,0.9972029);
   efficiencyVsCosTheta__6->SetBinContent(7,0.9990458);
   efficiencyVsCosTheta__6->SetBinContent(8,0.9954528);
   efficiencyVsCosTheta__6->SetBinContent(9,0.9982843);
   efficiencyVsCosTheta__6->SetBinContent(10,0.9991379);
   efficiencyVsCosTheta__6->SetBinContent(11,0.9990385);
   efficiencyVsCosTheta__6->SetBinContent(12,1);
   efficiencyVsCosTheta__6->SetBinContent(13,1);
   efficiencyVsCosTheta__6->SetBinContent(14,0.9981253);
   efficiencyVsCosTheta__6->SetBinContent(15,1);
   efficiencyVsCosTheta__6->SetBinContent(16,1);
   efficiencyVsCosTheta__6->SetBinContent(17,1);
   efficiencyVsCosTheta__6->SetBinContent(18,1);
   efficiencyVsCosTheta__6->SetBinContent(19,0.9990975);
   efficiencyVsCosTheta__6->SetBinContent(20,0.9991071);
   efficiencyVsCosTheta__6->SetBinContent(21,1);
   efficiencyVsCosTheta__6->SetBinContent(22,0.9989583);
   efficiencyVsCosTheta__6->SetBinContent(23,0.9981683);
   efficiencyVsCosTheta__6->SetBinContent(24,0.9991135);
   efficiencyVsCosTheta__6->SetBinContent(25,0.9991525);
   efficiencyVsCosTheta__6->SetBinContent(26,0.9982576);
   efficiencyVsCosTheta__6->SetBinContent(27,0.9992138);
   efficiencyVsCosTheta__6->SetBinContent(28,0.9979839);
   efficiencyVsCosTheta__6->SetBinContent(29,1);
   efficiencyVsCosTheta__6->SetBinContent(30,0.9991007);
   efficiencyVsCosTheta__6->SetBinContent(31,0.9972785);
   efficiencyVsCosTheta__6->SetBinContent(32,1);
   efficiencyVsCosTheta__6->SetBinContent(33,1);
   efficiencyVsCosTheta__6->SetBinContent(34,0.9991379);
   efficiencyVsCosTheta__6->SetBinContent(35,1);
   efficiencyVsCosTheta__6->SetBinContent(36,0.9990566);
   efficiencyVsCosTheta__6->SetBinContent(37,1);
   efficiencyVsCosTheta__6->SetBinContent(38,0.9980871);
   efficiencyVsCosTheta__6->SetBinContent(39,0.9990672);
   efficiencyVsCosTheta__6->SetBinContent(40,1);
   efficiencyVsCosTheta__6->SetBinContent(41,0.9990741);
   efficiencyVsCosTheta__6->SetBinContent(42,0.9991135);
   efficiencyVsCosTheta__6->SetBinContent(43,0.9991409);
   efficiencyVsCosTheta__6->SetBinContent(44,0.9989583);
   efficiencyVsCosTheta__6->SetBinContent(45,0.9717381);
   efficiencyVsCosTheta__6->SetBinContent(46,0.9149725);
   efficiencyVsCosTheta__6->SetBinContent(47,0.9991197);
   efficiencyVsCosTheta__6->SetBinContent(48,0.9991349);
   efficiencyVsCosTheta__6->SetBinContent(49,0.9990385);
   efficiencyVsCosTheta__6->SetBinContent(50,0.9963333);
   efficiencyVsCosTheta__6->SetBinContent(51,0.9972842);
   efficiencyVsCosTheta__6->SetBinContent(52,0.9990458);
   efficiencyVsCosTheta__6->SetBinContent(53,0.9972423);
   efficiencyVsCosTheta__6->SetBinContent(54,0.9991554);
   efficiencyVsCosTheta__6->SetBinContent(55,0.9981885);
   efficiencyVsCosTheta__6->SetBinContent(56,0.9990975);
   efficiencyVsCosTheta__6->SetBinContent(57,1);
   efficiencyVsCosTheta__6->SetBinContent(58,0.9991197);
   efficiencyVsCosTheta__6->SetBinContent(59,0.9992188);
   efficiencyVsCosTheta__6->SetBinContent(60,1);
   efficiencyVsCosTheta__6->SetBinContent(61,1);
   efficiencyVsCosTheta__6->SetBinContent(62,0.9991103);
   efficiencyVsCosTheta__6->SetBinContent(63,1);
   efficiencyVsCosTheta__6->SetBinContent(64,0.9981615);
   efficiencyVsCosTheta__6->SetBinContent(65,1);
   efficiencyVsCosTheta__6->SetBinContent(66,0.9990842);
   efficiencyVsCosTheta__6->SetBinContent(67,0.9991228);
   efficiencyVsCosTheta__6->SetBinContent(68,0.9990637);
   efficiencyVsCosTheta__6->SetBinContent(69,0.9963652);
   efficiencyVsCosTheta__6->SetBinContent(70,0.9990421);
   efficiencyVsCosTheta__6->SetBinContent(71,0.9973806);
   efficiencyVsCosTheta__6->SetBinContent(72,1);
   efficiencyVsCosTheta__6->SetBinContent(73,0.9990775);
   efficiencyVsCosTheta__6->SetBinContent(74,0.9991349);
   efficiencyVsCosTheta__6->SetBinContent(75,0.9991857);
   efficiencyVsCosTheta__6->SetBinContent(76,0.9981203);
   efficiencyVsCosTheta__6->SetBinContent(77,1);
   efficiencyVsCosTheta__6->SetBinContent(78,0.9973214);
   efficiencyVsCosTheta__6->SetBinContent(79,0.9991909);
   efficiencyVsCosTheta__6->SetBinContent(80,0.9974527);
   efficiencyVsCosTheta__6->SetBinContent(81,0.9991007);
   efficiencyVsCosTheta__6->SetBinContent(82,0.9981209);
   efficiencyVsCosTheta__6->SetBinContent(83,0.999031);
   efficiencyVsCosTheta__6->SetBinContent(84,0.997263);
   efficiencyVsCosTheta__6->SetBinContent(85,0.9953666);
   efficiencyVsCosTheta__6->SetBinContent(86,0.9983184);
   efficiencyVsCosTheta__6->SetBinContent(87,0.994524);
   efficiencyVsCosTheta__6->SetBinContent(88,0.9953388);
   efficiencyVsCosTheta__6->SetBinContent(89,0.9874736);
   efficiencyVsCosTheta__6->SetBinContent(90,0.4802267);
   efficiencyVsCosTheta__6->SetBinError(1,0.03163039);
   efficiencyVsCosTheta__6->SetBinError(2,0.04315497);
   efficiencyVsCosTheta__6->SetBinError(3,0.04193304);
   efficiencyVsCosTheta__6->SetBinError(4,0.04278101);
   efficiencyVsCosTheta__6->SetBinError(5,0.04194689);
   efficiencyVsCosTheta__6->SetBinError(6,0.04252499);
   efficiencyVsCosTheta__6->SetBinError(7,0.04251736);
   efficiencyVsCosTheta__6->SetBinError(8,0.04280165);
   efficiencyVsCosTheta__6->SetBinError(9,0.04318233);
   efficiencyVsCosTheta__6->SetBinError(10,0.04225955);
   efficiencyVsCosTheta__6->SetBinError(11,0.04282584);
   efficiencyVsCosTheta__6->SetBinError(12,0.04190035);
   efficiencyVsCosTheta__6->SetBinError(13,0.04255336);
   efficiencyVsCosTheta__6->SetBinError(14,0.04261321);
   efficiencyVsCosTheta__6->SetBinError(15,0.04331131);
   efficiencyVsCosTheta__6->SetBinError(16,0.04299398);
   efficiencyVsCosTheta__6->SetBinError(17,0.0419994);
   efficiencyVsCosTheta__6->SetBinError(18,0.04142127);
   efficiencyVsCosTheta__6->SetBinError(19,0.04229835);
   efficiencyVsCosTheta__6->SetBinError(20,0.04227726);
   efficiencyVsCosTheta__6->SetBinError(21,0.04340053);
   efficiencyVsCosTheta__6->SetBinError(22,0.04314464);
   efficiencyVsCosTheta__6->SetBinError(23,0.04300452);
   efficiencyVsCosTheta__6->SetBinError(24,0.04259082);
   efficiencyVsCosTheta__6->SetBinError(25,0.04146761);
   efficiencyVsCosTheta__6->SetBinError(26,0.04280019);
   efficiencyVsCosTheta__6->SetBinError(27,0.04237183);
   efficiencyVsCosTheta__6->SetBinError(28,0.04361112);
   efficiencyVsCosTheta__6->SetBinError(29,0.04194587);
   efficiencyVsCosTheta__6->SetBinError(30,0.0425808);
   efficiencyVsCosTheta__6->SetBinError(31,0.04276031);
   efficiencyVsCosTheta__6->SetBinError(32,0.04141213);
   efficiencyVsCosTheta__6->SetBinError(33,0.04234083);
   efficiencyVsCosTheta__6->SetBinError(34,0.04172141);
   efficiencyVsCosTheta__6->SetBinError(35,0.04170228);
   efficiencyVsCosTheta__6->SetBinError(36,0.0425146);
   efficiencyVsCosTheta__6->SetBinError(37,0.04223848);
   efficiencyVsCosTheta__6->SetBinError(38,0.0429775);
   efficiencyVsCosTheta__6->SetBinError(39,0.04299795);
   efficiencyVsCosTheta__6->SetBinError(40,0.04255413);
   efficiencyVsCosTheta__6->SetBinError(41,0.0427064);
   efficiencyVsCosTheta__6->SetBinError(42,0.04221345);
   efficiencyVsCosTheta__6->SetBinError(43,0.04203824);
   efficiencyVsCosTheta__6->SetBinError(44,0.04260774);
   efficiencyVsCosTheta__6->SetBinError(45,0.04110448);
   efficiencyVsCosTheta__6->SetBinError(46,0.03935231);
   efficiencyVsCosTheta__6->SetBinError(47,0.04208095);
   efficiencyVsCosTheta__6->SetBinError(48,0.04236014);
   efficiencyVsCosTheta__6->SetBinError(49,0.043063);
   efficiencyVsCosTheta__6->SetBinError(50,0.04239447);
   efficiencyVsCosTheta__6->SetBinError(51,0.04229805);
   efficiencyVsCosTheta__6->SetBinError(52,0.04396666);
   efficiencyVsCosTheta__6->SetBinError(53,0.04239675);
   efficiencyVsCosTheta__6->SetBinError(54,0.04158748);
   efficiencyVsCosTheta__6->SetBinError(55,0.04250326);
   efficiencyVsCosTheta__6->SetBinError(56,0.0426184);
   efficiencyVsCosTheta__6->SetBinError(57,0.04238895);
   efficiencyVsCosTheta__6->SetBinError(58,0.04211622);
   efficiencyVsCosTheta__6->SetBinError(59,0.04093378);
   efficiencyVsCosTheta__6->SetBinError(60,0.04250239);
   efficiencyVsCosTheta__6->SetBinError(61,0.04310606);
   efficiencyVsCosTheta__6->SetBinError(62,0.04167145);
   efficiencyVsCosTheta__6->SetBinError(63,0.04227003);
   efficiencyVsCosTheta__6->SetBinError(64,0.04278269);
   efficiencyVsCosTheta__6->SetBinError(65,0.04286101);
   efficiencyVsCosTheta__6->SetBinError(66,0.04260308);
   efficiencyVsCosTheta__6->SetBinError(67,0.04174435);
   efficiencyVsCosTheta__6->SetBinError(68,0.04237773);
   efficiencyVsCosTheta__6->SetBinError(69,0.04196617);
   efficiencyVsCosTheta__6->SetBinError(70,0.04299063);
   efficiencyVsCosTheta__6->SetBinError(71,0.04110353);
   efficiencyVsCosTheta__6->SetBinError(72,0.04383728);
   efficiencyVsCosTheta__6->SetBinError(73,0.04223406);
   efficiencyVsCosTheta__6->SetBinError(74,0.0426694);
   efficiencyVsCosTheta__6->SetBinError(75,0.04130993);
   efficiencyVsCosTheta__6->SetBinError(76,0.04222703);
   efficiencyVsCosTheta__6->SetBinError(77,0.04279336);
   efficiencyVsCosTheta__6->SetBinError(78,0.0431428);
   efficiencyVsCosTheta__6->SetBinError(79,0.04078494);
   efficiencyVsCosTheta__6->SetBinError(80,0.04213401);
   efficiencyVsCosTheta__6->SetBinError(81,0.0423898);
   efficiencyVsCosTheta__6->SetBinError(82,0.04331594);
   efficiencyVsCosTheta__6->SetBinError(83,0.04385275);
   efficiencyVsCosTheta__6->SetBinError(84,0.04238564);
   efficiencyVsCosTheta__6->SetBinError(85,0.04289461);
   efficiencyVsCosTheta__6->SetBinError(86,0.04163827);
   efficiencyVsCosTheta__6->SetBinError(87,0.04279171);
   efficiencyVsCosTheta__6->SetBinError(88,0.04271576);
   efficiencyVsCosTheta__6->SetBinError(89,0.04095784);
   efficiencyVsCosTheta__6->SetBinError(90,0.03139014);
   efficiencyVsCosTheta__6->SetEntries(49113.1);
   efficiencyVsCosTheta__6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6666");
   efficiencyVsCosTheta__6->SetLineColor(ci);
   efficiencyVsCosTheta__6->SetLineWidth(2);

   ci = TColor::GetColor("#ff6666");
   efficiencyVsCosTheta__6->SetMarkerColor(ci);
   efficiencyVsCosTheta__6->SetMarkerStyle(0);
   efficiencyVsCosTheta__6->SetMarkerSize(1.2);
   efficiencyVsCosTheta__6->GetXaxis()->SetTitle(" cos(#theta)");
   efficiencyVsCosTheta__6->GetXaxis()->SetRange(1,360);
   efficiencyVsCosTheta__6->GetXaxis()->SetNdivisions(506);
   efficiencyVsCosTheta__6->GetXaxis()->SetLabelFont(42);
   efficiencyVsCosTheta__6->GetXaxis()->SetLabelOffset(0.015);
   efficiencyVsCosTheta__6->GetXaxis()->SetLabelSize(0.06);
   efficiencyVsCosTheta__6->GetXaxis()->SetTitleSize(0.07);
   efficiencyVsCosTheta__6->GetXaxis()->SetTitleFont(42);
   efficiencyVsCosTheta__6->GetYaxis()->SetTitle(" Counts per Event");
   efficiencyVsCosTheta__6->GetYaxis()->SetNdivisions(506);
   efficiencyVsCosTheta__6->GetYaxis()->SetLabelFont(42);
   efficiencyVsCosTheta__6->GetYaxis()->SetLabelOffset(0.015);
   efficiencyVsCosTheta__6->GetYaxis()->SetLabelSize(0.06);
   efficiencyVsCosTheta__6->GetYaxis()->SetTitleSize(0.07);
   efficiencyVsCosTheta__6->GetYaxis()->SetTitleOffset(1.2);
   efficiencyVsCosTheta__6->GetYaxis()->SetTitleFont(42);
   efficiencyVsCosTheta__6->GetZaxis()->SetLabelFont(42);
   efficiencyVsCosTheta__6->GetZaxis()->SetLabelOffset(0.015);
   efficiencyVsCosTheta__6->GetZaxis()->SetLabelSize(0.06);
   efficiencyVsCosTheta__6->GetZaxis()->SetTitleSize(0.07);
   efficiencyVsCosTheta__6->GetZaxis()->SetTitleOffset(1.2);
   efficiencyVsCosTheta__6->GetZaxis()->SetTitleFont(42);
   efficiencyVsCosTheta__6->Draw("HISTsame");
   
   TLegend *leg = new TLegend(0.3,0.3,0.8,0.5,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("efficiencyVsCosTheta","CLICdet","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("efficiencyVsCosTheta","CLD","lp");

   ci = TColor::GetColor("#ff6666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff6666");
   entry->SetMarkerColor(ci);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
