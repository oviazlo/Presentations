void nPFOs_vs_theta_electron_E10_failType()
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
   
   TH1D *Electron__1 = new TH1D("Electron__1","nElectrons vs Cos(#Theta)",90,-1,1);
   Electron__1->SetMinimum(0);
   Electron__1->SetMaximum(2.5);
   Electron__1->SetStats(0);
   Electron__1->SetLineWidth(2);
   Electron__1->SetMarkerStyle(0);
   Electron__1->SetMarkerSize(1.2);
   Electron__1->GetXaxis()->SetTitle(" Cos(#Theta)");
   Electron__1->GetXaxis()->SetRange(1,360);
   Electron__1->GetXaxis()->SetNdivisions(506);
   Electron__1->GetXaxis()->SetLabelFont(42);
   Electron__1->GetXaxis()->SetLabelOffset(0.015);
   Electron__1->GetXaxis()->SetLabelSize(0.06);
   Electron__1->GetXaxis()->SetTitleSize(0.07);
   Electron__1->GetXaxis()->SetTitleFont(42);
   Electron__1->GetYaxis()->SetTitle("nPFOs");
   Electron__1->GetYaxis()->SetNdivisions(506);
   Electron__1->GetYaxis()->SetLabelFont(42);
   Electron__1->GetYaxis()->SetLabelOffset(0.015);
   Electron__1->GetYaxis()->SetLabelSize(0.06);
   Electron__1->GetYaxis()->SetTitleSize(0.07);
   Electron__1->GetYaxis()->SetTitleOffset(1.2);
   Electron__1->GetYaxis()->SetTitleFont(42);
   Electron__1->GetZaxis()->SetLabelFont(42);
   Electron__1->GetZaxis()->SetLabelOffset(0.015);
   Electron__1->GetZaxis()->SetLabelSize(0.06);
   Electron__1->GetZaxis()->SetTitleSize(0.07);
   Electron__1->GetZaxis()->SetTitleOffset(1.2);
   Electron__1->GetZaxis()->SetTitleFont(42);
   Electron__1->Draw("");
   
   TH1D *Photon__2 = new TH1D("Photon__2","nPhotons vs Cos(#Theta)",90,-1,1);
   Photon__2->SetBinContent(1,0.9376832);
   Photon__2->SetBinContent(2,2.085908);
   Photon__2->SetBinContent(3,2.218582);
   Photon__2->SetBinContent(4,2.224351);
   Photon__2->SetBinContent(5,2.275754);
   Photon__2->SetBinContent(6,2.182224);
   Photon__2->SetBinContent(7,2.2264);
   Photon__2->SetBinContent(8,2.127645);
   Photon__2->SetBinContent(9,2.185473);
   Photon__2->SetBinContent(10,2.190797);
   Photon__2->SetBinContent(11,2.315793);
   Photon__2->SetBinContent(12,2.225717);
   Photon__2->SetBinContent(13,2.119434);
   Photon__2->SetBinContent(14,1.536374);
   Photon__2->SetBinContent(15,2.144549);
   Photon__2->SetBinContent(16,2.19119);
   Photon__2->SetBinContent(17,2.142264);
   Photon__2->SetBinContent(18,1.982067);
   Photon__2->SetBinContent(19,2.094524);
   Photon__2->SetBinContent(20,1.968117);
   Photon__2->SetBinContent(21,1.957502);
   Photon__2->SetBinContent(22,1.998859);
   Photon__2->SetBinContent(23,1.885023);
   Photon__2->SetBinContent(24,1.897306);
   Photon__2->SetBinContent(25,1.917675);
   Photon__2->SetBinContent(26,1.855827);
   Photon__2->SetBinContent(27,1.984347);
   Photon__2->SetBinContent(28,1.902116);
   Photon__2->SetBinContent(29,1.941941);
   Photon__2->SetBinContent(30,1.910017);
   Photon__2->SetBinContent(31,1.832486);
   Photon__2->SetBinContent(32,1.928649);
   Photon__2->SetBinContent(33,1.809661);
   Photon__2->SetBinContent(34,1.814177);
   Photon__2->SetBinContent(35,1.951229);
   Photon__2->SetBinContent(36,1.930639);
   Photon__2->SetBinContent(37,1.86643);
   Photon__2->SetBinContent(38,1.820223);
   Photon__2->SetBinContent(39,1.873779);
   Photon__2->SetBinContent(40,1.879507);
   Photon__2->SetBinContent(41,1.969244);
   Photon__2->SetBinContent(42,1.89061);
   Photon__2->SetBinContent(43,1.810994);
   Photon__2->SetBinContent(44,1.881541);
   Photon__2->SetBinContent(45,1.685996);
   Photon__2->SetBinContent(46,1.870455);
   Photon__2->SetBinContent(47,1.972555);
   Photon__2->SetBinContent(48,1.901507);
   Photon__2->SetBinContent(49,1.86639);
   Photon__2->SetBinContent(50,1.89027);
   Photon__2->SetBinContent(51,1.835383);
   Photon__2->SetBinContent(52,1.834474);
   Photon__2->SetBinContent(53,1.861412);
   Photon__2->SetBinContent(54,1.867861);
   Photon__2->SetBinContent(55,1.798692);
   Photon__2->SetBinContent(56,1.954949);
   Photon__2->SetBinContent(57,1.887054);
   Photon__2->SetBinContent(58,1.895053);
   Photon__2->SetBinContent(59,1.925601);
   Photon__2->SetBinContent(60,1.96397);
   Photon__2->SetBinContent(61,1.993606);
   Photon__2->SetBinContent(62,2.049195);
   Photon__2->SetBinContent(63,1.926596);
   Photon__2->SetBinContent(64,1.936968);
   Photon__2->SetBinContent(65,2.010635);
   Photon__2->SetBinContent(66,1.991341);
   Photon__2->SetBinContent(67,1.861601);
   Photon__2->SetBinContent(68,1.894035);
   Photon__2->SetBinContent(69,1.892266);
   Photon__2->SetBinContent(70,2.129531);
   Photon__2->SetBinContent(71,2.020434);
   Photon__2->SetBinContent(72,1.943027);
   Photon__2->SetBinContent(73,2.000399);
   Photon__2->SetBinContent(74,2.065993);
   Photon__2->SetBinContent(75,2.021889);
   Photon__2->SetBinContent(76,2.134179);
   Photon__2->SetBinContent(77,1.437118);
   Photon__2->SetBinContent(78,1.972115);
   Photon__2->SetBinContent(79,2.162637);
   Photon__2->SetBinContent(80,2.016889);
   Photon__2->SetBinContent(81,2.102085);
   Photon__2->SetBinContent(82,1.957791);
   Photon__2->SetBinContent(83,2.107624);
   Photon__2->SetBinContent(84,2.137282);
   Photon__2->SetBinContent(85,2.115843);
   Photon__2->SetBinContent(86,2.297359);
   Photon__2->SetBinContent(87,2.1208);
   Photon__2->SetBinContent(88,2.023611);
   Photon__2->SetBinContent(89,2.112821);
   Photon__2->SetBinContent(90,0.9904057);
   Photon__2->SetEntries(7371.089);
   Photon__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6666");
   Photon__2->SetLineColor(ci);
   Photon__2->SetLineWidth(2);

   ci = TColor::GetColor("#ff6666");
   Photon__2->SetMarkerColor(ci);
   Photon__2->SetMarkerStyle(0);
   Photon__2->SetMarkerSize(1.2);
   Photon__2->GetXaxis()->SetTitle(" Cos(#Theta)");
   Photon__2->GetXaxis()->SetRange(1,360);
   Photon__2->GetXaxis()->SetNdivisions(506);
   Photon__2->GetXaxis()->SetLabelFont(42);
   Photon__2->GetXaxis()->SetLabelOffset(0.015);
   Photon__2->GetXaxis()->SetLabelSize(0.06);
   Photon__2->GetXaxis()->SetTitleSize(0.07);
   Photon__2->GetXaxis()->SetTitleFont(42);
   Photon__2->GetYaxis()->SetTitle(" Counts per Event");
   Photon__2->GetYaxis()->SetNdivisions(506);
   Photon__2->GetYaxis()->SetLabelFont(42);
   Photon__2->GetYaxis()->SetLabelOffset(0.015);
   Photon__2->GetYaxis()->SetLabelSize(0.06);
   Photon__2->GetYaxis()->SetTitleSize(0.07);
   Photon__2->GetYaxis()->SetTitleOffset(1.2);
   Photon__2->GetYaxis()->SetTitleFont(42);
   Photon__2->GetZaxis()->SetLabelFont(42);
   Photon__2->GetZaxis()->SetLabelOffset(0.015);
   Photon__2->GetZaxis()->SetLabelSize(0.06);
   Photon__2->GetZaxis()->SetTitleSize(0.07);
   Photon__2->GetZaxis()->SetTitleOffset(1.2);
   Photon__2->GetZaxis()->SetTitleFont(42);
   Photon__2->Draw("same");
   
   TH1D *Pion__3 = new TH1D("Pion__3","nPions vs Cos(#Theta)",90,-1,1);
   Pion__3->SetBinContent(1,0.195484);
   Pion__3->SetBinContent(2,0.397019);
   Pion__3->SetBinContent(3,0.301674);
   Pion__3->SetBinContent(4,0.3849668);
   Pion__3->SetBinContent(5,0.3378467);
   Pion__3->SetBinContent(6,0.3086875);
   Pion__3->SetBinContent(7,0.3598497);
   Pion__3->SetBinContent(8,0.3929038);
   Pion__3->SetBinContent(9,0.3062587);
   Pion__3->SetBinContent(10,0.3442029);
   Pion__3->SetBinContent(11,0.4060417);
   Pion__3->SetBinContent(12,0.3534776);
   Pion__3->SetBinContent(13,0.4128104);
   Pion__3->SetBinContent(14,0.6160421);
   Pion__3->SetBinContent(15,0.3861336);
   Pion__3->SetBinContent(16,0.3476832);
   Pion__3->SetBinContent(17,0.328975);
   Pion__3->SetBinContent(18,0.3879686);
   Pion__3->SetBinContent(19,0.3152776);
   Pion__3->SetBinContent(20,0.3445455);
   Pion__3->SetBinContent(21,0.2632641);
   Pion__3->SetBinContent(22,0.3075466);
   Pion__3->SetBinContent(23,0.2856512);
   Pion__3->SetBinContent(24,0.3535797);
   Pion__3->SetBinContent(25,0.2784773);
   Pion__3->SetBinContent(26,0.3443264);
   Pion__3->SetBinContent(27,0.2937984);
   Pion__3->SetBinContent(28,0.304828);
   Pion__3->SetBinContent(29,0.2724524);
   Pion__3->SetBinContent(30,0.2970118);
   Pion__3->SetBinContent(31,0.3191978);
   Pion__3->SetBinContent(32,0.2674701);
   Pion__3->SetBinContent(33,0.3088675);
   Pion__3->SetBinContent(34,0.4330472);
   Pion__3->SetBinContent(35,0.2988248);
   Pion__3->SetBinContent(36,0.320614);
   Pion__3->SetBinContent(37,0.346302);
   Pion__3->SetBinContent(38,0.275564);
   Pion__3->SetBinContent(39,0.2800672);
   Pion__3->SetBinContent(40,0.2711465);
   Pion__3->SetBinContent(41,0.2645102);
   Pion__3->SetBinContent(42,0.3439107);
   Pion__3->SetBinContent(43,0.3466389);
   Pion__3->SetBinContent(44,0.3253057);
   Pion__3->SetBinContent(45,0.272619);
   Pion__3->SetBinContent(46,0.2604653);
   Pion__3->SetBinContent(47,0.3313543);
   Pion__3->SetBinContent(48,0.3078512);
   Pion__3->SetBinContent(49,0.3047035);
   Pion__3->SetBinContent(50,0.3062271);
   Pion__3->SetBinContent(51,0.3231014);
   Pion__3->SetBinContent(52,0.29805);
   Pion__3->SetBinContent(53,0.2765065);
   Pion__3->SetBinContent(54,0.313919);
   Pion__3->SetBinContent(55,0.2780124);
   Pion__3->SetBinContent(56,0.2975829);
   Pion__3->SetBinContent(57,0.2610119);
   Pion__3->SetBinContent(58,0.3217469);
   Pion__3->SetBinContent(59,0.2490919);
   Pion__3->SetBinContent(60,0.2171558);
   Pion__3->SetBinContent(61,0.2983591);
   Pion__3->SetBinContent(62,0.2686473);
   Pion__3->SetBinContent(63,0.3252898);
   Pion__3->SetBinContent(64,0.3136611);
   Pion__3->SetBinContent(65,0.3270013);
   Pion__3->SetBinContent(66,0.2453968);
   Pion__3->SetBinContent(67,0.2718928);
   Pion__3->SetBinContent(68,0.2360106);
   Pion__3->SetBinContent(69,0.303344);
   Pion__3->SetBinContent(70,0.2888637);
   Pion__3->SetBinContent(71,0.3051134);
   Pion__3->SetBinContent(72,0.2643096);
   Pion__3->SetBinContent(73,0.336494);
   Pion__3->SetBinContent(74,0.3231249);
   Pion__3->SetBinContent(75,0.3783497);
   Pion__3->SetBinContent(76,0.3519017);
   Pion__3->SetBinContent(77,0.6652522);
   Pion__3->SetBinContent(78,0.399359);
   Pion__3->SetBinContent(79,0.321948);
   Pion__3->SetBinContent(80,0.3215325);
   Pion__3->SetBinContent(81,0.3273841);
   Pion__3->SetBinContent(82,0.3540576);
   Pion__3->SetBinContent(83,0.314454);
   Pion__3->SetBinContent(84,0.3395882);
   Pion__3->SetBinContent(85,0.3365828);
   Pion__3->SetBinContent(86,0.3226831);
   Pion__3->SetBinContent(87,0.3643543);
   Pion__3->SetBinContent(88,0.2988426);
   Pion__3->SetBinContent(89,0.3616415);
   Pion__3->SetBinContent(90,0.125);
   Pion__3->SetEntries(3013.876);
   Pion__3->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Pion__3->SetLineColor(ci);
   Pion__3->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   Pion__3->SetMarkerColor(ci);
   Pion__3->SetMarkerStyle(0);
   Pion__3->SetMarkerSize(1.2);
   Pion__3->GetXaxis()->SetTitle(" Cos(#Theta)");
   Pion__3->GetXaxis()->SetRange(1,360);
   Pion__3->GetXaxis()->SetNdivisions(506);
   Pion__3->GetXaxis()->SetLabelFont(42);
   Pion__3->GetXaxis()->SetLabelOffset(0.015);
   Pion__3->GetXaxis()->SetLabelSize(0.06);
   Pion__3->GetXaxis()->SetTitleSize(0.07);
   Pion__3->GetXaxis()->SetTitleFont(42);
   Pion__3->GetYaxis()->SetTitle(" Counts per Event");
   Pion__3->GetYaxis()->SetNdivisions(506);
   Pion__3->GetYaxis()->SetLabelFont(42);
   Pion__3->GetYaxis()->SetLabelOffset(0.015);
   Pion__3->GetYaxis()->SetLabelSize(0.06);
   Pion__3->GetYaxis()->SetTitleSize(0.07);
   Pion__3->GetYaxis()->SetTitleOffset(1.2);
   Pion__3->GetYaxis()->SetTitleFont(42);
   Pion__3->GetZaxis()->SetLabelFont(42);
   Pion__3->GetZaxis()->SetLabelOffset(0.015);
   Pion__3->GetZaxis()->SetLabelSize(0.06);
   Pion__3->GetZaxis()->SetTitleSize(0.07);
   Pion__3->GetZaxis()->SetTitleOffset(1.2);
   Pion__3->GetZaxis()->SetTitleFont(42);
   Pion__3->Draw("same");
   
   TH1D *NeutralHadron__4 = new TH1D("NeutralHadron__4","nNeutralHadrons vs Cos(#Theta)",90,-1,1);
   NeutralHadron__4->SetBinContent(1,0.1461794);
   NeutralHadron__4->SetBinContent(2,0.005555556);
   NeutralHadron__4->SetBinContent(3,0.005555556);
   NeutralHadron__4->SetBinContent(4,0.07413779);
   NeutralHadron__4->SetBinContent(5,0.0674587);
   NeutralHadron__4->SetBinContent(6,0.1498151);
   NeutralHadron__4->SetBinContent(7,0.1082899);
   NeutralHadron__4->SetBinContent(8,0.1283438);
   NeutralHadron__4->SetBinContent(9,0.1576335);
   NeutralHadron__4->SetBinContent(10,0.1584783);
   NeutralHadron__4->SetBinContent(11,0.2154204);
   NeutralHadron__4->SetBinContent(12,0.2057314);
   NeutralHadron__4->SetBinContent(13,0.2045418);
   NeutralHadron__4->SetBinContent(14,0.2206563);
   NeutralHadron__4->SetBinContent(15,0.1683581);
   NeutralHadron__4->SetBinContent(16,0.1798736);
   NeutralHadron__4->SetBinContent(17,0.1842424);
   NeutralHadron__4->SetBinContent(18,0.1490628);
   NeutralHadron__4->SetBinContent(19,0.09487773);
   NeutralHadron__4->SetBinContent(20,0.143658);
   NeutralHadron__4->SetBinContent(21,0.1373459);
   NeutralHadron__4->SetBinContent(22,0.1372399);
   NeutralHadron__4->SetBinContent(23,0.1297646);
   NeutralHadron__4->SetBinContent(24,0.1217793);
   NeutralHadron__4->SetBinContent(25,0.1008363);
   NeutralHadron__4->SetBinContent(26,0.1121343);
   NeutralHadron__4->SetBinContent(27,0.07641622);
   NeutralHadron__4->SetBinContent(28,0.1680556);
   NeutralHadron__4->SetBinContent(29,0.08811168);
   NeutralHadron__4->SetBinContent(30,0.06809764);
   NeutralHadron__4->SetBinContent(31,0.09964607);
   NeutralHadron__4->SetBinContent(32,0.12772);
   NeutralHadron__4->SetBinContent(33,0.09114774);
   NeutralHadron__4->SetBinContent(34,0.1050778);
   NeutralHadron__4->SetBinContent(35,0.06860755);
   NeutralHadron__4->SetBinContent(36,0.09238722);
   NeutralHadron__4->SetBinContent(37,0.05612219);
   NeutralHadron__4->SetBinContent(38,0.114699);
   NeutralHadron__4->SetBinContent(39,0.1105515);
   NeutralHadron__4->SetBinContent(40,0.07270836);
   NeutralHadron__4->SetBinContent(41,0.06120005);
   NeutralHadron__4->SetBinContent(42,0.07610031);
   NeutralHadron__4->SetBinContent(43,0.06781525);
   NeutralHadron__4->SetBinContent(44,0.09681789);
   NeutralHadron__4->SetBinContent(45,0.1182035);
   NeutralHadron__4->SetBinContent(46,0.08206894);
   NeutralHadron__4->SetBinContent(47,0.04436856);
   NeutralHadron__4->SetBinContent(48,0.1025697);
   NeutralHadron__4->SetBinContent(49,0.0819679);
   NeutralHadron__4->SetBinContent(50,0.08026557);
   NeutralHadron__4->SetBinContent(51,0.1055829);
   NeutralHadron__4->SetBinContent(52,0.09348076);
   NeutralHadron__4->SetBinContent(53,0.1180033);
   NeutralHadron__4->SetBinContent(54,0.08542965);
   NeutralHadron__4->SetBinContent(55,0.1150952);
   NeutralHadron__4->SetBinContent(56,0.05990228);
   NeutralHadron__4->SetBinContent(57,0.08459821);
   NeutralHadron__4->SetBinContent(58,0.07442068);
   NeutralHadron__4->SetBinContent(59,0.1034322);
   NeutralHadron__4->SetBinContent(60,0.09898765);
   NeutralHadron__4->SetBinContent(61,0.06591712);
   NeutralHadron__4->SetBinContent(62,0.05379018);
   NeutralHadron__4->SetBinContent(63,0.09147107);
   NeutralHadron__4->SetBinContent(64,0.07511277);
   NeutralHadron__4->SetBinContent(65,0.07756623);
   NeutralHadron__4->SetBinContent(66,0.1184734);
   NeutralHadron__4->SetBinContent(67,0.1089615);
   NeutralHadron__4->SetBinContent(68,0.119858);
   NeutralHadron__4->SetBinContent(69,0.08465999);
   NeutralHadron__4->SetBinContent(70,0.1259708);
   NeutralHadron__4->SetBinContent(71,0.1042768);
   NeutralHadron__4->SetBinContent(72,0.1732128);
   NeutralHadron__4->SetBinContent(73,0.1168111);
   NeutralHadron__4->SetBinContent(74,0.1143938);
   NeutralHadron__4->SetBinContent(75,0.1911765);
   NeutralHadron__4->SetBinContent(76,0.1664624);
   NeutralHadron__4->SetBinContent(77,0.1195366);
   NeutralHadron__4->SetBinContent(78,0.1878205);
   NeutralHadron__4->SetBinContent(79,0.1872608);
   NeutralHadron__4->SetBinContent(80,0.1689477);
   NeutralHadron__4->SetBinContent(81,0.1482717);
   NeutralHadron__4->SetBinContent(82,0.1584373);
   NeutralHadron__4->SetBinContent(83,0.1168882);
   NeutralHadron__4->SetBinContent(84,0.05209797);
   NeutralHadron__4->SetBinContent(85,0.1062462);
   NeutralHadron__4->SetBinContent(86,0.1036606);
   NeutralHadron__4->SetBinContent(87,0.0705158);
   NeutralHadron__4->SetBinContent(88,0.03726852);
   NeutralHadron__4->SetBinContent(89,0.007142857);
   NeutralHadron__4->SetBinContent(90,0.09210526);
   NeutralHadron__4->SetEntries(1302.223);
   NeutralHadron__4->SetStats(0);

   ci = TColor::GetColor("#009900");
   NeutralHadron__4->SetLineColor(ci);
   NeutralHadron__4->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   NeutralHadron__4->SetMarkerColor(ci);
   NeutralHadron__4->SetMarkerStyle(0);
   NeutralHadron__4->SetMarkerSize(1.2);
   NeutralHadron__4->GetXaxis()->SetTitle(" Cos(#Theta)");
   NeutralHadron__4->GetXaxis()->SetRange(1,360);
   NeutralHadron__4->GetXaxis()->SetNdivisions(506);
   NeutralHadron__4->GetXaxis()->SetLabelFont(42);
   NeutralHadron__4->GetXaxis()->SetLabelOffset(0.015);
   NeutralHadron__4->GetXaxis()->SetLabelSize(0.06);
   NeutralHadron__4->GetXaxis()->SetTitleSize(0.07);
   NeutralHadron__4->GetXaxis()->SetTitleFont(42);
   NeutralHadron__4->GetYaxis()->SetTitle(" Counts per Event");
   NeutralHadron__4->GetYaxis()->SetNdivisions(506);
   NeutralHadron__4->GetYaxis()->SetLabelFont(42);
   NeutralHadron__4->GetYaxis()->SetLabelOffset(0.015);
   NeutralHadron__4->GetYaxis()->SetLabelSize(0.06);
   NeutralHadron__4->GetYaxis()->SetTitleSize(0.07);
   NeutralHadron__4->GetYaxis()->SetTitleOffset(1.2);
   NeutralHadron__4->GetYaxis()->SetTitleFont(42);
   NeutralHadron__4->GetZaxis()->SetLabelFont(42);
   NeutralHadron__4->GetZaxis()->SetLabelOffset(0.015);
   NeutralHadron__4->GetZaxis()->SetLabelSize(0.06);
   NeutralHadron__4->GetZaxis()->SetTitleSize(0.07);
   NeutralHadron__4->GetZaxis()->SetTitleOffset(1.2);
   NeutralHadron__4->GetZaxis()->SetTitleFont(42);
   NeutralHadron__4->Draw("same");
   
   TH1D *Muon__5 = new TH1D("Muon__5","nMuons vs Cos(#Theta)",90,-1,1);
   Muon__5->SetStats(0);

   ci = TColor::GetColor("#00cccc");
   Muon__5->SetLineColor(ci);
   Muon__5->SetLineWidth(2);

   ci = TColor::GetColor("#00cccc");
   Muon__5->SetMarkerColor(ci);
   Muon__5->SetMarkerStyle(0);
   Muon__5->SetMarkerSize(1.2);
   Muon__5->GetXaxis()->SetTitle(" Cos(#Theta)");
   Muon__5->GetXaxis()->SetRange(1,360);
   Muon__5->GetXaxis()->SetNdivisions(506);
   Muon__5->GetXaxis()->SetLabelFont(42);
   Muon__5->GetXaxis()->SetLabelOffset(0.015);
   Muon__5->GetXaxis()->SetLabelSize(0.06);
   Muon__5->GetXaxis()->SetTitleSize(0.07);
   Muon__5->GetXaxis()->SetTitleFont(42);
   Muon__5->GetYaxis()->SetTitle(" Counts per Event");
   Muon__5->GetYaxis()->SetNdivisions(506);
   Muon__5->GetYaxis()->SetLabelFont(42);
   Muon__5->GetYaxis()->SetLabelOffset(0.015);
   Muon__5->GetYaxis()->SetLabelSize(0.06);
   Muon__5->GetYaxis()->SetTitleSize(0.07);
   Muon__5->GetYaxis()->SetTitleOffset(1.2);
   Muon__5->GetYaxis()->SetTitleFont(42);
   Muon__5->GetZaxis()->SetLabelFont(42);
   Muon__5->GetZaxis()->SetLabelOffset(0.015);
   Muon__5->GetZaxis()->SetLabelSize(0.06);
   Muon__5->GetZaxis()->SetTitleSize(0.07);
   Muon__5->GetZaxis()->SetTitleOffset(1.2);
   Muon__5->GetZaxis()->SetTitleFont(42);
   Muon__5->Draw("same");
   
   TLegend *leg = new TLegend(0.35,0.5,0.65,0.7,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Electron","Electron (no electron PFO)","lp");
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
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
