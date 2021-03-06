void JER_FCCee_vs_CLIC_conformal_Zuds200_myCLIC()
{
//=========Macro generated from canvas: c1/A Simple Graph Example
//=========  (Thu May 17 12:00:25 2018) by ROOT version6.08/00
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
   Double_t xAxis1[14] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 0.925, 0.95, 0.975, 1}; 
   
   TH1F *ResVsCosTheta__1 = new TH1F("ResVsCosTheta__1","RMS_{90}(E_{j}) / Mean_{90}(E_{j}) vs |cos(#theta)|",13, xAxis1);
   ResVsCosTheta__1->SetBinContent(1,3.972421);
   ResVsCosTheta__1->SetBinContent(2,4.022179);
   ResVsCosTheta__1->SetBinContent(3,3.782787);
   ResVsCosTheta__1->SetBinContent(4,3.543192);
   ResVsCosTheta__1->SetBinContent(5,3.460642);
   ResVsCosTheta__1->SetBinContent(6,3.655043);
   ResVsCosTheta__1->SetBinContent(7,3.789632);
   ResVsCosTheta__1->SetBinContent(8,3.719584);
   ResVsCosTheta__1->SetBinContent(9,3.887645);
   ResVsCosTheta__1->SetBinContent(10,4.358776);
   ResVsCosTheta__1->SetBinContent(11,4.818878);
   ResVsCosTheta__1->SetBinContent(12,6.710411);
   ResVsCosTheta__1->SetBinContent(13,24.42403);
   ResVsCosTheta__1->SetBinError(1,0.1473289);
   ResVsCosTheta__1->SetBinError(2,0.1441095);
   ResVsCosTheta__1->SetBinError(3,0.1370359);
   ResVsCosTheta__1->SetBinError(4,0.1235079);
   ResVsCosTheta__1->SetBinError(5,0.116791);
   ResVsCosTheta__1->SetBinError(6,0.120832);
   ResVsCosTheta__1->SetBinError(7,0.1157443);
   ResVsCosTheta__1->SetBinError(8,0.1078254);
   ResVsCosTheta__1->SetBinError(9,0.1100473);
   ResVsCosTheta__1->SetBinError(10,0.2333199);
   ResVsCosTheta__1->SetBinError(11,0.2554);
   ResVsCosTheta__1->SetBinError(12,0.3571591);
   ResVsCosTheta__1->SetBinError(13,1.307389);
   ResVsCosTheta__1->SetMinimum(2.5);
   ResVsCosTheta__1->SetMaximum(7.5);
   ResVsCosTheta__1->SetEntries(13);
   ResVsCosTheta__1->SetStats(0);
   ResVsCosTheta__1->SetLineWidth(2);
   ResVsCosTheta__1->SetMarkerStyle(24);
   ResVsCosTheta__1->SetMarkerSize(1.2);
   ResVsCosTheta__1->GetXaxis()->SetTitle("|cos(#theta)|");
   ResVsCosTheta__1->GetXaxis()->SetNdivisions(506);
   ResVsCosTheta__1->GetXaxis()->SetLabelFont(42);
   ResVsCosTheta__1->GetXaxis()->SetLabelOffset(0.015);
   ResVsCosTheta__1->GetXaxis()->SetLabelSize(0.06);
   ResVsCosTheta__1->GetXaxis()->SetTitleSize(0.07);
   ResVsCosTheta__1->GetXaxis()->SetTitleFont(42);
   ResVsCosTheta__1->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   ResVsCosTheta__1->GetYaxis()->SetNdivisions(506);
   ResVsCosTheta__1->GetYaxis()->SetLabelFont(42);
   ResVsCosTheta__1->GetYaxis()->SetLabelOffset(0.015);
   ResVsCosTheta__1->GetYaxis()->SetLabelSize(0.06);
   ResVsCosTheta__1->GetYaxis()->SetTitleSize(0.07);
   ResVsCosTheta__1->GetYaxis()->SetTitleOffset(0.95);
   ResVsCosTheta__1->GetYaxis()->SetTitleFont(42);
   ResVsCosTheta__1->GetZaxis()->SetLabelFont(42);
   ResVsCosTheta__1->GetZaxis()->SetLabelOffset(0.015);
   ResVsCosTheta__1->GetZaxis()->SetLabelSize(0.06);
   ResVsCosTheta__1->GetZaxis()->SetTitleSize(0.07);
   ResVsCosTheta__1->GetZaxis()->SetTitleOffset(1.2);
   ResVsCosTheta__1->GetZaxis()->SetTitleFont(42);
   ResVsCosTheta__1->Draw("");
   Double_t xAxis2[14] = {0, 0.1, 0.2, 0.3, 0.4, 0.5, 0.6, 0.7, 0.8, 0.9, 0.925, 0.95, 0.975, 1}; 
   
   TH1F *ResVsCosTheta__2 = new TH1F("ResVsCosTheta__2","RMS_{90}(E_{j}) / Mean_{90}(E_{j}) vs |cos(#theta)|",13, xAxis2);
   ResVsCosTheta__2->SetBinContent(1,3.86154);
   ResVsCosTheta__2->SetBinContent(2,3.856396);
   ResVsCosTheta__2->SetBinContent(3,3.678104);
   ResVsCosTheta__2->SetBinContent(4,3.630754);
   ResVsCosTheta__2->SetBinContent(5,3.276868);
   ResVsCosTheta__2->SetBinContent(6,3.30173);
   ResVsCosTheta__2->SetBinContent(7,3.084659);
   ResVsCosTheta__2->SetBinContent(8,3.885494);
   ResVsCosTheta__2->SetBinContent(9,3.936682);
   ResVsCosTheta__2->SetBinContent(10,4.556043);
   ResVsCosTheta__2->SetBinContent(11,5.899174);
   ResVsCosTheta__2->SetBinContent(12,8.998042);
   ResVsCosTheta__2->SetBinContent(13,23.00966);
   ResVsCosTheta__2->SetBinError(1,0.1921188);
   ResVsCosTheta__2->SetBinError(2,0.186843);
   ResVsCosTheta__2->SetBinError(3,0.1801175);
   ResVsCosTheta__2->SetBinError(4,0.1769522);
   ResVsCosTheta__2->SetBinError(5,0.1492572);
   ResVsCosTheta__2->SetBinError(6,0.146635);
   ResVsCosTheta__2->SetBinError(7,0.1285275);
   ResVsCosTheta__2->SetBinError(8,0.1518188);
   ResVsCosTheta__2->SetBinError(9,0.1472235);
   ResVsCosTheta__2->SetBinError(10,0.3314034);
   ResVsCosTheta__2->SetBinError(11,0.4224486);
   ResVsCosTheta__2->SetBinError(12,0.6315387);
   ResVsCosTheta__2->SetBinError(13,1.700923);
   ResVsCosTheta__2->SetMinimum(0);
   ResVsCosTheta__2->SetMaximum(10);
   ResVsCosTheta__2->SetEntries(13);
   ResVsCosTheta__2->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6666");
   ResVsCosTheta__2->SetLineColor(ci);
   ResVsCosTheta__2->SetLineWidth(2);

   ci = TColor::GetColor("#ff6666");
   ResVsCosTheta__2->SetMarkerColor(ci);
   ResVsCosTheta__2->SetMarkerStyle(25);
   ResVsCosTheta__2->SetMarkerSize(1.2);
   ResVsCosTheta__2->GetXaxis()->SetTitle("|cos(#theta)|");
   ResVsCosTheta__2->GetXaxis()->SetNdivisions(506);
   ResVsCosTheta__2->GetXaxis()->SetLabelFont(42);
   ResVsCosTheta__2->GetXaxis()->SetLabelOffset(0.015);
   ResVsCosTheta__2->GetXaxis()->SetLabelSize(0.06);
   ResVsCosTheta__2->GetXaxis()->SetTitleSize(0.07);
   ResVsCosTheta__2->GetXaxis()->SetTitleFont(42);
   ResVsCosTheta__2->GetYaxis()->SetTitle("RMS_{90}(E_{j}) / Mean_{90}(E_{j}) [%]");
   ResVsCosTheta__2->GetYaxis()->SetNdivisions(506);
   ResVsCosTheta__2->GetYaxis()->SetLabelFont(42);
   ResVsCosTheta__2->GetYaxis()->SetLabelOffset(0.015);
   ResVsCosTheta__2->GetYaxis()->SetLabelSize(0.06);
   ResVsCosTheta__2->GetYaxis()->SetTitleSize(0.07);
   ResVsCosTheta__2->GetYaxis()->SetTitleOffset(0.95);
   ResVsCosTheta__2->GetYaxis()->SetTitleFont(42);
   ResVsCosTheta__2->GetZaxis()->SetLabelFont(42);
   ResVsCosTheta__2->GetZaxis()->SetLabelOffset(0.015);
   ResVsCosTheta__2->GetZaxis()->SetLabelSize(0.06);
   ResVsCosTheta__2->GetZaxis()->SetTitleSize(0.07);
   ResVsCosTheta__2->GetZaxis()->SetTitleOffset(1.2);
   ResVsCosTheta__2->GetZaxis()->SetTitleFont(42);
   ResVsCosTheta__2->Draw("same");
   
   TLegend *leg = new TLegend(0.2,0.7,0.58,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("ResVsCosTheta","FCCee","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ResVsCosTheta","CLIC","lp");

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
