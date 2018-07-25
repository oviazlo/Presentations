void matthias_SWC_linearity()
{
//=========Macro generated from canvas: c1/A Simple Graph Example
//=========  (Thu May 17 12:05:47 2018) by ROOT version6.08/00
   TCanvas *c1 = new TCanvas("c1", "A Simple Graph Example",2,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-372.9687,0.9256757,1820.965,1.060811);
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
   
   Double_t t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_70_fx1001[10] = {
   45.5,
   50,
   100,
   190,
   250,
   375,
   500,
   750,
   1000,
   1500};
   Double_t t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_70_fy1001[10] = {
   0.9911702,
   0.9922957,
   0.9917012,
   0.9886282,
   0.9887293,
   0.9899737,
   0.9982245,
   1.008425,
   1.018803,
   1.033147};
   Double_t t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_70_fex1001[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_70_fey1001[10] = {
   0.0005984962,
   0.0005964197,
   0.0005183765,
   0.0005172983,
   0.0001564921,
   0.0005148842,
   0.0005163216,
   0.0003707447,
   0.000603686,
   0.0004459737};
   TGraphErrors *gre = new TGraphErrors(10,t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_70_fx1001,t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_70_fy1001,t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_70_fex1001,t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_70_fey1001);
   gre->SetName("t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_70");
   gre->SetTitle("");
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(0);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001 = new TH1F("Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001","",100,0,1645.45);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->SetMinimum(0.95);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->SetMaximum(1.05);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->SetDirectory(0);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->SetStats(0);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->SetLineWidth(2);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->SetMarkerSize(1.2);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetXaxis()->SetTitle("E_{jet} [GeV]");
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetXaxis()->SetNdivisions(506);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetXaxis()->SetLabelFont(42);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetXaxis()->SetLabelOffset(0.015);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetXaxis()->SetLabelSize(0.06);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetXaxis()->SetTitleSize(0.07);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetXaxis()->SetTitleFont(42);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetYaxis()->SetTitle("Mean_{90} (E^{reco}_{tot}/E^{true}/_{tot})");
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetYaxis()->SetNdivisions(506);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetYaxis()->SetLabelFont(42);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetYaxis()->SetLabelOffset(0.015);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetYaxis()->SetLabelSize(0.06);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetYaxis()->SetTitleSize(0.07);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetYaxis()->SetTitleOffset(1.13);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetYaxis()->SetTitleFont(42);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetZaxis()->SetLabelFont(42);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetZaxis()->SetLabelOffset(0.015);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetZaxis()->SetLabelSize(0.06);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetZaxis()->SetTitleSize(0.07);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetZaxis()->SetTitleOffset(1.2);
   Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_701001);
   
   gre->Draw("alp");
   
   Double_t t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_70_fx1002[10] = {
   45.5,
   50,
   100,
   190,
   250,
   375,
   500,
   750,
   1000,
   1500};
   Double_t t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_70_fy1002[10] = {
   1.002671,
   1.003929,
   1.004267,
   1.003872,
   0.9993536,
   0.9990034,
   0.9997547,
   0.9971542,
   1.002205,
   0.9988791};
   Double_t t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_70_fex1002[10] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_70_fey1002[10] = {
   0.0005905823,
   0.0005829704,
   0.0005103696,
   0.0004647636,
   0.0001418856,
   0.0004731808,
   0.000476285,
   0.0003255907,
   0.0005980531,
   0.0004157695};
   gre = new TGraphErrors(10,t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_70_fx1002,t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_70_fy1002,t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_70_fex1002,t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_70_fey1002);
   gre->SetName("t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_70");
   gre->SetTitle("");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6666");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff6666");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(0);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002 = new TH1F("Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002","",100,0,1645.45);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->SetMinimum(0.9960338);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->SetMaximum(1.005572);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->SetDirectory(0);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->SetStats(0);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->SetLineWidth(2);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->SetMarkerSize(1.2);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->GetXaxis()->SetNdivisions(506);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->GetXaxis()->SetLabelFont(42);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->GetXaxis()->SetLabelOffset(0.015);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->GetXaxis()->SetLabelSize(0.06);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->GetXaxis()->SetTitleSize(0.07);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->GetXaxis()->SetTitleFont(42);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->GetYaxis()->SetNdivisions(506);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->GetYaxis()->SetLabelFont(42);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->GetYaxis()->SetLabelOffset(0.015);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->GetYaxis()->SetLabelSize(0.06);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->GetYaxis()->SetTitleSize(0.07);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->GetYaxis()->SetTitleOffset(1.13);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->GetYaxis()->SetTitleFont(42);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->GetZaxis()->SetLabelFont(42);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->GetZaxis()->SetLabelOffset(0.015);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->GetZaxis()->SetLabelSize(0.06);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->GetZaxis()->SetTitleSize(0.07);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->GetZaxis()->SetTitleOffset(1.2);
   Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_701002);
   
   gre->Draw("");
   
   TLegend *leg = new TLegend(0.2,0.2,0.85,0.4,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("t_E_CT_noSWC_summary_91_to_3000_Mean90_d1_cosT_0_70","w/o Software Compensation","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("t_E_CT_Old_summary_91_to_3000_Mean90_d1_cosT_0_70","with Software Compensation","lp");

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
