void nPFOs_vs_theta_electron_E10_noBrem()
{
//=========Macro generated from canvas: c1/A Simple Graph Example
//=========  (Fri Jan 19 15:13:06 2018) by ROOT version6.08/00
   TCanvas *c1 = new TCanvas("c1", "A Simple Graph Example",2,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-1.453333,-0.6081081,1.213333,2.77027);
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
   
   TH1D *Electron__6 = new TH1D("Electron__6","nElectrons vs Cos(#Theta)",90,-1,1);
   Electron__6->SetBinContent(1,0.4923077);
   Electron__6->SetBinContent(2,0.9935897);
   Electron__6->SetBinContent(3,0.9910714);
   Electron__6->SetBinContent(4,0.9817639);
   Electron__6->SetBinContent(5,0.9932432);
   Electron__6->SetBinContent(6,0.9773496);
   Electron__6->SetBinContent(7,0.9882706);
   Electron__6->SetBinContent(8,0.9883152);
   Electron__6->SetBinContent(9,1);
   Electron__6->SetBinContent(10,1);
   Electron__6->SetBinContent(11,0.9921875);
   Electron__6->SetBinContent(12,0.9770221);
   Electron__6->SetBinContent(13,0.9848485);
   Electron__6->SetBinContent(14,0.7984913);
   Electron__6->SetBinContent(15,0.9945652);
   Electron__6->SetBinContent(16,0.9897959);
   Electron__6->SetBinContent(17,0.9917214);
   Electron__6->SetBinContent(18,0.9854143);
   Electron__6->SetBinContent(19,0.9919271);
   Electron__6->SetBinContent(20,1);
   Electron__6->SetBinContent(21,0.9897221);
   Electron__6->SetBinContent(22,0.99126);
   Electron__6->SetBinContent(23,0.9887862);
   Electron__6->SetBinContent(24,0.98679);
   Electron__6->SetBinContent(25,0.9898068);
   Electron__6->SetBinContent(26,0.9869892);
   Electron__6->SetBinContent(27,0.9891817);
   Electron__6->SetBinContent(28,0.9953271);
   Electron__6->SetBinContent(29,0.9902029);
   Electron__6->SetBinContent(30,0.9893862);
   Electron__6->SetBinContent(31,0.9891592);
   Electron__6->SetBinContent(32,0.992447);
   Electron__6->SetBinContent(33,0.9818841);
   Electron__6->SetBinContent(34,0.985337);
   Electron__6->SetBinContent(35,0.9959787);
   Electron__6->SetBinContent(36,0.9902409);
   Electron__6->SetBinContent(37,0.9902303);
   Electron__6->SetBinContent(38,0.9875);
   Electron__6->SetBinContent(39,0.9917073);
   Electron__6->SetBinContent(40,0.9918786);
   Electron__6->SetBinContent(41,0.9881043);
   Electron__6->SetBinContent(42,0.9955805);
   Electron__6->SetBinContent(43,0.9981618);
   Electron__6->SetBinContent(44,0.988943);
   Electron__6->SetBinContent(45,0.9788816);
   Electron__6->SetBinContent(46,0.9810908);
   Electron__6->SetBinContent(47,0.9978632);
   Electron__6->SetBinContent(48,0.993932);
   Electron__6->SetBinContent(49,0.9845692);
   Electron__6->SetBinContent(50,0.9918867);
   Electron__6->SetBinContent(51,0.9802885);
   Electron__6->SetBinContent(52,0.9936273);
   Electron__6->SetBinContent(53,0.9906819);
   Electron__6->SetBinContent(54,0.991886);
   Electron__6->SetBinContent(55,0.9879908);
   Electron__6->SetBinContent(56,0.994063);
   Electron__6->SetBinContent(57,0.9870343);
   Electron__6->SetBinContent(58,0.9921453);
   Electron__6->SetBinContent(59,1);
   Electron__6->SetBinContent(60,0.9920213);
   Electron__6->SetBinContent(61,0.9892426);
   Electron__6->SetBinContent(62,0.9919348);
   Electron__6->SetBinContent(63,0.9922963);
   Electron__6->SetBinContent(64,0.9936571);
   Electron__6->SetBinContent(65,0.9911157);
   Electron__6->SetBinContent(66,0.9928814);
   Electron__6->SetBinContent(67,0.9851558);
   Electron__6->SetBinContent(68,0.9917749);
   Electron__6->SetBinContent(69,0.9933226);
   Electron__6->SetBinContent(70,0.9972222);
   Electron__6->SetBinContent(71,0.9906864);
   Electron__6->SetBinContent(72,0.997093);
   Electron__6->SetBinContent(73,0.9918011);
   Electron__6->SetBinContent(74,0.995283);
   Electron__6->SetBinContent(75,0.9955357);
   Electron__6->SetBinContent(76,0.9860026);
   Electron__6->SetBinContent(77,0.8351599);
   Electron__6->SetBinContent(78,0.9444952);
   Electron__6->SetBinContent(79,0.9898897);
   Electron__6->SetBinContent(80,0.986958);
   Electron__6->SetBinContent(81,0.9897959);
   Electron__6->SetBinContent(82,0.9823836);
   Electron__6->SetBinContent(83,0.9826876);
   Electron__6->SetBinContent(84,0.9955357);
   Electron__6->SetBinContent(85,0.9886136);
   Electron__6->SetBinContent(86,0.9867596);
   Electron__6->SetBinContent(87,0.9849099);
   Electron__6->SetBinContent(88,1);
   Electron__6->SetBinContent(89,0.9955357);
   Electron__6->SetBinContent(90,0.5050223);
   Electron__6->SetMinimum(0);
   Electron__6->SetMaximum(2.5);
   Electron__6->SetEntries(11624.82);
   Electron__6->SetStats(0);
   Electron__6->SetLineWidth(2);
   Electron__6->SetMarkerStyle(0);
   Electron__6->SetMarkerSize(1.2);
   Electron__6->GetXaxis()->SetTitle(" Cos(#Theta)");
   Electron__6->GetXaxis()->SetRange(1,360);
   Electron__6->GetXaxis()->SetNdivisions(506);
   Electron__6->GetXaxis()->SetLabelFont(42);
   Electron__6->GetXaxis()->SetLabelOffset(0.015);
   Electron__6->GetXaxis()->SetLabelSize(0.06);
   Electron__6->GetXaxis()->SetTitleSize(0.07);
   Electron__6->GetXaxis()->SetTitleFont(42);
   Electron__6->GetYaxis()->SetTitle("nPFOs");
   Electron__6->GetYaxis()->SetNdivisions(506);
   Electron__6->GetYaxis()->SetLabelFont(42);
   Electron__6->GetYaxis()->SetLabelOffset(0.015);
   Electron__6->GetYaxis()->SetLabelSize(0.06);
   Electron__6->GetYaxis()->SetTitleSize(0.07);
   Electron__6->GetYaxis()->SetTitleOffset(1.2);
   Electron__6->GetYaxis()->SetTitleFont(42);
   Electron__6->GetZaxis()->SetLabelFont(42);
   Electron__6->GetZaxis()->SetLabelOffset(0.015);
   Electron__6->GetZaxis()->SetLabelSize(0.06);
   Electron__6->GetZaxis()->SetTitleSize(0.07);
   Electron__6->GetZaxis()->SetTitleOffset(1.2);
   Electron__6->GetZaxis()->SetTitleFont(42);
   Electron__6->Draw("");
   
   TH1D *Photon__7 = new TH1D("Photon__7","nPhotons vs Cos(#Theta)",90,-1,1);
   Photon__7->SetBinContent(1,0.2586743);
   Photon__7->SetBinContent(2,0.3307486);
   Photon__7->SetBinContent(3,0.3077608);
   Photon__7->SetBinContent(4,0.3157849);
   Photon__7->SetBinContent(5,0.2500227);
   Photon__7->SetBinContent(6,0.2575022);
   Photon__7->SetBinContent(7,0.2487144);
   Photon__7->SetBinContent(8,0.2572324);
   Photon__7->SetBinContent(9,0.2045922);
   Photon__7->SetBinContent(10,0.187114);
   Photon__7->SetBinContent(11,0.1923723);
   Photon__7->SetBinContent(12,0.1626051);
   Photon__7->SetBinContent(13,0.1990638);
   Photon__7->SetBinContent(14,0.1372492);
   Photon__7->SetBinContent(15,0.14769);
   Photon__7->SetBinContent(16,0.1688168);
   Photon__7->SetBinContent(17,0.1514901);
   Photon__7->SetBinContent(18,0.2151991);
   Photon__7->SetBinContent(19,0.2075149);
   Photon__7->SetBinContent(20,0.2002286);
   Photon__7->SetBinContent(21,0.2560585);
   Photon__7->SetBinContent(22,0.2078229);
   Photon__7->SetBinContent(23,0.2324581);
   Photon__7->SetBinContent(24,0.2747187);
   Photon__7->SetBinContent(25,0.24069);
   Photon__7->SetBinContent(26,0.2148326);
   Photon__7->SetBinContent(27,0.258696);
   Photon__7->SetBinContent(28,0.2214622);
   Photon__7->SetBinContent(29,0.3138972);
   Photon__7->SetBinContent(30,0.2501063);
   Photon__7->SetBinContent(31,0.2537835);
   Photon__7->SetBinContent(32,0.2588364);
   Photon__7->SetBinContent(33,0.2768261);
   Photon__7->SetBinContent(34,0.2438171);
   Photon__7->SetBinContent(35,0.2447244);
   Photon__7->SetBinContent(36,0.3206754);
   Photon__7->SetBinContent(37,0.2575545);
   Photon__7->SetBinContent(38,0.2859248);
   Photon__7->SetBinContent(39,0.2909134);
   Photon__7->SetBinContent(40,0.2790995);
   Photon__7->SetBinContent(41,0.2947194);
   Photon__7->SetBinContent(42,0.2960789);
   Photon__7->SetBinContent(43,0.2756909);
   Photon__7->SetBinContent(44,0.2919263);
   Photon__7->SetBinContent(45,0.273626);
   Photon__7->SetBinContent(46,0.2375451);
   Photon__7->SetBinContent(47,0.2771522);
   Photon__7->SetBinContent(48,0.2496149);
   Photon__7->SetBinContent(49,0.2895636);
   Photon__7->SetBinContent(50,0.2946774);
   Photon__7->SetBinContent(51,0.299776);
   Photon__7->SetBinContent(52,0.2753702);
   Photon__7->SetBinContent(53,0.2938912);
   Photon__7->SetBinContent(54,0.2987319);
   Photon__7->SetBinContent(55,0.2646737);
   Photon__7->SetBinContent(56,0.2673032);
   Photon__7->SetBinContent(57,0.2784527);
   Photon__7->SetBinContent(58,0.2402053);
   Photon__7->SetBinContent(59,0.2745324);
   Photon__7->SetBinContent(60,0.3152143);
   Photon__7->SetBinContent(61,0.2719274);
   Photon__7->SetBinContent(62,0.2387129);
   Photon__7->SetBinContent(63,0.2611111);
   Photon__7->SetBinContent(64,0.2458122);
   Photon__7->SetBinContent(65,0.2224929);
   Photon__7->SetBinContent(66,0.2635973);
   Photon__7->SetBinContent(67,0.2348222);
   Photon__7->SetBinContent(68,0.2245323);
   Photon__7->SetBinContent(69,0.2124691);
   Photon__7->SetBinContent(70,0.1974091);
   Photon__7->SetBinContent(71,0.2167167);
   Photon__7->SetBinContent(72,0.218747);
   Photon__7->SetBinContent(73,0.181493);
   Photon__7->SetBinContent(74,0.1685535);
   Photon__7->SetBinContent(75,0.1714146);
   Photon__7->SetBinContent(76,0.193416);
   Photon__7->SetBinContent(77,0.1195493);
   Photon__7->SetBinContent(78,0.1775591);
   Photon__7->SetBinContent(79,0.1419271);
   Photon__7->SetBinContent(80,0.2329156);
   Photon__7->SetBinContent(81,0.1997217);
   Photon__7->SetBinContent(82,0.2307019);
   Photon__7->SetBinContent(83,0.1985006);
   Photon__7->SetBinContent(84,0.2421834);
   Photon__7->SetBinContent(85,0.2913596);
   Photon__7->SetBinContent(86,0.28337);
   Photon__7->SetBinContent(87,0.352257);
   Photon__7->SetBinContent(88,0.3193908);
   Photon__7->SetBinContent(89,0.3582371);
   Photon__7->SetBinContent(90,0.2861283);
   Photon__7->SetEntries(4619.886);
   Photon__7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6666");
   Photon__7->SetLineColor(ci);
   Photon__7->SetLineWidth(2);

   ci = TColor::GetColor("#ff6666");
   Photon__7->SetMarkerColor(ci);
   Photon__7->SetMarkerStyle(0);
   Photon__7->SetMarkerSize(1.2);
   Photon__7->GetXaxis()->SetTitle(" Cos(#Theta)");
   Photon__7->GetXaxis()->SetRange(1,360);
   Photon__7->GetXaxis()->SetNdivisions(506);
   Photon__7->GetXaxis()->SetLabelFont(42);
   Photon__7->GetXaxis()->SetLabelOffset(0.015);
   Photon__7->GetXaxis()->SetLabelSize(0.06);
   Photon__7->GetXaxis()->SetTitleSize(0.07);
   Photon__7->GetXaxis()->SetTitleFont(42);
   Photon__7->GetYaxis()->SetTitle(" Counts per Event");
   Photon__7->GetYaxis()->SetNdivisions(506);
   Photon__7->GetYaxis()->SetLabelFont(42);
   Photon__7->GetYaxis()->SetLabelOffset(0.015);
   Photon__7->GetYaxis()->SetLabelSize(0.06);
   Photon__7->GetYaxis()->SetTitleSize(0.07);
   Photon__7->GetYaxis()->SetTitleOffset(1.2);
   Photon__7->GetYaxis()->SetTitleFont(42);
   Photon__7->GetZaxis()->SetLabelFont(42);
   Photon__7->GetZaxis()->SetLabelOffset(0.015);
   Photon__7->GetZaxis()->SetLabelSize(0.06);
   Photon__7->GetZaxis()->SetTitleSize(0.07);
   Photon__7->GetZaxis()->SetTitleOffset(1.2);
   Photon__7->GetZaxis()->SetTitleFont(42);
   Photon__7->Draw("same");
   
   TH1D *Pion__8 = new TH1D("Pion__8","nPions vs Cos(#Theta)",90,-1,1);
   Pion__8->SetBinContent(1,0.003846154);
   Pion__8->SetBinContent(2,0.006410256);
   Pion__8->SetBinContent(3,0.008928571);
   Pion__8->SetBinContent(4,0.01823607);
   Pion__8->SetBinContent(5,0.006756757);
   Pion__8->SetBinContent(6,0.02265038);
   Pion__8->SetBinContent(7,0.01172941);
   Pion__8->SetBinContent(8,0.005434783);
   Pion__8->SetBinContent(11,0.0078125);
   Pion__8->SetBinContent(12,0.02297794);
   Pion__8->SetBinContent(13,0.01515152);
   Pion__8->SetBinContent(14,0.2015087);
   Pion__8->SetBinContent(15,0.005434783);
   Pion__8->SetBinContent(16,0.01020408);
   Pion__8->SetBinContent(17,0.008278599);
   Pion__8->SetBinContent(18,0.008633304);
   Pion__8->SetBinContent(19,0.008072917);
   Pion__8->SetBinContent(21,0.006899505);
   Pion__8->SetBinContent(22,0.006264741);
   Pion__8->SetBinContent(23,0.01121379);
   Pion__8->SetBinContent(24,0.01321004);
   Pion__8->SetBinContent(25,0.01019322);
   Pion__8->SetBinContent(26,0.01301079);
   Pion__8->SetBinContent(27,0.01081825);
   Pion__8->SetBinContent(28,0.004672897);
   Pion__8->SetBinContent(29,0.00698812);
   Pion__8->SetBinContent(30,0.01061376);
   Pion__8->SetBinContent(31,0.0108408);
   Pion__8->SetBinContent(32,0.007553021);
   Pion__8->SetBinContent(33,0.01613174);
   Pion__8->SetBinContent(34,0.01466304);
   Pion__8->SetBinContent(35,0.004021318);
   Pion__8->SetBinContent(36,0.007920885);
   Pion__8->SetBinContent(37,0.009769716);
   Pion__8->SetBinContent(38,0.01041667);
   Pion__8->SetBinContent(39,0.008292745);
   Pion__8->SetBinContent(40,0.008121424);
   Pion__8->SetBinContent(41,0.01189571);
   Pion__8->SetBinContent(42,0.004419484);
   Pion__8->SetBinContent(43,0.001838235);
   Pion__8->SetBinContent(44,0.005978322);
   Pion__8->SetBinContent(45,0.01731053);
   Pion__8->SetBinContent(46,0.01702954);
   Pion__8->SetBinContent(47,0.002136752);
   Pion__8->SetBinContent(48,0.006067966);
   Pion__8->SetBinContent(49,0.01367028);
   Pion__8->SetBinContent(50,0.008113257);
   Pion__8->SetBinContent(51,0.01753755);
   Pion__8->SetBinContent(52,0.006372683);
   Pion__8->SetBinContent(53,0.009318057);
   Pion__8->SetBinContent(54,0.008114035);
   Pion__8->SetBinContent(55,0.01200924);
   Pion__8->SetBinContent(56,0.005937008);
   Pion__8->SetBinContent(57,0.01296572);
   Pion__8->SetBinContent(58,0.007854693);
   Pion__8->SetBinContent(60,0.00797872);
   Pion__8->SetBinContent(61,0.01075744);
   Pion__8->SetBinContent(62,0.008065244);
   Pion__8->SetBinContent(63,0.007703704);
   Pion__8->SetBinContent(64,0.006342865);
   Pion__8->SetBinContent(65,0.00661157);
   Pion__8->SetBinContent(66,0.007118644);
   Pion__8->SetBinContent(67,0.01065946);
   Pion__8->SetBinContent(68,0.008225108);
   Pion__8->SetBinContent(69,0.00667735);
   Pion__8->SetBinContent(70,0.002777778);
   Pion__8->SetBinContent(71,0.006024096);
   Pion__8->SetBinContent(72,0.002906977);
   Pion__8->SetBinContent(73,0.008198925);
   Pion__8->SetBinContent(74,0.004716981);
   Pion__8->SetBinContent(75,0.004464286);
   Pion__8->SetBinContent(76,0.008562646);
   Pion__8->SetBinContent(77,0.1596318);
   Pion__8->SetBinContent(78,0.05060285);
   Pion__8->SetBinContent(79,0.01011029);
   Pion__8->SetBinContent(80,0.006944444);
   Pion__8->SetBinContent(81,0.005102041);
   Pion__8->SetBinContent(82,0.01761642);
   Pion__8->SetBinContent(83,0.01259539);
   Pion__8->SetBinContent(85,0.01138639);
   Pion__8->SetBinContent(86,0.01324042);
   Pion__8->SetBinContent(87,0.01509009);
   Pion__8->SetBinContent(89,0.004464286);
   Pion__8->SetEntries(227.1042);
   Pion__8->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Pion__8->SetLineColor(ci);
   Pion__8->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   Pion__8->SetMarkerColor(ci);
   Pion__8->SetMarkerStyle(0);
   Pion__8->SetMarkerSize(1.2);
   Pion__8->GetXaxis()->SetTitle(" Cos(#Theta)");
   Pion__8->GetXaxis()->SetRange(1,360);
   Pion__8->GetXaxis()->SetNdivisions(506);
   Pion__8->GetXaxis()->SetLabelFont(42);
   Pion__8->GetXaxis()->SetLabelOffset(0.015);
   Pion__8->GetXaxis()->SetLabelSize(0.06);
   Pion__8->GetXaxis()->SetTitleSize(0.07);
   Pion__8->GetXaxis()->SetTitleFont(42);
   Pion__8->GetYaxis()->SetTitle(" Counts per Event");
   Pion__8->GetYaxis()->SetNdivisions(506);
   Pion__8->GetYaxis()->SetLabelFont(42);
   Pion__8->GetYaxis()->SetLabelOffset(0.015);
   Pion__8->GetYaxis()->SetLabelSize(0.06);
   Pion__8->GetYaxis()->SetTitleSize(0.07);
   Pion__8->GetYaxis()->SetTitleOffset(1.2);
   Pion__8->GetYaxis()->SetTitleFont(42);
   Pion__8->GetZaxis()->SetLabelFont(42);
   Pion__8->GetZaxis()->SetLabelOffset(0.015);
   Pion__8->GetZaxis()->SetLabelSize(0.06);
   Pion__8->GetZaxis()->SetTitleSize(0.07);
   Pion__8->GetZaxis()->SetTitleOffset(1.2);
   Pion__8->GetZaxis()->SetTitleFont(42);
   Pion__8->Draw("same");
   
   TH1D *NeutralHadron__9 = new TH1D("NeutralHadron__9","nNeutralHadrons vs Cos(#Theta)",90,-1,1);
   NeutralHadron__9->SetBinContent(1,0.1657938);
   NeutralHadron__9->SetBinContent(2,0.08198925);
   NeutralHadron__9->SetBinContent(3,0.1192134);
   NeutralHadron__9->SetBinContent(4,0.1199528);
   NeutralHadron__9->SetBinContent(5,0.1110819);
   NeutralHadron__9->SetBinContent(6,0.0880805);
   NeutralHadron__9->SetBinContent(7,0.1033477);
   NeutralHadron__9->SetBinContent(8,0.05542085);
   NeutralHadron__9->SetBinContent(9,0.1103419);
   NeutralHadron__9->SetBinContent(10,0.07619313);
   NeutralHadron__9->SetBinContent(11,0.09267473);
   NeutralHadron__9->SetBinContent(12,0.09898104);
   NeutralHadron__9->SetBinContent(13,0.06793556);
   NeutralHadron__9->SetBinContent(14,0.0371787);
   NeutralHadron__9->SetBinContent(15,0.07758968);
   NeutralHadron__9->SetBinContent(16,0.06835802);
   NeutralHadron__9->SetBinContent(17,0.05234683);
   NeutralHadron__9->SetBinContent(18,0.04991244);
   NeutralHadron__9->SetBinContent(19,0.03936012);
   NeutralHadron__9->SetBinContent(20,0.05587664);
   NeutralHadron__9->SetBinContent(21,0.04379901);
   NeutralHadron__9->SetBinContent(22,0.07118329);
   NeutralHadron__9->SetBinContent(23,0.04356668);
   NeutralHadron__9->SetBinContent(24,0.05035027);
   NeutralHadron__9->SetBinContent(25,0.0565923);
   NeutralHadron__9->SetBinContent(26,0.0505286);
   NeutralHadron__9->SetBinContent(27,0.03740393);
   NeutralHadron__9->SetBinContent(28,0.06498151);
   NeutralHadron__9->SetBinContent(29,0.05488736);
   NeutralHadron__9->SetBinContent(30,0.05003105);
   NeutralHadron__9->SetBinContent(31,0.07132497);
   NeutralHadron__9->SetBinContent(32,0.04207262);
   NeutralHadron__9->SetBinContent(33,0.05038576);
   NeutralHadron__9->SetBinContent(34,0.04662384);
   NeutralHadron__9->SetBinContent(35,0.02849508);
   NeutralHadron__9->SetBinContent(36,0.03159983);
   NeutralHadron__9->SetBinContent(37,0.04083117);
   NeutralHadron__9->SetBinContent(38,0.03099593);
   NeutralHadron__9->SetBinContent(39,0.034925);
   NeutralHadron__9->SetBinContent(40,0.04601647);
   NeutralHadron__9->SetBinContent(41,0.03774012);
   NeutralHadron__9->SetBinContent(42,0.04160615);
   NeutralHadron__9->SetBinContent(43,0.05386169);
   NeutralHadron__9->SetBinContent(44,0.03303391);
   NeutralHadron__9->SetBinContent(45,0.0435251);
   NeutralHadron__9->SetBinContent(46,0.04687171);
   NeutralHadron__9->SetBinContent(47,0.02446581);
   NeutralHadron__9->SetBinContent(48,0.04217663);
   NeutralHadron__9->SetBinContent(49,0.05159758);
   NeutralHadron__9->SetBinContent(50,0.0458367);
   NeutralHadron__9->SetBinContent(51,0.04949078);
   NeutralHadron__9->SetBinContent(52,0.03198644);
   NeutralHadron__9->SetBinContent(53,0.04907702);
   NeutralHadron__9->SetBinContent(54,0.05337529);
   NeutralHadron__9->SetBinContent(55,0.0384126);
   NeutralHadron__9->SetBinContent(56,0.05026341);
   NeutralHadron__9->SetBinContent(57,0.03935554);
   NeutralHadron__9->SetBinContent(58,0.04856544);
   NeutralHadron__9->SetBinContent(59,0.03244473);
   NeutralHadron__9->SetBinContent(60,0.06090931);
   NeutralHadron__9->SetBinContent(61,0.05518216);
   NeutralHadron__9->SetBinContent(62,0.04200921);
   NeutralHadron__9->SetBinContent(63,0.05822222);
   NeutralHadron__9->SetBinContent(64,0.04664411);
   NeutralHadron__9->SetBinContent(65,0.05058685);
   NeutralHadron__9->SetBinContent(66,0.05909521);
   NeutralHadron__9->SetBinContent(67,0.05720135);
   NeutralHadron__9->SetBinContent(68,0.04617444);
   NeutralHadron__9->SetBinContent(69,0.05948887);
   NeutralHadron__9->SetBinContent(70,0.06282929);
   NeutralHadron__9->SetBinContent(71,0.04717418);
   NeutralHadron__9->SetBinContent(72,0.0836003);
   NeutralHadron__9->SetBinContent(73,0.06976753);
   NeutralHadron__9->SetBinContent(74,0.06644205);
   NeutralHadron__9->SetBinContent(75,0.06715181);
   NeutralHadron__9->SetBinContent(76,0.05194956);
   NeutralHadron__9->SetBinContent(77,0.0522131);
   NeutralHadron__9->SetBinContent(78,0.06485847);
   NeutralHadron__9->SetBinContent(79,0.08249081);
   NeutralHadron__9->SetBinContent(80,0.06374853);
   NeutralHadron__9->SetBinContent(81,0.1185993);
   NeutralHadron__9->SetBinContent(82,0.09331653);
   NeutralHadron__9->SetBinContent(83,0.1265883);
   NeutralHadron__9->SetBinContent(84,0.08203022);
   NeutralHadron__9->SetBinContent(85,0.09341064);
   NeutralHadron__9->SetBinContent(86,0.07081341);
   NeutralHadron__9->SetBinContent(87,0.0811302);
   NeutralHadron__9->SetBinContent(88,0.08617696);
   NeutralHadron__9->SetBinContent(89,0.1078163);
   NeutralHadron__9->SetBinContent(90,0.1418131);
   NeutralHadron__9->SetEntries(1122.785);
   NeutralHadron__9->SetStats(0);

   ci = TColor::GetColor("#009900");
   NeutralHadron__9->SetLineColor(ci);
   NeutralHadron__9->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   NeutralHadron__9->SetMarkerColor(ci);
   NeutralHadron__9->SetMarkerStyle(0);
   NeutralHadron__9->SetMarkerSize(1.2);
   NeutralHadron__9->GetXaxis()->SetTitle(" Cos(#Theta)");
   NeutralHadron__9->GetXaxis()->SetRange(1,360);
   NeutralHadron__9->GetXaxis()->SetNdivisions(506);
   NeutralHadron__9->GetXaxis()->SetLabelFont(42);
   NeutralHadron__9->GetXaxis()->SetLabelOffset(0.015);
   NeutralHadron__9->GetXaxis()->SetLabelSize(0.06);
   NeutralHadron__9->GetXaxis()->SetTitleSize(0.07);
   NeutralHadron__9->GetXaxis()->SetTitleFont(42);
   NeutralHadron__9->GetYaxis()->SetTitle(" Counts per Event");
   NeutralHadron__9->GetYaxis()->SetNdivisions(506);
   NeutralHadron__9->GetYaxis()->SetLabelFont(42);
   NeutralHadron__9->GetYaxis()->SetLabelOffset(0.015);
   NeutralHadron__9->GetYaxis()->SetLabelSize(0.06);
   NeutralHadron__9->GetYaxis()->SetTitleSize(0.07);
   NeutralHadron__9->GetYaxis()->SetTitleOffset(1.2);
   NeutralHadron__9->GetYaxis()->SetTitleFont(42);
   NeutralHadron__9->GetZaxis()->SetLabelFont(42);
   NeutralHadron__9->GetZaxis()->SetLabelOffset(0.015);
   NeutralHadron__9->GetZaxis()->SetLabelSize(0.06);
   NeutralHadron__9->GetZaxis()->SetTitleSize(0.07);
   NeutralHadron__9->GetZaxis()->SetTitleOffset(1.2);
   NeutralHadron__9->GetZaxis()->SetTitleFont(42);
   NeutralHadron__9->Draw("same");
   
   TH1D *Muon__10 = new TH1D("Muon__10","nMuons vs Cos(#Theta)",90,-1,1);
   Muon__10->SetStats(0);

   ci = TColor::GetColor("#00cccc");
   Muon__10->SetLineColor(ci);
   Muon__10->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   Muon__10->SetMarkerColor(ci);
   Muon__10->SetMarkerStyle(0);
   Muon__10->SetMarkerSize(1.2);
   Muon__10->GetXaxis()->SetTitle(" Cos(#Theta)");
   Muon__10->GetXaxis()->SetRange(1,360);
   Muon__10->GetXaxis()->SetNdivisions(506);
   Muon__10->GetXaxis()->SetLabelFont(42);
   Muon__10->GetXaxis()->SetLabelOffset(0.015);
   Muon__10->GetXaxis()->SetLabelSize(0.06);
   Muon__10->GetXaxis()->SetTitleSize(0.07);
   Muon__10->GetXaxis()->SetTitleFont(42);
   Muon__10->GetYaxis()->SetTitle(" Counts per Event");
   Muon__10->GetYaxis()->SetNdivisions(506);
   Muon__10->GetYaxis()->SetLabelFont(42);
   Muon__10->GetYaxis()->SetLabelOffset(0.015);
   Muon__10->GetYaxis()->SetLabelSize(0.06);
   Muon__10->GetYaxis()->SetTitleSize(0.07);
   Muon__10->GetYaxis()->SetTitleOffset(1.2);
   Muon__10->GetYaxis()->SetTitleFont(42);
   Muon__10->GetZaxis()->SetLabelFont(42);
   Muon__10->GetZaxis()->SetLabelOffset(0.015);
   Muon__10->GetZaxis()->SetLabelSize(0.06);
   Muon__10->GetZaxis()->SetTitleSize(0.07);
   Muon__10->GetZaxis()->SetTitleOffset(1.2);
   Muon__10->GetZaxis()->SetTitleFont(42);
   Muon__10->Draw("same");
   
   TH1D *all__11 = new TH1D("all__11","nPFOs vs Cos(#Theta)",90,-1,1);
   all__11->SetBinContent(1,0.9206219);
   all__11->SetBinContent(2,1.412738);
   all__11->SetBinContent(3,1.426974);
   all__11->SetBinContent(4,1.435738);
   all__11->SetBinContent(5,1.361105);
   all__11->SetBinContent(6,1.345583);
   all__11->SetBinContent(7,1.352062);
   all__11->SetBinContent(8,1.306403);
   all__11->SetBinContent(9,1.314934);
   all__11->SetBinContent(10,1.263307);
   all__11->SetBinContent(11,1.285047);
   all__11->SetBinContent(12,1.261586);
   all__11->SetBinContent(13,1.266999);
   all__11->SetBinContent(14,1.174428);
   all__11->SetBinContent(15,1.22528);
   all__11->SetBinContent(16,1.237175);
   all__11->SetBinContent(17,1.203837);
   all__11->SetBinContent(18,1.259159);
   all__11->SetBinContent(19,1.246875);
   all__11->SetBinContent(20,1.256105);
   all__11->SetBinContent(21,1.296479);
   all__11->SetBinContent(22,1.276531);
   all__11->SetBinContent(23,1.276025);
   all__11->SetBinContent(24,1.325069);
   all__11->SetBinContent(25,1.297282);
   all__11->SetBinContent(26,1.265361);
   all__11->SetBinContent(27,1.2961);
   all__11->SetBinContent(28,1.286444);
   all__11->SetBinContent(29,1.365976);
   all__11->SetBinContent(30,1.300137);
   all__11->SetBinContent(31,1.325109);
   all__11->SetBinContent(32,1.300909);
   all__11->SetBinContent(33,1.325228);
   all__11->SetBinContent(34,1.290441);
   all__11->SetBinContent(35,1.273219);
   all__11->SetBinContent(36,1.350437);
   all__11->SetBinContent(37,1.298386);
   all__11->SetBinContent(38,1.314837);
   all__11->SetBinContent(39,1.325838);
   all__11->SetBinContent(40,1.325116);
   all__11->SetBinContent(41,1.33246);
   all__11->SetBinContent(42,1.337685);
   all__11->SetBinContent(43,1.329553);
   all__11->SetBinContent(44,1.319882);
   all__11->SetBinContent(45,1.313343);
   all__11->SetBinContent(46,1.282537);
   all__11->SetBinContent(47,1.301618);
   all__11->SetBinContent(48,1.291792);
   all__11->SetBinContent(49,1.339401);
   all__11->SetBinContent(50,1.340514);
   all__11->SetBinContent(51,1.347093);
   all__11->SetBinContent(52,1.307357);
   all__11->SetBinContent(53,1.342968);
   all__11->SetBinContent(54,1.352107);
   all__11->SetBinContent(55,1.303086);
   all__11->SetBinContent(56,1.317567);
   all__11->SetBinContent(57,1.317808);
   all__11->SetBinContent(58,1.288771);
   all__11->SetBinContent(59,1.306977);
   all__11->SetBinContent(60,1.376124);
   all__11->SetBinContent(61,1.32711);
   all__11->SetBinContent(62,1.280722);
   all__11->SetBinContent(63,1.319333);
   all__11->SetBinContent(64,1.292456);
   all__11->SetBinContent(65,1.270807);
   all__11->SetBinContent(66,1.322693);
   all__11->SetBinContent(67,1.287839);
   all__11->SetBinContent(68,1.270707);
   all__11->SetBinContent(69,1.271958);
   all__11->SetBinContent(70,1.260238);
   all__11->SetBinContent(71,1.260601);
   all__11->SetBinContent(72,1.302347);
   all__11->SetBinContent(73,1.251261);
   all__11->SetBinContent(74,1.234996);
   all__11->SetBinContent(75,1.238566);
   all__11->SetBinContent(76,1.239931);
   all__11->SetBinContent(77,1.166554);
   all__11->SetBinContent(78,1.237516);
   all__11->SetBinContent(79,1.224418);
   all__11->SetBinContent(80,1.290567);
   all__11->SetBinContent(81,1.313219);
   all__11->SetBinContent(82,1.324018);
   all__11->SetBinContent(83,1.320372);
   all__11->SetBinContent(84,1.319749);
   all__11->SetBinContent(85,1.38477);
   all__11->SetBinContent(86,1.354183);
   all__11->SetBinContent(87,1.433387);
   all__11->SetBinContent(88,1.405568);
   all__11->SetBinContent(89,1.466053);
   all__11->SetBinContent(90,0.9329637);
   all__11->SetEntries(13145.1);
   all__11->SetStats(0);

   ci = TColor::GetColor("#990000");
   all__11->SetLineColor(ci);
   all__11->SetLineWidth(2);

   ci = TColor::GetColor("#990000");
   all__11->SetMarkerColor(ci);
   all__11->SetMarkerStyle(0);
   all__11->SetMarkerSize(1.2);
   all__11->GetXaxis()->SetTitle(" Cos(#Theta)");
   all__11->GetXaxis()->SetRange(1,360);
   all__11->GetXaxis()->SetNdivisions(506);
   all__11->GetXaxis()->SetLabelFont(42);
   all__11->GetXaxis()->SetLabelOffset(0.015);
   all__11->GetXaxis()->SetLabelSize(0.06);
   all__11->GetXaxis()->SetTitleSize(0.07);
   all__11->GetXaxis()->SetTitleFont(42);
   all__11->GetYaxis()->SetTitle(" Counts per Event");
   all__11->GetYaxis()->SetNdivisions(506);
   all__11->GetYaxis()->SetLabelFont(42);
   all__11->GetYaxis()->SetLabelOffset(0.015);
   all__11->GetYaxis()->SetLabelSize(0.06);
   all__11->GetYaxis()->SetTitleSize(0.07);
   all__11->GetYaxis()->SetTitleOffset(1.2);
   all__11->GetYaxis()->SetTitleFont(42);
   all__11->GetZaxis()->SetLabelFont(42);
   all__11->GetZaxis()->SetLabelOffset(0.015);
   all__11->GetZaxis()->SetLabelSize(0.06);
   all__11->GetZaxis()->SetTitleSize(0.07);
   all__11->GetZaxis()->SetTitleOffset(1.2);
   all__11->GetZaxis()->SetTitleFont(42);
   all__11->Draw("same");
   
   TLegend *leg = new TLegend(0.35,0.7,0.65,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Electron","Electron (no Brem)","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Photon","Photon","lp");

   ci = TColor::GetColor("#ff6666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff6666");
   entry->SetMarkerColor(ci);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Pion","Pion","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("NeutralHadron","NeutralHadron","lp");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Muon","Muon","lp");

   ci = TColor::GetColor("#00cccc");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   entry->SetMarkerColor(ci);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("all","All","lp");

   ci = TColor::GetColor("#990000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#990000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
