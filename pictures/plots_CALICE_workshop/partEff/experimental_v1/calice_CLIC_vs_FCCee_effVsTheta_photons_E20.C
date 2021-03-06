void calice_CLIC_vs_FCCee_effVsTheta_photons_E20()
{
//=========Macro generated from canvas: c1/A Simple Graph Example
//=========  (Wed Mar  7 16:52:41 2018) by ROOT version6.08/00
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
   
   TH1D *efficiencyVsCosTheta__1 = new TH1D("efficiencyVsCosTheta__1","efficiency vs cos(#theta)",90,-1,1);
   efficiencyVsCosTheta__1->SetBinContent(1,0.3490009);
   efficiencyVsCosTheta__1->SetBinContent(2,0.8935015);
   efficiencyVsCosTheta__1->SetBinContent(3,0.8804848);
   efficiencyVsCosTheta__1->SetBinContent(4,0.8844181);
   efficiencyVsCosTheta__1->SetBinContent(5,0.8860789);
   efficiencyVsCosTheta__1->SetBinContent(6,0.8815944);
   efficiencyVsCosTheta__1->SetBinContent(7,0.8840197);
   efficiencyVsCosTheta__1->SetBinContent(8,0.8779087);
   efficiencyVsCosTheta__1->SetBinContent(9,0.8595326);
   efficiencyVsCosTheta__1->SetBinContent(10,0.9000698);
   efficiencyVsCosTheta__1->SetBinContent(11,0.9010798);
   efficiencyVsCosTheta__1->SetBinContent(12,0.9130193);
   efficiencyVsCosTheta__1->SetBinContent(13,0.9122882);
   efficiencyVsCosTheta__1->SetBinContent(14,0.9332427);
   efficiencyVsCosTheta__1->SetBinContent(15,0.928032);
   efficiencyVsCosTheta__1->SetBinContent(16,0.954979);
   efficiencyVsCosTheta__1->SetBinContent(17,0.9433268);
   efficiencyVsCosTheta__1->SetBinContent(18,0.9401216);
   efficiencyVsCosTheta__1->SetBinContent(19,0.9352472);
   efficiencyVsCosTheta__1->SetBinContent(20,0.9525436);
   efficiencyVsCosTheta__1->SetBinContent(21,0.943416);
   efficiencyVsCosTheta__1->SetBinContent(22,0.9492161);
   efficiencyVsCosTheta__1->SetBinContent(23,0.9420769);
   efficiencyVsCosTheta__1->SetBinContent(24,0.9413401);
   efficiencyVsCosTheta__1->SetBinContent(25,0.9424752);
   efficiencyVsCosTheta__1->SetBinContent(26,0.9415043);
   efficiencyVsCosTheta__1->SetBinContent(27,0.9528111);
   efficiencyVsCosTheta__1->SetBinContent(28,0.9462887);
   efficiencyVsCosTheta__1->SetBinContent(29,0.9337304);
   efficiencyVsCosTheta__1->SetBinContent(30,0.9480693);
   efficiencyVsCosTheta__1->SetBinContent(31,0.9535086);
   efficiencyVsCosTheta__1->SetBinContent(32,0.9586423);
   efficiencyVsCosTheta__1->SetBinContent(33,0.9591385);
   efficiencyVsCosTheta__1->SetBinContent(34,0.949348);
   efficiencyVsCosTheta__1->SetBinContent(35,0.949962);
   efficiencyVsCosTheta__1->SetBinContent(36,0.9408553);
   efficiencyVsCosTheta__1->SetBinContent(37,0.9522946);
   efficiencyVsCosTheta__1->SetBinContent(38,0.9530722);
   efficiencyVsCosTheta__1->SetBinContent(39,0.9551673);
   efficiencyVsCosTheta__1->SetBinContent(40,0.9522188);
   efficiencyVsCosTheta__1->SetBinContent(41,0.9584866);
   efficiencyVsCosTheta__1->SetBinContent(42,0.944554);
   efficiencyVsCosTheta__1->SetBinContent(43,0.9407042);
   efficiencyVsCosTheta__1->SetBinContent(44,0.9526557);
   efficiencyVsCosTheta__1->SetBinContent(45,0.9533482);
   efficiencyVsCosTheta__1->SetBinContent(46,0.9458596);
   efficiencyVsCosTheta__1->SetBinContent(47,0.9432457);
   efficiencyVsCosTheta__1->SetBinContent(48,0.952496);
   efficiencyVsCosTheta__1->SetBinContent(49,0.9552978);
   efficiencyVsCosTheta__1->SetBinContent(50,0.9513988);
   efficiencyVsCosTheta__1->SetBinContent(51,0.9381004);
   efficiencyVsCosTheta__1->SetBinContent(52,0.9453454);
   efficiencyVsCosTheta__1->SetBinContent(53,0.9607776);
   efficiencyVsCosTheta__1->SetBinContent(54,0.9508149);
   efficiencyVsCosTheta__1->SetBinContent(55,0.9460987);
   efficiencyVsCosTheta__1->SetBinContent(56,0.9478804);
   efficiencyVsCosTheta__1->SetBinContent(57,0.946219);
   efficiencyVsCosTheta__1->SetBinContent(58,0.9500304);
   efficiencyVsCosTheta__1->SetBinContent(59,0.951825);
   efficiencyVsCosTheta__1->SetBinContent(60,0.9445013);
   efficiencyVsCosTheta__1->SetBinContent(61,0.9605351);
   efficiencyVsCosTheta__1->SetBinContent(62,0.9395799);
   efficiencyVsCosTheta__1->SetBinContent(63,0.9474303);
   efficiencyVsCosTheta__1->SetBinContent(64,0.9497743);
   efficiencyVsCosTheta__1->SetBinContent(65,0.9549628);
   efficiencyVsCosTheta__1->SetBinContent(66,0.9464819);
   efficiencyVsCosTheta__1->SetBinContent(67,0.9399798);
   efficiencyVsCosTheta__1->SetBinContent(68,0.9467493);
   efficiencyVsCosTheta__1->SetBinContent(69,0.9384095);
   efficiencyVsCosTheta__1->SetBinContent(70,0.9355355);
   efficiencyVsCosTheta__1->SetBinContent(71,0.9463445);
   efficiencyVsCosTheta__1->SetBinContent(72,0.942478);
   efficiencyVsCosTheta__1->SetBinContent(73,0.9496132);
   efficiencyVsCosTheta__1->SetBinContent(74,0.9466672);
   efficiencyVsCosTheta__1->SetBinContent(75,0.9443495);
   efficiencyVsCosTheta__1->SetBinContent(76,0.9414663);
   efficiencyVsCosTheta__1->SetBinContent(77,0.930954);
   efficiencyVsCosTheta__1->SetBinContent(78,0.9153513);
   efficiencyVsCosTheta__1->SetBinContent(79,0.9292607);
   efficiencyVsCosTheta__1->SetBinContent(80,0.9140008);
   efficiencyVsCosTheta__1->SetBinContent(81,0.8822756);
   efficiencyVsCosTheta__1->SetBinContent(82,0.9021222);
   efficiencyVsCosTheta__1->SetBinContent(83,0.9005184);
   efficiencyVsCosTheta__1->SetBinContent(84,0.895459);
   efficiencyVsCosTheta__1->SetBinContent(85,0.8888389);
   efficiencyVsCosTheta__1->SetBinContent(86,0.9100432);
   efficiencyVsCosTheta__1->SetBinContent(87,0.886459);
   efficiencyVsCosTheta__1->SetBinContent(88,0.9052124);
   efficiencyVsCosTheta__1->SetBinContent(89,0.9149963);
   efficiencyVsCosTheta__1->SetBinContent(90,0.359459);
   efficiencyVsCosTheta__1->SetBinError(1,0.02491649);
   efficiencyVsCosTheta__1->SetBinError(2,0.038911);
   efficiencyVsCosTheta__1->SetBinError(3,0.03949842);
   efficiencyVsCosTheta__1->SetBinError(4,0.03880119);
   efficiencyVsCosTheta__1->SetBinError(5,0.03905194);
   efficiencyVsCosTheta__1->SetBinError(6,0.0380071);
   efficiencyVsCosTheta__1->SetBinError(7,0.03883431);
   efficiencyVsCosTheta__1->SetBinError(8,0.03915008);
   efficiencyVsCosTheta__1->SetBinError(9,0.03669439);
   efficiencyVsCosTheta__1->SetBinError(10,0.0400537);
   efficiencyVsCosTheta__1->SetBinError(11,0.03956053);
   efficiencyVsCosTheta__1->SetBinError(12,0.04008119);
   efficiencyVsCosTheta__1->SetBinError(13,0.0400194);
   efficiencyVsCosTheta__1->SetBinError(14,0.04026817);
   efficiencyVsCosTheta__1->SetBinError(15,0.03964461);
   efficiencyVsCosTheta__1->SetBinError(16,0.04118042);
   efficiencyVsCosTheta__1->SetBinError(17,0.04101995);
   efficiencyVsCosTheta__1->SetBinError(18,0.04100862);
   efficiencyVsCosTheta__1->SetBinError(19,0.04102862);
   efficiencyVsCosTheta__1->SetBinError(20,0.04050871);
   efficiencyVsCosTheta__1->SetBinError(21,0.04054336);
   efficiencyVsCosTheta__1->SetBinError(22,0.04062259);
   efficiencyVsCosTheta__1->SetBinError(23,0.04056558);
   efficiencyVsCosTheta__1->SetBinError(24,0.04048853);
   efficiencyVsCosTheta__1->SetBinError(25,0.04174467);
   efficiencyVsCosTheta__1->SetBinError(26,0.04140264);
   efficiencyVsCosTheta__1->SetBinError(27,0.04039448);
   efficiencyVsCosTheta__1->SetBinError(28,0.04116969);
   efficiencyVsCosTheta__1->SetBinError(29,0.03949826);
   efficiencyVsCosTheta__1->SetBinError(30,0.04096525);
   efficiencyVsCosTheta__1->SetBinError(31,0.0402898);
   efficiencyVsCosTheta__1->SetBinError(32,0.04049868);
   efficiencyVsCosTheta__1->SetBinError(33,0.0422939);
   efficiencyVsCosTheta__1->SetBinError(34,0.04124066);
   efficiencyVsCosTheta__1->SetBinError(35,0.04056586);
   efficiencyVsCosTheta__1->SetBinError(36,0.04056124);
   efficiencyVsCosTheta__1->SetBinError(37,0.04064362);
   efficiencyVsCosTheta__1->SetBinError(38,0.04064052);
   efficiencyVsCosTheta__1->SetBinError(39,0.04216489);
   efficiencyVsCosTheta__1->SetBinError(40,0.04079839);
   efficiencyVsCosTheta__1->SetBinError(41,0.04074877);
   efficiencyVsCosTheta__1->SetBinError(42,0.04012902);
   efficiencyVsCosTheta__1->SetBinError(43,0.04125648);
   efficiencyVsCosTheta__1->SetBinError(44,0.04097087);
   efficiencyVsCosTheta__1->SetBinError(45,0.04017002);
   efficiencyVsCosTheta__1->SetBinError(46,0.04060877);
   efficiencyVsCosTheta__1->SetBinError(47,0.04147249);
   efficiencyVsCosTheta__1->SetBinError(48,0.04051679);
   efficiencyVsCosTheta__1->SetBinError(49,0.04240878);
   efficiencyVsCosTheta__1->SetBinError(50,0.04053484);
   efficiencyVsCosTheta__1->SetBinError(51,0.04106472);
   efficiencyVsCosTheta__1->SetBinError(52,0.04100619);
   efficiencyVsCosTheta__1->SetBinError(53,0.0422154);
   efficiencyVsCosTheta__1->SetBinError(54,0.04109127);
   efficiencyVsCosTheta__1->SetBinError(55,0.0402921);
   efficiencyVsCosTheta__1->SetBinError(56,0.04148631);
   efficiencyVsCosTheta__1->SetBinError(57,0.04124962);
   efficiencyVsCosTheta__1->SetBinError(58,0.04149915);
   efficiencyVsCosTheta__1->SetBinError(59,0.04153628);
   efficiencyVsCosTheta__1->SetBinError(60,0.04123476);
   efficiencyVsCosTheta__1->SetBinError(61,0.04090525);
   efficiencyVsCosTheta__1->SetBinError(62,0.0408316);
   efficiencyVsCosTheta__1->SetBinError(63,0.04066992);
   efficiencyVsCosTheta__1->SetBinError(64,0.04101695);
   efficiencyVsCosTheta__1->SetBinError(65,0.0421133);
   efficiencyVsCosTheta__1->SetBinError(66,0.04167483);
   efficiencyVsCosTheta__1->SetBinError(67,0.04041286);
   efficiencyVsCosTheta__1->SetBinError(68,0.04109198);
   efficiencyVsCosTheta__1->SetBinError(69,0.0404158);
   efficiencyVsCosTheta__1->SetBinError(70,0.04085635);
   efficiencyVsCosTheta__1->SetBinError(71,0.04110616);
   efficiencyVsCosTheta__1->SetBinError(72,0.04071665);
   efficiencyVsCosTheta__1->SetBinError(73,0.03947133);
   efficiencyVsCosTheta__1->SetBinError(74,0.04178856);
   efficiencyVsCosTheta__1->SetBinError(75,0.04196279);
   efficiencyVsCosTheta__1->SetBinError(76,0.04193602);
   efficiencyVsCosTheta__1->SetBinError(77,0.0406638);
   efficiencyVsCosTheta__1->SetBinError(78,0.04016311);
   efficiencyVsCosTheta__1->SetBinError(79,0.04072844);
   efficiencyVsCosTheta__1->SetBinError(80,0.03938759);
   efficiencyVsCosTheta__1->SetBinError(81,0.03916272);
   efficiencyVsCosTheta__1->SetBinError(82,0.03861635);
   efficiencyVsCosTheta__1->SetBinError(83,0.03995619);
   efficiencyVsCosTheta__1->SetBinError(84,0.0383314);
   efficiencyVsCosTheta__1->SetBinError(85,0.03902106);
   efficiencyVsCosTheta__1->SetBinError(86,0.04024617);
   efficiencyVsCosTheta__1->SetBinError(87,0.03865819);
   efficiencyVsCosTheta__1->SetBinError(88,0.0395241);
   efficiencyVsCosTheta__1->SetBinError(89,0.03907539);
   efficiencyVsCosTheta__1->SetBinError(90,0.02542593);
   efficiencyVsCosTheta__1->SetMinimum(0);
   efficiencyVsCosTheta__1->SetMaximum(1.1);
   efficiencyVsCosTheta__1->SetEntries(47118.18);
   efficiencyVsCosTheta__1->SetStats(0);
   efficiencyVsCosTheta__1->SetLineWidth(2);
   efficiencyVsCosTheta__1->SetMarkerStyle(0);
   efficiencyVsCosTheta__1->SetMarkerSize(1.2);
   efficiencyVsCosTheta__1->GetXaxis()->SetTitle(" cos(#theta)");
   efficiencyVsCosTheta__1->GetXaxis()->SetRange(1,360);
   efficiencyVsCosTheta__1->GetXaxis()->SetNdivisions(506);
   efficiencyVsCosTheta__1->GetXaxis()->SetLabelFont(42);
   efficiencyVsCosTheta__1->GetXaxis()->SetLabelOffset(0.015);
   efficiencyVsCosTheta__1->GetXaxis()->SetLabelSize(0.06);
   efficiencyVsCosTheta__1->GetXaxis()->SetTitleSize(0.07);
   efficiencyVsCosTheta__1->GetXaxis()->SetTitleFont(42);
   efficiencyVsCosTheta__1->GetYaxis()->SetTitle("Efficiency");
   efficiencyVsCosTheta__1->GetYaxis()->SetNdivisions(506);
   efficiencyVsCosTheta__1->GetYaxis()->SetLabelFont(42);
   efficiencyVsCosTheta__1->GetYaxis()->SetLabelOffset(0.015);
   efficiencyVsCosTheta__1->GetYaxis()->SetLabelSize(0.06);
   efficiencyVsCosTheta__1->GetYaxis()->SetTitleSize(0.07);
   efficiencyVsCosTheta__1->GetYaxis()->SetTitleOffset(1.2);
   efficiencyVsCosTheta__1->GetYaxis()->SetTitleFont(42);
   efficiencyVsCosTheta__1->GetZaxis()->SetLabelFont(42);
   efficiencyVsCosTheta__1->GetZaxis()->SetLabelOffset(0.015);
   efficiencyVsCosTheta__1->GetZaxis()->SetLabelSize(0.06);
   efficiencyVsCosTheta__1->GetZaxis()->SetTitleSize(0.07);
   efficiencyVsCosTheta__1->GetZaxis()->SetTitleOffset(1.2);
   efficiencyVsCosTheta__1->GetZaxis()->SetTitleFont(42);
   efficiencyVsCosTheta__1->Draw("HIST");
   
   TH1D *efficiencyVsCosTheta__2 = new TH1D("efficiencyVsCosTheta__2","efficiency vs Cos(#Theta)",90,-1,1);
   efficiencyVsCosTheta__2->SetBinContent(1,0.4566955);
   efficiencyVsCosTheta__2->SetBinContent(2,0.8898584);
   efficiencyVsCosTheta__2->SetBinContent(3,0.8819358);
   efficiencyVsCosTheta__2->SetBinContent(4,0.8790203);
   efficiencyVsCosTheta__2->SetBinContent(5,0.876321);
   efficiencyVsCosTheta__2->SetBinContent(6,0.8762235);
   efficiencyVsCosTheta__2->SetBinContent(7,0.8913577);
   efficiencyVsCosTheta__2->SetBinContent(8,0.892365);
   efficiencyVsCosTheta__2->SetBinContent(9,0.8800597);
   efficiencyVsCosTheta__2->SetBinContent(10,0.8714681);
   efficiencyVsCosTheta__2->SetBinContent(11,0.8763187);
   efficiencyVsCosTheta__2->SetBinContent(12,0.8773368);
   efficiencyVsCosTheta__2->SetBinContent(13,0.8931833);
   efficiencyVsCosTheta__2->SetBinContent(14,0.86215);
   efficiencyVsCosTheta__2->SetBinContent(15,0.8991137);
   efficiencyVsCosTheta__2->SetBinContent(16,0.8991464);
   efficiencyVsCosTheta__2->SetBinContent(17,0.9276853);
   efficiencyVsCosTheta__2->SetBinContent(18,0.9096556);
   efficiencyVsCosTheta__2->SetBinContent(19,0.9199282);
   efficiencyVsCosTheta__2->SetBinContent(20,0.9395341);
   efficiencyVsCosTheta__2->SetBinContent(21,0.9430287);
   efficiencyVsCosTheta__2->SetBinContent(22,0.9223824);
   efficiencyVsCosTheta__2->SetBinContent(23,0.9520308);
   efficiencyVsCosTheta__2->SetBinContent(24,0.9500821);
   efficiencyVsCosTheta__2->SetBinContent(25,0.9299637);
   efficiencyVsCosTheta__2->SetBinContent(26,0.943424);
   efficiencyVsCosTheta__2->SetBinContent(27,0.9371906);
   efficiencyVsCosTheta__2->SetBinContent(28,0.9407306);
   efficiencyVsCosTheta__2->SetBinContent(29,0.9414148);
   efficiencyVsCosTheta__2->SetBinContent(30,0.9490142);
   efficiencyVsCosTheta__2->SetBinContent(31,0.9460328);
   efficiencyVsCosTheta__2->SetBinContent(32,0.9369234);
   efficiencyVsCosTheta__2->SetBinContent(33,0.9434556);
   efficiencyVsCosTheta__2->SetBinContent(34,0.9404897);
   efficiencyVsCosTheta__2->SetBinContent(35,0.9425471);
   efficiencyVsCosTheta__2->SetBinContent(36,0.9573038);
   efficiencyVsCosTheta__2->SetBinContent(37,0.9367736);
   efficiencyVsCosTheta__2->SetBinContent(38,0.9378509);
   efficiencyVsCosTheta__2->SetBinContent(39,0.9408426);
   efficiencyVsCosTheta__2->SetBinContent(40,0.944817);
   efficiencyVsCosTheta__2->SetBinContent(41,0.9530743);
   efficiencyVsCosTheta__2->SetBinContent(42,0.956531);
   efficiencyVsCosTheta__2->SetBinContent(43,0.9505236);
   efficiencyVsCosTheta__2->SetBinContent(44,0.9512888);
   efficiencyVsCosTheta__2->SetBinContent(45,0.9389244);
   efficiencyVsCosTheta__2->SetBinContent(46,0.9518241);
   efficiencyVsCosTheta__2->SetBinContent(47,0.9448985);
   efficiencyVsCosTheta__2->SetBinContent(48,0.9467226);
   efficiencyVsCosTheta__2->SetBinContent(49,0.9506171);
   efficiencyVsCosTheta__2->SetBinContent(50,0.9461782);
   efficiencyVsCosTheta__2->SetBinContent(51,0.9502824);
   efficiencyVsCosTheta__2->SetBinContent(52,0.9438085);
   efficiencyVsCosTheta__2->SetBinContent(53,0.9539698);
   efficiencyVsCosTheta__2->SetBinContent(54,0.9482759);
   efficiencyVsCosTheta__2->SetBinContent(55,0.930172);
   efficiencyVsCosTheta__2->SetBinContent(56,0.9512617);
   efficiencyVsCosTheta__2->SetBinContent(57,0.9306448);
   efficiencyVsCosTheta__2->SetBinContent(58,0.9381135);
   efficiencyVsCosTheta__2->SetBinContent(59,0.9523887);
   efficiencyVsCosTheta__2->SetBinContent(60,0.9413693);
   efficiencyVsCosTheta__2->SetBinContent(61,0.9333754);
   efficiencyVsCosTheta__2->SetBinContent(62,0.9484682);
   efficiencyVsCosTheta__2->SetBinContent(63,0.933389);
   efficiencyVsCosTheta__2->SetBinContent(64,0.953787);
   efficiencyVsCosTheta__2->SetBinContent(65,0.9478001);
   efficiencyVsCosTheta__2->SetBinContent(66,0.9356275);
   efficiencyVsCosTheta__2->SetBinContent(67,0.9364639);
   efficiencyVsCosTheta__2->SetBinContent(68,0.9391606);
   efficiencyVsCosTheta__2->SetBinContent(69,0.9428623);
   efficiencyVsCosTheta__2->SetBinContent(70,0.9519767);
   efficiencyVsCosTheta__2->SetBinContent(71,0.9370731);
   efficiencyVsCosTheta__2->SetBinContent(72,0.906608);
   efficiencyVsCosTheta__2->SetBinContent(73,0.9046277);
   efficiencyVsCosTheta__2->SetBinContent(74,0.9117594);
   efficiencyVsCosTheta__2->SetBinContent(75,0.9129444);
   efficiencyVsCosTheta__2->SetBinContent(76,0.9037423);
   efficiencyVsCosTheta__2->SetBinContent(77,0.8522774);
   efficiencyVsCosTheta__2->SetBinContent(78,0.9026884);
   efficiencyVsCosTheta__2->SetBinContent(79,0.896945);
   efficiencyVsCosTheta__2->SetBinContent(80,0.9048674);
   efficiencyVsCosTheta__2->SetBinContent(81,0.9099989);
   efficiencyVsCosTheta__2->SetBinContent(82,0.912337);
   efficiencyVsCosTheta__2->SetBinContent(83,0.9219834);
   efficiencyVsCosTheta__2->SetBinContent(84,0.8996033);
   efficiencyVsCosTheta__2->SetBinContent(85,0.8862913);
   efficiencyVsCosTheta__2->SetBinContent(86,0.8840253);
   efficiencyVsCosTheta__2->SetBinContent(87,0.9051324);
   efficiencyVsCosTheta__2->SetBinContent(88,0.8906774);
   efficiencyVsCosTheta__2->SetBinContent(89,0.9023738);
   efficiencyVsCosTheta__2->SetBinContent(90,0.4577778);
   efficiencyVsCosTheta__2->SetBinError(1,0.02984761);
   efficiencyVsCosTheta__2->SetBinError(2,0.03862544);
   efficiencyVsCosTheta__2->SetBinError(3,0.03774789);
   efficiencyVsCosTheta__2->SetBinError(4,0.03762451);
   efficiencyVsCosTheta__2->SetBinError(5,0.03851941);
   efficiencyVsCosTheta__2->SetBinError(6,0.03748654);
   efficiencyVsCosTheta__2->SetBinError(7,0.03913078);
   efficiencyVsCosTheta__2->SetBinError(8,0.03880992);
   efficiencyVsCosTheta__2->SetBinError(9,0.03900565);
   efficiencyVsCosTheta__2->SetBinError(10,0.03788758);
   efficiencyVsCosTheta__2->SetBinError(11,0.04006883);
   efficiencyVsCosTheta__2->SetBinError(12,0.03957002);
   efficiencyVsCosTheta__2->SetBinError(13,0.03864142);
   efficiencyVsCosTheta__2->SetBinError(14,0.03773208);
   efficiencyVsCosTheta__2->SetBinError(15,0.03893574);
   efficiencyVsCosTheta__2->SetBinError(16,0.03968993);
   efficiencyVsCosTheta__2->SetBinError(17,0.04110537);
   efficiencyVsCosTheta__2->SetBinError(18,0.04012086);
   efficiencyVsCosTheta__2->SetBinError(19,0.04091492);
   efficiencyVsCosTheta__2->SetBinError(20,0.04151053);
   efficiencyVsCosTheta__2->SetBinError(21,0.04161439);
   efficiencyVsCosTheta__2->SetBinError(22,0.04064894);
   efficiencyVsCosTheta__2->SetBinError(23,0.0415067);
   efficiencyVsCosTheta__2->SetBinError(24,0.04074993);
   efficiencyVsCosTheta__2->SetBinError(25,0.04003695);
   efficiencyVsCosTheta__2->SetBinError(26,0.04027436);
   efficiencyVsCosTheta__2->SetBinError(27,0.04072864);
   efficiencyVsCosTheta__2->SetBinError(28,0.04063743);
   efficiencyVsCosTheta__2->SetBinError(29,0.04101449);
   efficiencyVsCosTheta__2->SetBinError(30,0.04170741);
   efficiencyVsCosTheta__2->SetBinError(31,0.04081113);
   efficiencyVsCosTheta__2->SetBinError(32,0.03987017);
   efficiencyVsCosTheta__2->SetBinError(33,0.04065819);
   efficiencyVsCosTheta__2->SetBinError(34,0.0404938);
   efficiencyVsCosTheta__2->SetBinError(35,0.04095738);
   efficiencyVsCosTheta__2->SetBinError(36,0.0409709);
   efficiencyVsCosTheta__2->SetBinError(37,0.03970364);
   efficiencyVsCosTheta__2->SetBinError(38,0.04074549);
   efficiencyVsCosTheta__2->SetBinError(39,0.04283103);
   efficiencyVsCosTheta__2->SetBinError(40,0.04015502);
   efficiencyVsCosTheta__2->SetBinError(41,0.03993918);
   efficiencyVsCosTheta__2->SetBinError(42,0.04161375);
   efficiencyVsCosTheta__2->SetBinError(43,0.04115751);
   efficiencyVsCosTheta__2->SetBinError(44,0.04159865);
   efficiencyVsCosTheta__2->SetBinError(45,0.04070793);
   efficiencyVsCosTheta__2->SetBinError(46,0.04177419);
   efficiencyVsCosTheta__2->SetBinError(47,0.03978897);
   efficiencyVsCosTheta__2->SetBinError(48,0.04040576);
   efficiencyVsCosTheta__2->SetBinError(49,0.04033864);
   efficiencyVsCosTheta__2->SetBinError(50,0.04108546);
   efficiencyVsCosTheta__2->SetBinError(51,0.041444);
   efficiencyVsCosTheta__2->SetBinError(52,0.04078001);
   efficiencyVsCosTheta__2->SetBinError(53,0.04116641);
   efficiencyVsCosTheta__2->SetBinError(54,0.04197886);
   efficiencyVsCosTheta__2->SetBinError(55,0.04099033);
   efficiencyVsCosTheta__2->SetBinError(56,0.04127575);
   efficiencyVsCosTheta__2->SetBinError(57,0.04022728);
   efficiencyVsCosTheta__2->SetBinError(58,0.04034951);
   efficiencyVsCosTheta__2->SetBinError(59,0.04012802);
   efficiencyVsCosTheta__2->SetBinError(60,0.04032049);
   efficiencyVsCosTheta__2->SetBinError(61,0.04053233);
   efficiencyVsCosTheta__2->SetBinError(62,0.04038434);
   efficiencyVsCosTheta__2->SetBinError(63,0.04062363);
   efficiencyVsCosTheta__2->SetBinError(64,0.04159072);
   efficiencyVsCosTheta__2->SetBinError(65,0.0407452);
   efficiencyVsCosTheta__2->SetBinError(66,0.04047754);
   efficiencyVsCosTheta__2->SetBinError(67,0.04097717);
   efficiencyVsCosTheta__2->SetBinError(68,0.04059653);
   efficiencyVsCosTheta__2->SetBinError(69,0.03998672);
   efficiencyVsCosTheta__2->SetBinError(70,0.04043524);
   efficiencyVsCosTheta__2->SetBinError(71,0.0403723);
   efficiencyVsCosTheta__2->SetBinError(72,0.04021923);
   efficiencyVsCosTheta__2->SetBinError(73,0.03892364);
   efficiencyVsCosTheta__2->SetBinError(74,0.0390933);
   efficiencyVsCosTheta__2->SetBinError(75,0.04024357);
   efficiencyVsCosTheta__2->SetBinError(76,0.03918437);
   efficiencyVsCosTheta__2->SetBinError(77,0.03727197);
   efficiencyVsCosTheta__2->SetBinError(78,0.03883869);
   efficiencyVsCosTheta__2->SetBinError(79,0.0388516);
   efficiencyVsCosTheta__2->SetBinError(80,0.03988661);
   efficiencyVsCosTheta__2->SetBinError(81,0.04014247);
   efficiencyVsCosTheta__2->SetBinError(82,0.03913948);
   efficiencyVsCosTheta__2->SetBinError(83,0.03999311);
   efficiencyVsCosTheta__2->SetBinError(84,0.03923252);
   efficiencyVsCosTheta__2->SetBinError(85,0.03790058);
   efficiencyVsCosTheta__2->SetBinError(86,0.03866717);
   efficiencyVsCosTheta__2->SetBinError(87,0.03889898);
   efficiencyVsCosTheta__2->SetBinError(88,0.03896768);
   efficiencyVsCosTheta__2->SetBinError(89,0.0386122);
   efficiencyVsCosTheta__2->SetBinError(90,0.02935408);
   efficiencyVsCosTheta__2->SetEntries(47164.31);
   efficiencyVsCosTheta__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6666");
   efficiencyVsCosTheta__2->SetLineColor(ci);
   efficiencyVsCosTheta__2->SetLineWidth(2);

   ci = TColor::GetColor("#ff6666");
   efficiencyVsCosTheta__2->SetMarkerColor(ci);
   efficiencyVsCosTheta__2->SetMarkerStyle(0);
   efficiencyVsCosTheta__2->SetMarkerSize(1.2);
   efficiencyVsCosTheta__2->GetXaxis()->SetTitle(" Cos(#Theta)");
   efficiencyVsCosTheta__2->GetXaxis()->SetRange(1,360);
   efficiencyVsCosTheta__2->GetXaxis()->SetNdivisions(506);
   efficiencyVsCosTheta__2->GetXaxis()->SetLabelFont(42);
   efficiencyVsCosTheta__2->GetXaxis()->SetLabelOffset(0.015);
   efficiencyVsCosTheta__2->GetXaxis()->SetLabelSize(0.06);
   efficiencyVsCosTheta__2->GetXaxis()->SetTitleSize(0.07);
   efficiencyVsCosTheta__2->GetXaxis()->SetTitleFont(42);
   efficiencyVsCosTheta__2->GetYaxis()->SetTitle(" Counts per Event");
   efficiencyVsCosTheta__2->GetYaxis()->SetNdivisions(506);
   efficiencyVsCosTheta__2->GetYaxis()->SetLabelFont(42);
   efficiencyVsCosTheta__2->GetYaxis()->SetLabelOffset(0.015);
   efficiencyVsCosTheta__2->GetYaxis()->SetLabelSize(0.06);
   efficiencyVsCosTheta__2->GetYaxis()->SetTitleSize(0.07);
   efficiencyVsCosTheta__2->GetYaxis()->SetTitleOffset(1.2);
   efficiencyVsCosTheta__2->GetYaxis()->SetTitleFont(42);
   efficiencyVsCosTheta__2->GetZaxis()->SetLabelFont(42);
   efficiencyVsCosTheta__2->GetZaxis()->SetLabelOffset(0.015);
   efficiencyVsCosTheta__2->GetZaxis()->SetLabelSize(0.06);
   efficiencyVsCosTheta__2->GetZaxis()->SetTitleSize(0.07);
   efficiencyVsCosTheta__2->GetZaxis()->SetTitleOffset(1.2);
   efficiencyVsCosTheta__2->GetZaxis()->SetTitleFont(42);
   efficiencyVsCosTheta__2->Draw("HISTsame");
   
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
