void may21_muons_eff()
{
//=========Macro generated from canvas: c1/A Simple Graph Example
//=========  (Mon May 21 19:49:43 2018) by ROOT version6.08/00
   TCanvas *c1 = new TCanvas("c1", "A Simple Graph Example",2,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-25.0496,0.5027027,121.8304,1.043243);
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
   
   Double_t Graph0_fx1007[4] = {
   10,
   20,
   50,
   100};
   Double_t Graph0_fy1007[4] = {
   0.9944725,
   0.9964379,
   0.9969535,
   0.9962829};
   Double_t Graph0_fex1007[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1007[4] = {
   0.004481055,
   0.004499573,
   0.004488886,
   0.004488212};
   TGraphErrors *gre = new TGraphErrors(4,Graph0_fx1007,Graph0_fy1007,Graph0_fex1007,Graph0_fey1007);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1007 = new TH1F("Graph_Graph1007","",100,1,109);
   Graph_Graph1007->SetMinimum(0.6);
   Graph_Graph1007->SetMaximum(1);
   Graph_Graph1007->SetDirectory(0);
   Graph_Graph1007->SetStats(0);
   Graph_Graph1007->SetLineWidth(2);
   Graph_Graph1007->SetMarkerSize(1.2);
   Graph_Graph1007->GetXaxis()->SetTitle("Energy [GeV]");
   Graph_Graph1007->GetXaxis()->SetRange(0,101);
   Graph_Graph1007->GetXaxis()->SetNdivisions(506);
   Graph_Graph1007->GetXaxis()->SetLabelFont(42);
   Graph_Graph1007->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1007->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1007->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1007->GetXaxis()->SetTitleFont(42);
   Graph_Graph1007->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph1007->GetYaxis()->SetNdivisions(506);
   Graph_Graph1007->GetYaxis()->SetLabelFont(42);
   Graph_Graph1007->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1007->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1007->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1007->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1007->GetYaxis()->SetTitleFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelFont(42);
   Graph_Graph1007->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1007->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1007->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1007->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph1007->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1007);
   
   gre->Draw("alp");
   
   Double_t Graph1_fx1008[4] = {
   10,
   20,
   50,
   100};
   Double_t Graph1_fy1008[4] = {
   0.9869671,
   0.9937094,
   0.9954043,
   0.9958178};
   Double_t Graph1_fex1008[4] = {
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1008[4] = {
   0.004454602,
   0.004479817,
   0.004483952,
   0.004486188};
   gre = new TGraphErrors(4,Graph1_fx1008,Graph1_fy1008,Graph1_fex1008,Graph1_fey1008);
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
   
   TH1F *Graph_Graph1008 = new TH1F("Graph_Graph1008","",100,1,109);
   Graph_Graph1008->SetMinimum(0.9807334);
   Graph_Graph1008->SetMaximum(1.002083);
   Graph_Graph1008->SetDirectory(0);
   Graph_Graph1008->SetStats(0);
   Graph_Graph1008->SetLineWidth(2);
   Graph_Graph1008->SetMarkerSize(1.2);
   Graph_Graph1008->GetXaxis()->SetNdivisions(506);
   Graph_Graph1008->GetXaxis()->SetLabelFont(42);
   Graph_Graph1008->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1008->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1008->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1008->GetXaxis()->SetTitleFont(42);
   Graph_Graph1008->GetYaxis()->SetNdivisions(506);
   Graph_Graph1008->GetYaxis()->SetLabelFont(42);
   Graph_Graph1008->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1008->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1008->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1008->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1008->GetYaxis()->SetTitleFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelFont(42);
   Graph_Graph1008->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1008->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1008->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1008->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph1008->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1008);
   
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
