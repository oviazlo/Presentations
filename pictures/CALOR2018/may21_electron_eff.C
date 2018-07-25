void may21_electron_eff()
{
//=========Macro generated from canvas: c1/A Simple Graph Example
//=========  (Mon May 21 19:49:43 2018) by ROOT version6.08/00
   TCanvas *c1 = new TCanvas("c1", "A Simple Graph Example",2,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-25.0682,0.5027027,122.3918,1.043243);
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
   
   Double_t Graph0_fx1003[5] = {
   5,
   10,
   20,
   50,
   100};
   Double_t Graph0_fy1003[5] = {
   0.8065777,
   0.906275,
   0.9431209,
   0.9765948,
   0.9786467};
   Double_t Graph0_fex1003[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1003[5] = {
   0.00384592,
   0.00418592,
   0.004312045,
   0.004425355,
   0.004466116};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1003,Graph0_fy1003,Graph0_fex1003,Graph0_fey1003);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","",100,0,109.5);
   Graph_Graph1003->SetMinimum(0.6);
   Graph_Graph1003->SetMaximum(1);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);
   Graph_Graph1003->SetLineWidth(2);
   Graph_Graph1003->SetMarkerSize(1.2);
   Graph_Graph1003->GetXaxis()->SetTitle("Energy [GeV]");
   Graph_Graph1003->GetXaxis()->SetRange(1,101);
   Graph_Graph1003->GetXaxis()->SetNdivisions(506);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph1003->GetYaxis()->SetNdivisions(506);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1003->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("alp");
   
   Double_t Graph1_fx1004[5] = {
   5,
   10,
   20,
   50,
   100};
   Double_t Graph1_fy1004[5] = {
   0.8318226,
   0.8681806,
   0.9268466,
   0.9670075,
   0.9735077};
   Double_t Graph1_fex1004[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1004[5] = {
   0.003932836,
   0.004055857,
   0.00425674,
   0.004392886,
   0.004415149};
   gre = new TGraphErrors(5,Graph1_fx1004,Graph1_fy1004,Graph1_fex1004,Graph1_fey1004);
   gre->SetName("Graph1");
   gre->SetTitle("");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6666");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);

   ci = TColor::GetColor("#ff6666");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(25);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","",100,0,109.5);
   Graph_Graph1004->SetMinimum(0.8128864);
   Graph_Graph1004->SetMaximum(0.9929262);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);
   Graph_Graph1004->SetLineWidth(2);
   Graph_Graph1004->SetMarkerSize(1.2);
   Graph_Graph1004->GetXaxis()->SetNdivisions(506);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetNdivisions(506);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1004->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw("lp");
   
   TLegend *leg = new TLegend(0.5,0.2,0.9,0.35,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","CLD (FCCee)","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","CLICdet","lp");

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
