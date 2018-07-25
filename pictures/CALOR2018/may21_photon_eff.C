void may21_photon_eff()
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
   
   Double_t Graph0_fx1005[5] = {
   5,
   10,
   20,
   50,
   100};
   Double_t Graph0_fy1005[5] = {
   0.9530124,
   0.9642239,
   0.9792641,
   0.9825047,
   0.9798356};
   Double_t Graph0_fex1005[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1005[5] = {
   0.004340511,
   0.004378105,
   0.004429942,
   0.004442111,
   0.004431381};
   TGraphErrors *gre = new TGraphErrors(5,Graph0_fx1005,Graph0_fy1005,Graph0_fex1005,Graph0_fey1005);
   gre->SetName("Graph0");
   gre->SetTitle("");
   gre->SetLineWidth(2);
   gre->SetMarkerStyle(24);
   gre->SetMarkerSize(1.2);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","",100,0,109.5);
   Graph_Graph1005->SetMinimum(0.6);
   Graph_Graph1005->SetMaximum(1);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);
   Graph_Graph1005->SetLineWidth(2);
   Graph_Graph1005->SetMarkerSize(1.2);
   Graph_Graph1005->GetXaxis()->SetTitle("Energy [GeV]");
   Graph_Graph1005->GetXaxis()->SetRange(1,101);
   Graph_Graph1005->GetXaxis()->SetNdivisions(506);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetTitle("Efficiency");
   Graph_Graph1005->GetYaxis()->SetNdivisions(506);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1005->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   gre->Draw("alp");
   
   Double_t Graph1_fx1006[5] = {
   5,
   10,
   20,
   50,
   100};
   Double_t Graph1_fy1006[5] = {
   0.9534106,
   0.9601207,
   0.9752483,
   0.986959,
   0.9854677};
   Double_t Graph1_fex1006[5] = {
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1006[5] = {
   0.004350213,
   0.00436501,
   0.004429635,
   0.004459428,
   0.004454475};
   gre = new TGraphErrors(5,Graph1_fx1006,Graph1_fy1006,Graph1_fex1006,Graph1_fey1006);
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
   
   TH1F *Graph_Graph1006 = new TH1F("Graph_Graph1006","",100,0,109.5);
   Graph_Graph1006->SetMinimum(0.9448246);
   Graph_Graph1006->SetMaximum(0.9956542);
   Graph_Graph1006->SetDirectory(0);
   Graph_Graph1006->SetStats(0);
   Graph_Graph1006->SetLineWidth(2);
   Graph_Graph1006->SetMarkerSize(1.2);
   Graph_Graph1006->GetXaxis()->SetNdivisions(506);
   Graph_Graph1006->GetXaxis()->SetLabelFont(42);
   Graph_Graph1006->GetXaxis()->SetLabelOffset(0.015);
   Graph_Graph1006->GetXaxis()->SetLabelSize(0.06);
   Graph_Graph1006->GetXaxis()->SetTitleSize(0.07);
   Graph_Graph1006->GetXaxis()->SetTitleFont(42);
   Graph_Graph1006->GetYaxis()->SetNdivisions(506);
   Graph_Graph1006->GetYaxis()->SetLabelFont(42);
   Graph_Graph1006->GetYaxis()->SetLabelOffset(0.015);
   Graph_Graph1006->GetYaxis()->SetLabelSize(0.06);
   Graph_Graph1006->GetYaxis()->SetTitleSize(0.07);
   Graph_Graph1006->GetYaxis()->SetTitleOffset(1.2);
   Graph_Graph1006->GetYaxis()->SetTitleFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelFont(42);
   Graph_Graph1006->GetZaxis()->SetLabelOffset(0.015);
   Graph_Graph1006->GetZaxis()->SetLabelSize(0.06);
   Graph_Graph1006->GetZaxis()->SetTitleSize(0.07);
   Graph_Graph1006->GetZaxis()->SetTitleOffset(1.2);
   Graph_Graph1006->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1006);
   
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
