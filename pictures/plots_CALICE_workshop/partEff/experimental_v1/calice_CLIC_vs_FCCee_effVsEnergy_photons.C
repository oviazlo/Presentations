void calice_CLIC_vs_FCCee_effVsEnergy_photons()
{
//=========Macro generated from canvas: c1/A Simple Graph Example
//=========  (Wed Mar  7 16:50:14 2018) by ROOT version6.08/00
   TCanvas *c1 = new TCanvas("c1", "A Simple Graph Example",110,116,800,700);
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
   
   Double_t Graph0_fx1001[5] = {
   5,
   10,
   20,
   50,
   100};
   Double_t Graph0_fy1001[5] = {
   0.9436152,
   0.9381309,
   0.9310415,
   0.9302012,
   0.9286163};
   Double_t Graph0_fex1001[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[5] = {
   0.004316943,
   0.004290463,
   0.00427937,
   0.004267022,
   0.004261721};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","",100,0,109.5);
   Graph_Graph1001->SetMinimum(0.6);
   Graph_Graph1001->SetMaximum(1);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);
   Graph_Graph1001->SetLineWidth(2);
   Graph_Graph1001->SetMarkerSize(1.2);
   Graph_Graph1001->GetXaxis()->SetTitle("Energy [GeV]");
   Graph_Graph1001->GetXaxis()->SetRange(1,101);
   Graph_Graph1001->GetXaxis()->SetNdivisions(506);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetTitle("Efficiency [%]");
   Graph_Graph1001->GetYaxis()->SetNdivisions(506);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1001->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1001->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("alp");
   
   Double_t Graph1_fx1002[5] = {
   5,
   10,
   20,
   50,
   100};
   Double_t Graph1_fy1002[5] = {
   0.9375051,
   0.9312208,
   0.9232934,
   0.9198882,
   0.9159513};
   Double_t Graph1_fex1002[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1002[5] = {
   0.004287927,
   0.004266228,
   0.004240225,
   0.004229807,
   0.004214794};
   gre = new TGraphErrors(5,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
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
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","",100,0,109.5);
   Graph_Graph1002->SetMinimum(0.9087309);
   Graph_Graph1002->SetMaximum(0.9447986);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);
   Graph_Graph1002->SetLineWidth(2);
   Graph_Graph1002->SetMarkerSize(1.2);
   Graph_Graph1002->GetXaxis()->SetNdivisions(506);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetNdivisions(506);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1002->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("lp");
   
   TLegend *leg = new TLegend(0.5,0.2,0.9,0.4,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Graph0","CLICdet","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Graph1","CLD","lp");

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
