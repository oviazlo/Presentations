void overlay_energyVsRadius_Z()
{
//=========Macro generated from canvas: c1/A Simple Graph Example
//=========  (Mon Jul 23 13:53:44 2018) by ROOT version6.08/00
   TCanvas *c1 = new TCanvas("c1", "A Simple Graph Example",2,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-680,-0.8513514,3320,3.878378);
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
   
   TH1D *energyVsZ__1 = new TH1D("energyVsZ__1","Hit Energy vs Z",160,-4000,4000);
   energyVsZ__1->SetBinContent(36,0.03814018);
   energyVsZ__1->SetBinContent(37,0.1237944);
   energyVsZ__1->SetBinContent(38,0.2474746);
   energyVsZ__1->SetBinContent(39,0.1561226);
   energyVsZ__1->SetBinContent(40,0.1841106);
   energyVsZ__1->SetBinContent(41,0.1562235);
   energyVsZ__1->SetBinContent(42,0.07613065);
   energyVsZ__1->SetBinContent(43,0.2053866);
   energyVsZ__1->SetBinContent(44,0.2014262);
   energyVsZ__1->SetBinContent(45,0.1054654);
   energyVsZ__1->SetBinContent(46,0.2076075);
   energyVsZ__1->SetBinContent(47,0.1390461);
   energyVsZ__1->SetBinContent(48,0.1963332);
   energyVsZ__1->SetBinContent(49,0.2039436);
   energyVsZ__1->SetBinContent(50,0.09255251);
   energyVsZ__1->SetBinContent(51,0.2436828);
   energyVsZ__1->SetBinContent(52,0.1548376);
   energyVsZ__1->SetBinContent(53,0.1656365);
   energyVsZ__1->SetBinContent(54,0.114661);
   energyVsZ__1->SetBinContent(55,0.07600811);
   energyVsZ__1->SetBinContent(56,0.2667464);
   energyVsZ__1->SetBinContent(57,0.2856726);
   energyVsZ__1->SetBinContent(58,0.1736428);
   energyVsZ__1->SetBinContent(59,0.1746627);
   energyVsZ__1->SetBinContent(60,0.08032206);
   energyVsZ__1->SetBinContent(61,0.09681783);
   energyVsZ__1->SetBinContent(62,0.1764077);
   energyVsZ__1->SetBinContent(63,0.08595003);
   energyVsZ__1->SetBinContent(64,0.139403);
   energyVsZ__1->SetBinContent(65,0.121176);
   energyVsZ__1->SetBinContent(66,0.09245234);
   energyVsZ__1->SetBinContent(67,0.07792758);
   energyVsZ__1->SetBinContent(68,0.1109927);
   energyVsZ__1->SetBinContent(69,0.04077097);
   energyVsZ__1->SetBinContent(70,0.1668643);
   energyVsZ__1->SetBinContent(71,0.0856287);
   energyVsZ__1->SetBinContent(72,0.1598841);
   energyVsZ__1->SetBinContent(73,0.1637856);
   energyVsZ__1->SetBinContent(74,0.07180131);
   energyVsZ__1->SetBinContent(75,0.09225254);
   energyVsZ__1->SetBinContent(76,0.197706);
   energyVsZ__1->SetBinContent(77,0.0918822);
   energyVsZ__1->SetBinContent(78,0.08995044);
   energyVsZ__1->SetBinContent(79,0.06700143);
   energyVsZ__1->SetBinContent(80,0.1270099);
   energyVsZ__1->SetBinContent(81,0.1308913);
   energyVsZ__1->SetBinContent(82,0.1489162);
   energyVsZ__1->SetBinContent(83,0.1956753);
   energyVsZ__1->SetBinContent(84,0.1566315);
   energyVsZ__1->SetBinContent(85,0.1115593);
   energyVsZ__1->SetBinContent(86,0.1418056);
   energyVsZ__1->SetBinContent(87,0.09745162);
   energyVsZ__1->SetBinContent(88,0.1158277);
   energyVsZ__1->SetBinContent(89,0.08054656);
   energyVsZ__1->SetBinContent(90,0.1174257);
   energyVsZ__1->SetBinContent(91,0.1338634);
   energyVsZ__1->SetBinContent(92,0.1422742);
   energyVsZ__1->SetBinContent(93,0.0633649);
   energyVsZ__1->SetBinContent(94,0.1071708);
   energyVsZ__1->SetBinContent(95,0.1377803);
   energyVsZ__1->SetBinContent(96,0.08135502);
   energyVsZ__1->SetBinContent(97,0.1073288);
   energyVsZ__1->SetBinContent(98,0.1215873);
   energyVsZ__1->SetBinContent(99,0.08847294);
   energyVsZ__1->SetBinContent(100,0.2492694);
   energyVsZ__1->SetBinContent(101,0.04768377);
   energyVsZ__1->SetBinContent(102,0.2041893);
   energyVsZ__1->SetBinContent(103,0.06907915);
   energyVsZ__1->SetBinContent(104,0.05120142);
   energyVsZ__1->SetBinContent(105,0.1501947);
   energyVsZ__1->SetBinContent(106,0.08193398);
   energyVsZ__1->SetBinContent(107,0.07995985);
   energyVsZ__1->SetBinContent(108,0.1200606);
   energyVsZ__1->SetBinContent(109,0.156144);
   energyVsZ__1->SetBinContent(110,0.1339625);
   energyVsZ__1->SetBinContent(111,0.1810405);
   energyVsZ__1->SetBinContent(112,0.1524928);
   energyVsZ__1->SetBinContent(113,0.1782416);
   energyVsZ__1->SetBinContent(114,0.2000433);
   energyVsZ__1->SetBinContent(115,0.1240615);
   energyVsZ__1->SetBinContent(116,0.2367298);
   energyVsZ__1->SetBinContent(117,0.1273491);
   energyVsZ__1->SetBinContent(118,0.2084572);
   energyVsZ__1->SetBinContent(119,0.1330697);
   energyVsZ__1->SetBinContent(120,0.0925365);
   energyVsZ__1->SetBinContent(121,0.1015975);
   energyVsZ__1->SetBinContent(122,0.1054203);
   energyVsZ__1->SetBinContent(123,0.08138926);
   energyVsZ__1->SetBinContent(124,0.2141096);
   energyVsZ__1->SetBinContent(125,0.03188611);
   energyVsZ__1->SetBinError(36,0.00786288);
   energyVsZ__1->SetBinError(37,0.01844524);
   energyVsZ__1->SetBinError(38,0.03010247);
   energyVsZ__1->SetBinError(39,0.01991587);
   energyVsZ__1->SetBinError(40,0.0193633);
   energyVsZ__1->SetBinError(41,0.02069851);
   energyVsZ__1->SetBinError(42,0.01294789);
   energyVsZ__1->SetBinError(43,0.02555469);
   energyVsZ__1->SetBinError(44,0.02217185);
   energyVsZ__1->SetBinError(45,0.01532624);
   energyVsZ__1->SetBinError(46,0.02243718);
   energyVsZ__1->SetBinError(47,0.02655536);
   energyVsZ__1->SetBinError(48,0.03316966);
   energyVsZ__1->SetBinError(49,0.02421936);
   energyVsZ__1->SetBinError(50,0.01259091);
   energyVsZ__1->SetBinError(51,0.0294681);
   energyVsZ__1->SetBinError(52,0.02392505);
   energyVsZ__1->SetBinError(53,0.02217315);
   energyVsZ__1->SetBinError(54,0.01949241);
   energyVsZ__1->SetBinError(55,0.01513196);
   energyVsZ__1->SetBinError(56,0.02824974);
   energyVsZ__1->SetBinError(57,0.0430498);
   energyVsZ__1->SetBinError(58,0.01853362);
   energyVsZ__1->SetBinError(59,0.02796478);
   energyVsZ__1->SetBinError(60,0.01205227);
   energyVsZ__1->SetBinError(61,0.01478641);
   energyVsZ__1->SetBinError(62,0.02598878);
   energyVsZ__1->SetBinError(63,0.01496004);
   energyVsZ__1->SetBinError(64,0.01719017);
   energyVsZ__1->SetBinError(65,0.01950152);
   energyVsZ__1->SetBinError(66,0.01552263);
   energyVsZ__1->SetBinError(67,0.01269161);
   energyVsZ__1->SetBinError(68,0.01685436);
   energyVsZ__1->SetBinError(69,0.007288168);
   energyVsZ__1->SetBinError(70,0.02337193);
   energyVsZ__1->SetBinError(71,0.01378836);
   energyVsZ__1->SetBinError(72,0.02125487);
   energyVsZ__1->SetBinError(73,0.01705253);
   energyVsZ__1->SetBinError(74,0.01356039);
   energyVsZ__1->SetBinError(75,0.01745235);
   energyVsZ__1->SetBinError(76,0.02252988);
   energyVsZ__1->SetBinError(77,0.01496875);
   energyVsZ__1->SetBinError(78,0.01465266);
   energyVsZ__1->SetBinError(79,0.01051633);
   energyVsZ__1->SetBinError(80,0.0216159);
   energyVsZ__1->SetBinError(81,0.01529936);
   energyVsZ__1->SetBinError(82,0.01998999);
   energyVsZ__1->SetBinError(83,0.0238789);
   energyVsZ__1->SetBinError(84,0.02294446);
   energyVsZ__1->SetBinError(85,0.01498291);
   energyVsZ__1->SetBinError(86,0.01867949);
   energyVsZ__1->SetBinError(87,0.01284006);
   energyVsZ__1->SetBinError(88,0.01751717);
   energyVsZ__1->SetBinError(89,0.0126599);
   energyVsZ__1->SetBinError(90,0.01312018);
   energyVsZ__1->SetBinError(91,0.01664387);
   energyVsZ__1->SetBinError(92,0.02296368);
   energyVsZ__1->SetBinError(93,0.01084001);
   energyVsZ__1->SetBinError(94,0.01413776);
   energyVsZ__1->SetBinError(95,0.02112567);
   energyVsZ__1->SetBinError(96,0.01207105);
   energyVsZ__1->SetBinError(97,0.01601386);
   energyVsZ__1->SetBinError(98,0.01800585);
   energyVsZ__1->SetBinError(99,0.01717414);
   energyVsZ__1->SetBinError(100,0.03658329);
   energyVsZ__1->SetBinError(101,0.008140468);
   energyVsZ__1->SetBinError(102,0.02253876);
   energyVsZ__1->SetBinError(103,0.01144142);
   energyVsZ__1->SetBinError(104,0.0076756);
   energyVsZ__1->SetBinError(105,0.01677858);
   energyVsZ__1->SetBinError(106,0.01402789);
   energyVsZ__1->SetBinError(107,0.01420773);
   energyVsZ__1->SetBinError(108,0.01622758);
   energyVsZ__1->SetBinError(109,0.01785944);
   energyVsZ__1->SetBinError(110,0.01832806);
   energyVsZ__1->SetBinError(111,0.0236471);
   energyVsZ__1->SetBinError(112,0.01897681);
   energyVsZ__1->SetBinError(113,0.02104635);
   energyVsZ__1->SetBinError(114,0.03779731);
   energyVsZ__1->SetBinError(115,0.01566572);
   energyVsZ__1->SetBinError(116,0.02354237);
   energyVsZ__1->SetBinError(117,0.01732113);
   energyVsZ__1->SetBinError(118,0.02319242);
   energyVsZ__1->SetBinError(119,0.02024181);
   energyVsZ__1->SetBinError(120,0.01474585);
   energyVsZ__1->SetBinError(121,0.01436412);
   energyVsZ__1->SetBinError(122,0.01741905);
   energyVsZ__1->SetBinError(123,0.01406555);
   energyVsZ__1->SetBinError(124,0.02716566);
   energyVsZ__1->SetBinError(125,0.006325372);
   energyVsZ__1->SetMinimum(0);
   energyVsZ__1->SetMaximum(3.5);
   energyVsZ__1->SetEntries(7028);
   energyVsZ__1->SetStats(0);
   energyVsZ__1->SetLineWidth(2);
   energyVsZ__1->SetMarkerStyle(24);
   energyVsZ__1->SetMarkerSize(1.2);
   energyVsZ__1->GetXaxis()->SetTitle(" Z [mm]");
   energyVsZ__1->GetXaxis()->SetRange(81,140);
   energyVsZ__1->GetXaxis()->SetNdivisions(506);
   energyVsZ__1->GetXaxis()->SetLabelFont(42);
   energyVsZ__1->GetXaxis()->SetLabelOffset(0.015);
   energyVsZ__1->GetXaxis()->SetLabelSize(0.06);
   energyVsZ__1->GetXaxis()->SetTitleSize(0.07);
   energyVsZ__1->GetXaxis()->SetTitleFont(42);
   energyVsZ__1->GetYaxis()->SetTitle(" Hit Energy [GeV / 50 mm]");
   energyVsZ__1->GetYaxis()->SetNdivisions(506);
   energyVsZ__1->GetYaxis()->SetLabelFont(42);
   energyVsZ__1->GetYaxis()->SetLabelOffset(0.015);
   energyVsZ__1->GetYaxis()->SetLabelSize(0.06);
   energyVsZ__1->GetYaxis()->SetTitleSize(0.07);
   energyVsZ__1->GetYaxis()->SetTitleOffset(1.2);
   energyVsZ__1->GetYaxis()->SetTitleFont(42);
   energyVsZ__1->GetZaxis()->SetLabelFont(42);
   energyVsZ__1->GetZaxis()->SetLabelOffset(0.015);
   energyVsZ__1->GetZaxis()->SetLabelSize(0.06);
   energyVsZ__1->GetZaxis()->SetTitleSize(0.07);
   energyVsZ__1->GetZaxis()->SetTitleOffset(1.2);
   energyVsZ__1->GetZaxis()->SetTitleFont(42);
   energyVsZ__1->Draw("");
   
   TH1D *energyVsZ__2 = new TH1D("energyVsZ__2","Hit Energy vs Z",160,-4000,4000);
   energyVsZ__2->SetBinContent(76,0.004170847);
   energyVsZ__2->SetBinContent(105,0.03504273);
   energyVsZ__2->SetBinContent(120,0.008573465);
   energyVsZ__2->SetBinContent(124,0.04128174);
   energyVsZ__2->SetBinError(76,0.002949234);
   energyVsZ__2->SetBinError(105,0.01430613);
   energyVsZ__2->SetBinError(120,0.006062355);
   energyVsZ__2->SetBinError(124,0.01846175);
   energyVsZ__2->SetEntries(15);
   energyVsZ__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6666");
   energyVsZ__2->SetLineColor(ci);
   energyVsZ__2->SetLineWidth(2);

   ci = TColor::GetColor("#ff6666");
   energyVsZ__2->SetMarkerColor(ci);
   energyVsZ__2->SetMarkerStyle(25);
   energyVsZ__2->SetMarkerSize(1.2);
   energyVsZ__2->GetXaxis()->SetTitle(" Z [mm]");
   energyVsZ__2->GetXaxis()->SetNdivisions(506);
   energyVsZ__2->GetXaxis()->SetLabelFont(42);
   energyVsZ__2->GetXaxis()->SetLabelOffset(0.015);
   energyVsZ__2->GetXaxis()->SetLabelSize(0.06);
   energyVsZ__2->GetXaxis()->SetTitleSize(0.07);
   energyVsZ__2->GetXaxis()->SetTitleFont(42);
   energyVsZ__2->GetYaxis()->SetTitle(" Hit Energy [GeV / 50 mm]");
   energyVsZ__2->GetYaxis()->SetNdivisions(506);
   energyVsZ__2->GetYaxis()->SetLabelFont(42);
   energyVsZ__2->GetYaxis()->SetLabelOffset(0.015);
   energyVsZ__2->GetYaxis()->SetLabelSize(0.06);
   energyVsZ__2->GetYaxis()->SetTitleSize(0.07);
   energyVsZ__2->GetYaxis()->SetTitleOffset(1.2);
   energyVsZ__2->GetYaxis()->SetTitleFont(42);
   energyVsZ__2->GetZaxis()->SetLabelFont(42);
   energyVsZ__2->GetZaxis()->SetLabelOffset(0.015);
   energyVsZ__2->GetZaxis()->SetLabelSize(0.06);
   energyVsZ__2->GetZaxis()->SetTitleSize(0.07);
   energyVsZ__2->GetZaxis()->SetTitleOffset(1.2);
   energyVsZ__2->GetZaxis()->SetTitleFont(42);
   energyVsZ__2->Draw("same");
   
   TLegend *leg = new TLegend(0.6,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("energyVsZ","ECAL Barrel","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("energyVsZ","HCAL Barrel","lp");

   ci = TColor::GetColor("#ff6666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff6666");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
