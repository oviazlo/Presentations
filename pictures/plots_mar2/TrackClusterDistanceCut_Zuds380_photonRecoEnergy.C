void TrackClusterDistanceCut_Zuds380_photonRecoEnergy()
{
//=========Macro generated from canvas: c1/A Simple Graph Example
//=========  (Mon Mar  5 13:11:02 2018) by ROOT version6.08/00
   TCanvas *c1 = new TCanvas("c1", "A Simple Graph Example",2,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-90.66667,-97.05406,442.6667,442.1351);
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
   
   TH1F *hist_pfoEnergyPhotons__1 = new TH1F("hist_pfoEnergyPhotons__1","hist_pfoEnergyPhotons",125,0,500);
   hist_pfoEnergyPhotons__1->SetBinContent(1,2);
   hist_pfoEnergyPhotons__1->SetBinContent(2,23);
   hist_pfoEnergyPhotons__1->SetBinContent(3,22);
   hist_pfoEnergyPhotons__1->SetBinContent(4,51);
   hist_pfoEnergyPhotons__1->SetBinContent(5,46);
   hist_pfoEnergyPhotons__1->SetBinContent(6,58);
   hist_pfoEnergyPhotons__1->SetBinContent(7,73);
   hist_pfoEnergyPhotons__1->SetBinContent(8,99);
   hist_pfoEnergyPhotons__1->SetBinContent(9,112);
   hist_pfoEnergyPhotons__1->SetBinContent(10,149);
   hist_pfoEnergyPhotons__1->SetBinContent(11,188);
   hist_pfoEnergyPhotons__1->SetBinContent(12,212);
   hist_pfoEnergyPhotons__1->SetBinContent(13,244);
   hist_pfoEnergyPhotons__1->SetBinContent(14,261);
   hist_pfoEnergyPhotons__1->SetBinContent(15,285);
   hist_pfoEnergyPhotons__1->SetBinContent(16,296);
   hist_pfoEnergyPhotons__1->SetBinContent(17,286);
   hist_pfoEnergyPhotons__1->SetBinContent(18,289);
   hist_pfoEnergyPhotons__1->SetBinContent(19,316);
   hist_pfoEnergyPhotons__1->SetBinContent(20,320);
   hist_pfoEnergyPhotons__1->SetBinContent(21,339);
   hist_pfoEnergyPhotons__1->SetBinContent(22,377);
   hist_pfoEnergyPhotons__1->SetBinContent(23,380);
   hist_pfoEnergyPhotons__1->SetBinContent(24,326);
   hist_pfoEnergyPhotons__1->SetBinContent(25,339);
   hist_pfoEnergyPhotons__1->SetBinContent(26,316);
   hist_pfoEnergyPhotons__1->SetBinContent(27,345);
   hist_pfoEnergyPhotons__1->SetBinContent(28,291);
   hist_pfoEnergyPhotons__1->SetBinContent(29,295);
   hist_pfoEnergyPhotons__1->SetBinContent(30,306);
   hist_pfoEnergyPhotons__1->SetBinContent(31,230);
   hist_pfoEnergyPhotons__1->SetBinContent(32,258);
   hist_pfoEnergyPhotons__1->SetBinContent(33,236);
   hist_pfoEnergyPhotons__1->SetBinContent(34,219);
   hist_pfoEnergyPhotons__1->SetBinContent(35,223);
   hist_pfoEnergyPhotons__1->SetBinContent(36,204);
   hist_pfoEnergyPhotons__1->SetBinContent(37,164);
   hist_pfoEnergyPhotons__1->SetBinContent(38,170);
   hist_pfoEnergyPhotons__1->SetBinContent(39,146);
   hist_pfoEnergyPhotons__1->SetBinContent(40,163);
   hist_pfoEnergyPhotons__1->SetBinContent(41,134);
   hist_pfoEnergyPhotons__1->SetBinContent(42,106);
   hist_pfoEnergyPhotons__1->SetBinContent(43,129);
   hist_pfoEnergyPhotons__1->SetBinContent(44,100);
   hist_pfoEnergyPhotons__1->SetBinContent(45,100);
   hist_pfoEnergyPhotons__1->SetBinContent(46,87);
   hist_pfoEnergyPhotons__1->SetBinContent(47,69);
   hist_pfoEnergyPhotons__1->SetBinContent(48,55);
   hist_pfoEnergyPhotons__1->SetBinContent(49,42);
   hist_pfoEnergyPhotons__1->SetBinContent(50,51);
   hist_pfoEnergyPhotons__1->SetBinContent(51,52);
   hist_pfoEnergyPhotons__1->SetBinContent(52,40);
   hist_pfoEnergyPhotons__1->SetBinContent(53,39);
   hist_pfoEnergyPhotons__1->SetBinContent(54,32);
   hist_pfoEnergyPhotons__1->SetBinContent(55,28);
   hist_pfoEnergyPhotons__1->SetBinContent(56,30);
   hist_pfoEnergyPhotons__1->SetBinContent(57,33);
   hist_pfoEnergyPhotons__1->SetBinContent(58,21);
   hist_pfoEnergyPhotons__1->SetBinContent(59,11);
   hist_pfoEnergyPhotons__1->SetBinContent(60,13);
   hist_pfoEnergyPhotons__1->SetBinContent(61,9);
   hist_pfoEnergyPhotons__1->SetBinContent(62,7);
   hist_pfoEnergyPhotons__1->SetBinContent(63,13);
   hist_pfoEnergyPhotons__1->SetBinContent(64,5);
   hist_pfoEnergyPhotons__1->SetBinContent(65,1);
   hist_pfoEnergyPhotons__1->SetBinContent(66,11);
   hist_pfoEnergyPhotons__1->SetBinContent(67,1);
   hist_pfoEnergyPhotons__1->SetBinContent(68,2);
   hist_pfoEnergyPhotons__1->SetBinContent(69,4);
   hist_pfoEnergyPhotons__1->SetBinContent(70,4);
   hist_pfoEnergyPhotons__1->SetBinContent(71,4);
   hist_pfoEnergyPhotons__1->SetBinContent(72,1);
   hist_pfoEnergyPhotons__1->SetBinContent(74,3);
   hist_pfoEnergyPhotons__1->SetBinContent(75,1);
   hist_pfoEnergyPhotons__1->SetBinContent(76,1);
   hist_pfoEnergyPhotons__1->SetBinContent(78,1);
   hist_pfoEnergyPhotons__1->SetBinContent(80,1);
   hist_pfoEnergyPhotons__1->SetEntries(9900);
   hist_pfoEnergyPhotons__1->SetStats(0);
   hist_pfoEnergyPhotons__1->SetLineWidth(2);
   hist_pfoEnergyPhotons__1->SetMarkerStyle(0);
   hist_pfoEnergyPhotons__1->SetMarkerSize(1.2);
   hist_pfoEnergyPhotons__1->GetXaxis()->SetTitle("Energy [GeV]");
   hist_pfoEnergyPhotons__1->GetXaxis()->SetRange(1,100);
   hist_pfoEnergyPhotons__1->GetXaxis()->SetNdivisions(506);
   hist_pfoEnergyPhotons__1->GetXaxis()->SetLabelFont(42);
   hist_pfoEnergyPhotons__1->GetXaxis()->SetLabelOffset(0.015);
   hist_pfoEnergyPhotons__1->GetXaxis()->SetLabelSize(0.06);
   hist_pfoEnergyPhotons__1->GetXaxis()->SetTitleSize(0.07);
   hist_pfoEnergyPhotons__1->GetXaxis()->SetTitleFont(42);
   hist_pfoEnergyPhotons__1->GetYaxis()->SetTitle("Counts");
   hist_pfoEnergyPhotons__1->GetYaxis()->SetNdivisions(506);
   hist_pfoEnergyPhotons__1->GetYaxis()->SetLabelFont(42);
   hist_pfoEnergyPhotons__1->GetYaxis()->SetLabelOffset(0.015);
   hist_pfoEnergyPhotons__1->GetYaxis()->SetLabelSize(0.06);
   hist_pfoEnergyPhotons__1->GetYaxis()->SetTitleSize(0.07);
   hist_pfoEnergyPhotons__1->GetYaxis()->SetTitleOffset(1.2);
   hist_pfoEnergyPhotons__1->GetYaxis()->SetTitleFont(42);
   hist_pfoEnergyPhotons__1->GetZaxis()->SetLabelFont(42);
   hist_pfoEnergyPhotons__1->GetZaxis()->SetLabelOffset(0.015);
   hist_pfoEnergyPhotons__1->GetZaxis()->SetLabelSize(0.06);
   hist_pfoEnergyPhotons__1->GetZaxis()->SetTitleSize(0.07);
   hist_pfoEnergyPhotons__1->GetZaxis()->SetTitleOffset(1.2);
   hist_pfoEnergyPhotons__1->GetZaxis()->SetTitleFont(42);
   hist_pfoEnergyPhotons__1->Draw("HIST");
   
   TH1F *hist_pfoEnergyPhotons__2 = new TH1F("hist_pfoEnergyPhotons__2","hist_pfoEnergyPhotons",125,0,500);
   hist_pfoEnergyPhotons__2->SetBinContent(1,1);
   hist_pfoEnergyPhotons__2->SetBinContent(2,14);
   hist_pfoEnergyPhotons__2->SetBinContent(3,35);
   hist_pfoEnergyPhotons__2->SetBinContent(4,48);
   hist_pfoEnergyPhotons__2->SetBinContent(5,65);
   hist_pfoEnergyPhotons__2->SetBinContent(6,70);
   hist_pfoEnergyPhotons__2->SetBinContent(7,92);
   hist_pfoEnergyPhotons__2->SetBinContent(8,124);
   hist_pfoEnergyPhotons__2->SetBinContent(9,153);
   hist_pfoEnergyPhotons__2->SetBinContent(10,167);
   hist_pfoEnergyPhotons__2->SetBinContent(11,185);
   hist_pfoEnergyPhotons__2->SetBinContent(12,212);
   hist_pfoEnergyPhotons__2->SetBinContent(13,249);
   hist_pfoEnergyPhotons__2->SetBinContent(14,276);
   hist_pfoEnergyPhotons__2->SetBinContent(15,279);
   hist_pfoEnergyPhotons__2->SetBinContent(16,335);
   hist_pfoEnergyPhotons__2->SetBinContent(17,319);
   hist_pfoEnergyPhotons__2->SetBinContent(18,340);
   hist_pfoEnergyPhotons__2->SetBinContent(19,351);
   hist_pfoEnergyPhotons__2->SetBinContent(20,387);
   hist_pfoEnergyPhotons__2->SetBinContent(21,334);
   hist_pfoEnergyPhotons__2->SetBinContent(22,334);
   hist_pfoEnergyPhotons__2->SetBinContent(23,335);
   hist_pfoEnergyPhotons__2->SetBinContent(24,365);
   hist_pfoEnergyPhotons__2->SetBinContent(25,324);
   hist_pfoEnergyPhotons__2->SetBinContent(26,303);
   hist_pfoEnergyPhotons__2->SetBinContent(27,330);
   hist_pfoEnergyPhotons__2->SetBinContent(28,300);
   hist_pfoEnergyPhotons__2->SetBinContent(29,252);
   hist_pfoEnergyPhotons__2->SetBinContent(30,263);
   hist_pfoEnergyPhotons__2->SetBinContent(31,246);
   hist_pfoEnergyPhotons__2->SetBinContent(32,271);
   hist_pfoEnergyPhotons__2->SetBinContent(33,222);
   hist_pfoEnergyPhotons__2->SetBinContent(34,228);
   hist_pfoEnergyPhotons__2->SetBinContent(35,202);
   hist_pfoEnergyPhotons__2->SetBinContent(36,178);
   hist_pfoEnergyPhotons__2->SetBinContent(37,165);
   hist_pfoEnergyPhotons__2->SetBinContent(38,174);
   hist_pfoEnergyPhotons__2->SetBinContent(39,155);
   hist_pfoEnergyPhotons__2->SetBinContent(40,135);
   hist_pfoEnergyPhotons__2->SetBinContent(41,136);
   hist_pfoEnergyPhotons__2->SetBinContent(42,122);
   hist_pfoEnergyPhotons__2->SetBinContent(43,107);
   hist_pfoEnergyPhotons__2->SetBinContent(44,97);
   hist_pfoEnergyPhotons__2->SetBinContent(45,87);
   hist_pfoEnergyPhotons__2->SetBinContent(46,79);
   hist_pfoEnergyPhotons__2->SetBinContent(47,69);
   hist_pfoEnergyPhotons__2->SetBinContent(48,52);
   hist_pfoEnergyPhotons__2->SetBinContent(49,51);
   hist_pfoEnergyPhotons__2->SetBinContent(50,48);
   hist_pfoEnergyPhotons__2->SetBinContent(51,54);
   hist_pfoEnergyPhotons__2->SetBinContent(52,48);
   hist_pfoEnergyPhotons__2->SetBinContent(53,30);
   hist_pfoEnergyPhotons__2->SetBinContent(54,27);
   hist_pfoEnergyPhotons__2->SetBinContent(55,29);
   hist_pfoEnergyPhotons__2->SetBinContent(56,22);
   hist_pfoEnergyPhotons__2->SetBinContent(57,20);
   hist_pfoEnergyPhotons__2->SetBinContent(58,15);
   hist_pfoEnergyPhotons__2->SetBinContent(59,9);
   hist_pfoEnergyPhotons__2->SetBinContent(60,12);
   hist_pfoEnergyPhotons__2->SetBinContent(61,7);
   hist_pfoEnergyPhotons__2->SetBinContent(62,13);
   hist_pfoEnergyPhotons__2->SetBinContent(63,5);
   hist_pfoEnergyPhotons__2->SetBinContent(64,8);
   hist_pfoEnergyPhotons__2->SetBinContent(65,6);
   hist_pfoEnergyPhotons__2->SetBinContent(66,5);
   hist_pfoEnergyPhotons__2->SetBinContent(67,2);
   hist_pfoEnergyPhotons__2->SetBinContent(68,3);
   hist_pfoEnergyPhotons__2->SetBinContent(69,5);
   hist_pfoEnergyPhotons__2->SetBinContent(72,3);
   hist_pfoEnergyPhotons__2->SetBinContent(73,3);
   hist_pfoEnergyPhotons__2->SetBinContent(74,3);
   hist_pfoEnergyPhotons__2->SetBinContent(77,3);
   hist_pfoEnergyPhotons__2->SetBinContent(79,1);
   hist_pfoEnergyPhotons__2->SetBinContent(80,1);
   hist_pfoEnergyPhotons__2->SetEntries(10000);
   hist_pfoEnergyPhotons__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6666");
   hist_pfoEnergyPhotons__2->SetLineColor(ci);
   hist_pfoEnergyPhotons__2->SetLineWidth(2);

   ci = TColor::GetColor("#ff6666");
   hist_pfoEnergyPhotons__2->SetMarkerColor(ci);
   hist_pfoEnergyPhotons__2->SetMarkerStyle(0);
   hist_pfoEnergyPhotons__2->SetMarkerSize(1.2);
   hist_pfoEnergyPhotons__2->GetXaxis()->SetRange(1,1000);
   hist_pfoEnergyPhotons__2->GetXaxis()->SetNdivisions(506);
   hist_pfoEnergyPhotons__2->GetXaxis()->SetLabelFont(42);
   hist_pfoEnergyPhotons__2->GetXaxis()->SetLabelOffset(0.015);
   hist_pfoEnergyPhotons__2->GetXaxis()->SetLabelSize(0.06);
   hist_pfoEnergyPhotons__2->GetXaxis()->SetTitleSize(0.07);
   hist_pfoEnergyPhotons__2->GetXaxis()->SetTitleFont(42);
   hist_pfoEnergyPhotons__2->GetYaxis()->SetNdivisions(506);
   hist_pfoEnergyPhotons__2->GetYaxis()->SetLabelFont(42);
   hist_pfoEnergyPhotons__2->GetYaxis()->SetLabelOffset(0.015);
   hist_pfoEnergyPhotons__2->GetYaxis()->SetLabelSize(0.06);
   hist_pfoEnergyPhotons__2->GetYaxis()->SetTitleSize(0.07);
   hist_pfoEnergyPhotons__2->GetYaxis()->SetTitleOffset(1.2);
   hist_pfoEnergyPhotons__2->GetYaxis()->SetTitleFont(42);
   hist_pfoEnergyPhotons__2->GetZaxis()->SetLabelFont(42);
   hist_pfoEnergyPhotons__2->GetZaxis()->SetLabelOffset(0.015);
   hist_pfoEnergyPhotons__2->GetZaxis()->SetLabelSize(0.06);
   hist_pfoEnergyPhotons__2->GetZaxis()->SetTitleSize(0.07);
   hist_pfoEnergyPhotons__2->GetZaxis()->SetTitleOffset(1.2);
   hist_pfoEnergyPhotons__2->GetZaxis()->SetTitleFont(42);
   hist_pfoEnergyPhotons__2->Draw("HISTsame");
   
   TH1F *hist_pfoEnergyPhotons__3 = new TH1F("hist_pfoEnergyPhotons__3","hist_pfoEnergyPhotons",125,0,500);
   hist_pfoEnergyPhotons__3->SetBinContent(1,4);
   hist_pfoEnergyPhotons__3->SetBinContent(2,16);
   hist_pfoEnergyPhotons__3->SetBinContent(3,35);
   hist_pfoEnergyPhotons__3->SetBinContent(4,63);
   hist_pfoEnergyPhotons__3->SetBinContent(5,68);
   hist_pfoEnergyPhotons__3->SetBinContent(6,91);
   hist_pfoEnergyPhotons__3->SetBinContent(7,96);
   hist_pfoEnergyPhotons__3->SetBinContent(8,139);
   hist_pfoEnergyPhotons__3->SetBinContent(9,156);
   hist_pfoEnergyPhotons__3->SetBinContent(10,176);
   hist_pfoEnergyPhotons__3->SetBinContent(11,207);
   hist_pfoEnergyPhotons__3->SetBinContent(12,228);
   hist_pfoEnergyPhotons__3->SetBinContent(13,263);
   hist_pfoEnergyPhotons__3->SetBinContent(14,286);
   hist_pfoEnergyPhotons__3->SetBinContent(15,297);
   hist_pfoEnergyPhotons__3->SetBinContent(16,297);
   hist_pfoEnergyPhotons__3->SetBinContent(17,330);
   hist_pfoEnergyPhotons__3->SetBinContent(18,335);
   hist_pfoEnergyPhotons__3->SetBinContent(19,345);
   hist_pfoEnergyPhotons__3->SetBinContent(20,334);
   hist_pfoEnergyPhotons__3->SetBinContent(21,341);
   hist_pfoEnergyPhotons__3->SetBinContent(22,340);
   hist_pfoEnergyPhotons__3->SetBinContent(23,336);
   hist_pfoEnergyPhotons__3->SetBinContent(24,311);
   hist_pfoEnergyPhotons__3->SetBinContent(25,309);
   hist_pfoEnergyPhotons__3->SetBinContent(26,315);
   hist_pfoEnergyPhotons__3->SetBinContent(27,315);
   hist_pfoEnergyPhotons__3->SetBinContent(28,265);
   hist_pfoEnergyPhotons__3->SetBinContent(29,281);
   hist_pfoEnergyPhotons__3->SetBinContent(30,266);
   hist_pfoEnergyPhotons__3->SetBinContent(31,238);
   hist_pfoEnergyPhotons__3->SetBinContent(32,224);
   hist_pfoEnergyPhotons__3->SetBinContent(33,203);
   hist_pfoEnergyPhotons__3->SetBinContent(34,223);
   hist_pfoEnergyPhotons__3->SetBinContent(35,190);
   hist_pfoEnergyPhotons__3->SetBinContent(36,175);
   hist_pfoEnergyPhotons__3->SetBinContent(37,150);
   hist_pfoEnergyPhotons__3->SetBinContent(38,144);
   hist_pfoEnergyPhotons__3->SetBinContent(39,159);
   hist_pfoEnergyPhotons__3->SetBinContent(40,121);
   hist_pfoEnergyPhotons__3->SetBinContent(41,110);
   hist_pfoEnergyPhotons__3->SetBinContent(42,133);
   hist_pfoEnergyPhotons__3->SetBinContent(43,93);
   hist_pfoEnergyPhotons__3->SetBinContent(44,83);
   hist_pfoEnergyPhotons__3->SetBinContent(45,84);
   hist_pfoEnergyPhotons__3->SetBinContent(46,57);
   hist_pfoEnergyPhotons__3->SetBinContent(47,56);
   hist_pfoEnergyPhotons__3->SetBinContent(48,56);
   hist_pfoEnergyPhotons__3->SetBinContent(49,53);
   hist_pfoEnergyPhotons__3->SetBinContent(50,48);
   hist_pfoEnergyPhotons__3->SetBinContent(51,39);
   hist_pfoEnergyPhotons__3->SetBinContent(52,30);
   hist_pfoEnergyPhotons__3->SetBinContent(53,35);
   hist_pfoEnergyPhotons__3->SetBinContent(54,32);
   hist_pfoEnergyPhotons__3->SetBinContent(55,31);
   hist_pfoEnergyPhotons__3->SetBinContent(56,15);
   hist_pfoEnergyPhotons__3->SetBinContent(57,19);
   hist_pfoEnergyPhotons__3->SetBinContent(58,19);
   hist_pfoEnergyPhotons__3->SetBinContent(59,15);
   hist_pfoEnergyPhotons__3->SetBinContent(60,16);
   hist_pfoEnergyPhotons__3->SetBinContent(61,3);
   hist_pfoEnergyPhotons__3->SetBinContent(62,5);
   hist_pfoEnergyPhotons__3->SetBinContent(63,7);
   hist_pfoEnergyPhotons__3->SetBinContent(64,5);
   hist_pfoEnergyPhotons__3->SetBinContent(65,6);
   hist_pfoEnergyPhotons__3->SetBinContent(66,2);
   hist_pfoEnergyPhotons__3->SetBinContent(67,8);
   hist_pfoEnergyPhotons__3->SetBinContent(68,2);
   hist_pfoEnergyPhotons__3->SetBinContent(69,1);
   hist_pfoEnergyPhotons__3->SetBinContent(70,2);
   hist_pfoEnergyPhotons__3->SetBinContent(71,5);
   hist_pfoEnergyPhotons__3->SetBinContent(72,1);
   hist_pfoEnergyPhotons__3->SetBinContent(73,1);
   hist_pfoEnergyPhotons__3->SetBinContent(74,1);
   hist_pfoEnergyPhotons__3->SetBinContent(75,2);
   hist_pfoEnergyPhotons__3->SetBinContent(76,1);
   hist_pfoEnergyPhotons__3->SetBinContent(78,2);
   hist_pfoEnergyPhotons__3->SetEntries(9750);
   hist_pfoEnergyPhotons__3->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   hist_pfoEnergyPhotons__3->SetLineColor(ci);
   hist_pfoEnergyPhotons__3->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   hist_pfoEnergyPhotons__3->SetMarkerColor(ci);
   hist_pfoEnergyPhotons__3->SetMarkerStyle(0);
   hist_pfoEnergyPhotons__3->SetMarkerSize(1.2);
   hist_pfoEnergyPhotons__3->GetXaxis()->SetRange(1,1000);
   hist_pfoEnergyPhotons__3->GetXaxis()->SetNdivisions(506);
   hist_pfoEnergyPhotons__3->GetXaxis()->SetLabelFont(42);
   hist_pfoEnergyPhotons__3->GetXaxis()->SetLabelOffset(0.015);
   hist_pfoEnergyPhotons__3->GetXaxis()->SetLabelSize(0.06);
   hist_pfoEnergyPhotons__3->GetXaxis()->SetTitleSize(0.07);
   hist_pfoEnergyPhotons__3->GetXaxis()->SetTitleFont(42);
   hist_pfoEnergyPhotons__3->GetYaxis()->SetNdivisions(506);
   hist_pfoEnergyPhotons__3->GetYaxis()->SetLabelFont(42);
   hist_pfoEnergyPhotons__3->GetYaxis()->SetLabelOffset(0.015);
   hist_pfoEnergyPhotons__3->GetYaxis()->SetLabelSize(0.06);
   hist_pfoEnergyPhotons__3->GetYaxis()->SetTitleSize(0.07);
   hist_pfoEnergyPhotons__3->GetYaxis()->SetTitleOffset(1.2);
   hist_pfoEnergyPhotons__3->GetYaxis()->SetTitleFont(42);
   hist_pfoEnergyPhotons__3->GetZaxis()->SetLabelFont(42);
   hist_pfoEnergyPhotons__3->GetZaxis()->SetLabelOffset(0.015);
   hist_pfoEnergyPhotons__3->GetZaxis()->SetLabelSize(0.06);
   hist_pfoEnergyPhotons__3->GetZaxis()->SetTitleSize(0.07);
   hist_pfoEnergyPhotons__3->GetZaxis()->SetTitleOffset(1.2);
   hist_pfoEnergyPhotons__3->GetZaxis()->SetTitleFont(42);
   hist_pfoEnergyPhotons__3->Draw("HISTsame");
   
   TLegend *leg = new TLegend(0.45,0.6,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("hist_pfoEnergyPhotons","Nominal (103.74 GeV)","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hist_pfoEnergyPhotons","20mm cut (101.18 GeV)","lp");

   ci = TColor::GetColor("#ff6666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff6666");
   entry->SetMarkerColor(ci);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("hist_pfoEnergyPhotons","50mm cut (99.00 GeV)","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
