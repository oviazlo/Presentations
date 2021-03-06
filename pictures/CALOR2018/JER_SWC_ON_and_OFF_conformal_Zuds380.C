void JER_SWC_ON_and_OFF_conformal_Zuds380()
{
//=========Macro generated from canvas: c1/A Simple Graph Example
//=========  (Thu May 17 12:04:14 2018) by ROOT version6.08/00
   TCanvas *c1 = new TCanvas("c1", "A Simple Graph Example",2,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-0.2266667,1.283784,1.106667,8.040541);
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
   Double_t xAxis5[14] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 0.925, 0.95, 0.975, 1}; 
   
   TH1F *ResVsCosTheta__5 = new TH1F("ResVsCosTheta__5","RMS_{90}(E_{j}) / Mean_{90}(E_{j}) vs |cos(#theta)|",13, xAxis5);
   ResVsCosTheta__5->SetBinContent(1,3.747228);
   ResVsCosTheta__5->SetBinContent(2,3.584437);
   ResVsCosTheta__5->SetBinContent(3,3.576658);
   ResVsCosTheta__5->SetBinContent(4,3.205184);
   ResVsCosTheta__5->SetBinContent(5,3.004584);
   ResVsCosTheta__5->SetBinContent(6,3.028983);
   ResVsCosTheta__5->SetBinContent(7,3.141865);
   ResVsCosTheta__5->SetBinContent(8,3.101779);
   ResVsCosTheta__5->SetBinContent(9,3.765751);
   ResVsCosTheta__5->SetBinContent(10,3.738317);
   ResVsCosTheta__5->SetBinContent(11,5.885454);
   ResVsCosTheta__5->SetBinContent(12,7.127646);
   ResVsCosTheta__5->SetBinContent(13,21.86901);
   ResVsCosTheta__5->SetBinError(1,0.1523465);
   ResVsCosTheta__5->SetBinError(2,0.14081);
   ResVsCosTheta__5->SetBinError(3,0.1376656);
   ResVsCosTheta__5->SetBinError(4,0.119951);
   ResVsCosTheta__5->SetBinError(5,0.1102275);
   ResVsCosTheta__5->SetBinError(6,0.1035285);
   ResVsCosTheta__5->SetBinError(7,0.106397);
   ResVsCosTheta__5->SetBinError(8,0.1003712);
   ResVsCosTheta__5->SetBinError(9,0.1151224);
   ResVsCosTheta__5->SetBinError(10,0.2279292);
   ResVsCosTheta__5->SetBinError(11,0.3359006);
   ResVsCosTheta__5->SetBinError(12,0.3972082);
   ResVsCosTheta__5->SetBinError(13,1.218713);
   ResVsCosTheta__5->SetMinimum(2.5);
   ResVsCosTheta__5->SetMaximum(7.5);
   ResVsCosTheta__5->SetEntries(13);
   ResVsCosTheta__5->SetStats(0);
   ResVsCosTheta__5->SetLineWidth(2);
   ResVsCosTheta__5->SetMarkerStyle(24);
   ResVsCosTheta__5->SetMarkerSize(1.2);
   ResVsCosTheta__5->GetXaxis()->SetTitle("|cos(#theta)|");
   ResVsCosTheta__5->GetXaxis()->SetNdivisions(506);
   ResVsCosTheta__5->GetXaxis()->SetLabelFont(42);
   ResVsCosTheta__5->GetXaxis()->SetLabelOffset(0.015);
   ResVsCosTheta__5->GetXaxis()->SetLabelSize(0.06);
   ResVsCosTheta__5->GetXaxis()->SetTitleSize(0.07);
   ResVsCosTheta__5->GetXaxis()->SetTitleFont(42);
   ResVsCosTheta__5->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   ResVsCosTheta__5->GetYaxis()->SetNdivisions(506);
   ResVsCosTheta__5->GetYaxis()->SetLabelFont(42);
   ResVsCosTheta__5->GetYaxis()->SetLabelOffset(0.015);
   ResVsCosTheta__5->GetYaxis()->SetLabelSize(0.06);
   ResVsCosTheta__5->GetYaxis()->SetTitleSize(0.07);
   ResVsCosTheta__5->GetYaxis()->SetTitleOffset(0.95);
   ResVsCosTheta__5->GetYaxis()->SetTitleFont(42);
   ResVsCosTheta__5->GetZaxis()->SetLabelFont(42);
   ResVsCosTheta__5->GetZaxis()->SetLabelOffset(0.015);
   ResVsCosTheta__5->GetZaxis()->SetLabelSize(0.06);
   ResVsCosTheta__5->GetZaxis()->SetTitleSize(0.07);
   ResVsCosTheta__5->GetZaxis()->SetTitleOffset(1.2);
   ResVsCosTheta__5->GetZaxis()->SetTitleFont(42);
   ResVsCosTheta__5->Draw("");
   Double_t xAxis6[14] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 0.925, 0.95, 0.975, 1}; 
   
   TH1F *ResVsCosTheta__6 = new TH1F("ResVsCosTheta__6","RMS_{90}(E_{j}) / Mean_{90}(E_{j}) vs |cos(#theta)|",13, xAxis6);
   ResVsCosTheta__6->SetBinContent(1,3.682099);
   ResVsCosTheta__6->SetBinContent(2,4.167237);
   ResVsCosTheta__6->SetBinContent(3,3.826381);
   ResVsCosTheta__6->SetBinContent(4,3.851675);
   ResVsCosTheta__6->SetBinContent(5,3.602707);
   ResVsCosTheta__6->SetBinContent(6,3.641267);
   ResVsCosTheta__6->SetBinContent(7,3.381322);
   ResVsCosTheta__6->SetBinContent(8,3.600688);
   ResVsCosTheta__6->SetBinContent(9,3.683254);
   ResVsCosTheta__6->SetBinContent(10,4.372444);
   ResVsCosTheta__6->SetBinContent(11,5.584909);
   ResVsCosTheta__6->SetBinContent(12,7.18388);
   ResVsCosTheta__6->SetBinContent(13,23.63737);
   ResVsCosTheta__6->SetBinError(1,0.1418291);
   ResVsCosTheta__6->SetBinError(2,0.156836);
   ResVsCosTheta__6->SetBinError(3,0.1397197);
   ResVsCosTheta__6->SetBinError(4,0.1356695);
   ResVsCosTheta__6->SetBinError(5,0.1235718);
   ResVsCosTheta__6->SetBinError(6,0.118955);
   ResVsCosTheta__6->SetBinError(7,0.1063435);
   ResVsCosTheta__6->SetBinError(8,0.1108035);
   ResVsCosTheta__6->SetBinError(9,0.1065486);
   ResVsCosTheta__6->SetBinError(10,0.2444271);
   ResVsCosTheta__6->SetBinError(11,0.2998137);
   ResVsCosTheta__6->SetBinError(12,0.3834471);
   ResVsCosTheta__6->SetBinError(13,1.263471);
   ResVsCosTheta__6->SetMinimum(0);
   ResVsCosTheta__6->SetMaximum(10);
   ResVsCosTheta__6->SetEntries(13);
   ResVsCosTheta__6->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6666");
   ResVsCosTheta__6->SetLineColor(ci);
   ResVsCosTheta__6->SetLineWidth(2);

   ci = TColor::GetColor("#ff6666");
   ResVsCosTheta__6->SetMarkerColor(ci);
   ResVsCosTheta__6->SetMarkerStyle(25);
   ResVsCosTheta__6->SetMarkerSize(1.2);
   ResVsCosTheta__6->GetXaxis()->SetTitle("|cos(#theta)|");
   ResVsCosTheta__6->GetXaxis()->SetNdivisions(506);
   ResVsCosTheta__6->GetXaxis()->SetLabelFont(42);
   ResVsCosTheta__6->GetXaxis()->SetLabelOffset(0.015);
   ResVsCosTheta__6->GetXaxis()->SetLabelSize(0.06);
   ResVsCosTheta__6->GetXaxis()->SetTitleSize(0.07);
   ResVsCosTheta__6->GetXaxis()->SetTitleFont(42);
   ResVsCosTheta__6->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   ResVsCosTheta__6->GetYaxis()->SetNdivisions(506);
   ResVsCosTheta__6->GetYaxis()->SetLabelFont(42);
   ResVsCosTheta__6->GetYaxis()->SetLabelOffset(0.015);
   ResVsCosTheta__6->GetYaxis()->SetLabelSize(0.06);
   ResVsCosTheta__6->GetYaxis()->SetTitleSize(0.07);
   ResVsCosTheta__6->GetYaxis()->SetTitleOffset(0.95);
   ResVsCosTheta__6->GetYaxis()->SetTitleFont(42);
   ResVsCosTheta__6->GetZaxis()->SetLabelFont(42);
   ResVsCosTheta__6->GetZaxis()->SetLabelOffset(0.015);
   ResVsCosTheta__6->GetZaxis()->SetLabelSize(0.06);
   ResVsCosTheta__6->GetZaxis()->SetTitleSize(0.07);
   ResVsCosTheta__6->GetZaxis()->SetTitleOffset(1.2);
   ResVsCosTheta__6->GetZaxis()->SetTitleFont(42);
   ResVsCosTheta__6->Draw("same");
   
   TLegend *leg = new TLegend(0.2,0.7,0.58,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ResVsCosTheta","with Software Compensation","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ResVsCosTheta","w/o Software Compensation","lp");

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
