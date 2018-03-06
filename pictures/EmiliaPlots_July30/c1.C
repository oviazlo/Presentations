void c1()
{
//=========Macro generated from canvas: c1/c1
//=========  (Wed Jul 26 15:45:19 2017) by ROOT version6.08/00
   TCanvas *c1 = new TCanvas("c1", "c1",2946,550,700,520);
   c1->ToggleEventStatus();
   c1->Range(-0.3940127,-6.963659,3.088539,-0.3373712);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetLogx();
   c1->SetLogy();
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   Double_t Graph0_fx1001[9] = {
   1,
   2,
   5,
   10,
   20,
   50,
   100,
   200,
   500};
   Double_t Graph0_fy1001[9] = {
   0.1333598,
   0.06051068,
   0.0219638,
   0.01050799,
   0.005235611,
   0.002111963,
   0.001126572,
   0.0007857889,
   0.0005242806};
   Double_t Graph0_fex1001[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1001[9] = {
   0.001206895,
   0.0005682991,
   0.0002040367,
   0.0001325582,
   4.640195e-05,
   6.182106e-05,
   7.577146e-05,
   3.583692e-05,
   8.150043e-05};
   TGraphErrors *gre = new TGraphErrors(9,Graph0_fx1001,Graph0_fy1001,Graph0_fex1001,Graph0_fey1001);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#0000ff");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(26);
   
   TH1F *Graph_Graph1001 = new TH1F("Graph_Graph1001","Graph",100,0.9,549.9);
   Graph_Graph1001->SetMinimum(5e-07);
   Graph_Graph1001->SetMaximum(0.1);
   Graph_Graph1001->SetDirectory(0);
   Graph_Graph1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1001->SetLineColor(ci);
   Graph_Graph1001->GetXaxis()->SetLabelFont(42);
   Graph_Graph1001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetXaxis()->SetTitleFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelFont(42);
   Graph_Graph1001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetYaxis()->SetTitleFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelFont(42);
   Graph_Graph1001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1001);
   
   gre->Draw("ap");
   
   Double_t Graph1_fx1002[9] = {
   1,
   2,
   5,
   10,
   20,
   50,
   100,
   200,
   500};
   Double_t Graph1_fy1002[9] = {
   0.01363745,
   0.006377477,
   0.002454305,
   0.001174694,
   0.0005845228,
   0.000249771,
   0.0001352987,
   9.6721e-05,
   6.04218e-05};
   Double_t Graph1_fex1002[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1002[9] = {
   0.0001195234,
   5.252318e-05,
   1.926623e-05,
   9.693707e-06,
   4.876929e-06,
   6.509419e-06,
   3.563483e-06,
   2.932942e-06,
   5.25151e-06};
   gre = new TGraphErrors(9,Graph1_fx1002,Graph1_fy1002,Graph1_fex1002,Graph1_fey1002);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff0000");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(25);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,0.9,549.9);
   Graph_Graph1002->SetMinimum(4.965326e-05);
   Graph_Graph1002->SetMaximum(0.01512716);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw("p");
   
   Double_t Graph2_fx1003[9] = {
   1,
   2,
   5,
   10,
   20,
   50,
   100,
   200,
   500};
   Double_t Graph2_fy1003[9] = {
   0.00484549,
   0.002395568,
   0.0009282447,
   0.0004334403,
   0.0002337922,
   0.0001025786,
   6.604089e-05,
   5.020209e-05,
   3.636545e-05};
   Double_t Graph2_fex1003[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph2_fey1003[9] = {
   4.081504e-05,
   1.988934e-05,
   7.852871e-06,
   3.635823e-06,
   1.955781e-06,
   1.937423e-06,
   1.067152e-06,
   6.765774e-07,
   9.491825e-07};
   gre = new TGraphErrors(9,Graph2_fx1003,Graph2_fy1003,Graph2_fex1003,Graph2_fey1003);
   gre->SetName("Graph2");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerColor(6);
   gre->SetMarkerStyle(27);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,0.9,549.9);
   Graph_Graph1003->SetMinimum(3.187464e-05);
   Graph_Graph1003->SetMaximum(0.005371394);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw("p");
   
   Double_t Graph3_fx1004[9] = {
   1,
   2,
   5,
   10,
   20,
   50,
   100,
   200,
   500};
   Double_t Graph3_fy1004[9] = {
   0.00298603,
   0.001436084,
   0.0006007479,
   0.0002807465,
   0.0001569674,
   7.224264e-05,
   4.763808e-05,
   3.881082e-05,
   2.77433e-05};
   Double_t Graph3_fex1004[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph3_fey1004[9] = {
   2.769321e-05,
   1.223537e-05,
   5.271446e-06,
   2.404375e-06,
   1.312723e-06,
   1.170394e-06,
   6.650596e-07,
   4.878039e-07,
   5.580358e-07};
   gre = new TGraphErrors(9,Graph3_fx1004,Graph3_fy1004,Graph3_fex1004,Graph3_fey1004);
   gre->SetName("Graph3");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#009900");
   gre->SetMarkerColor(ci);
   gre->SetMarkerStyle(28);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,0.9,549.9);
   Graph_Graph1004->SetMinimum(2.446674e-05);
   Graph_Graph1004->SetMaximum(0.003312377);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw("p");
   
   Double_t Graph4_fx1005[9] = {
   1,
   2,
   5,
   10,
   20,
   50,
   100,
   200,
   500};
   Double_t Graph4_fy1005[9] = {
   0.002611397,
   0.001275864,
   0.000512223,
   0.0002509377,
   0.0001442876,
   6.930144e-05,
   4.815591e-05,
   3.997648e-05,
   2.671952e-05};
   Double_t Graph4_fex1005[9] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph4_fey1005[9] = {
   2.486212e-05,
   1.116021e-05,
   4.361841e-06,
   2.130189e-06,
   1.244136e-06,
   1.188862e-06,
   7.672699e-07,
   5.873116e-07,
   6.132806e-07};
   gre = new TGraphErrors(9,Graph4_fx1005,Graph4_fy1005,Graph4_fex1005,Graph4_fey1005);
   gre->SetName("Graph4");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetMarkerStyle(24);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","Graph",100,0.9,549.9);
   Graph_Graph1005->SetMinimum(2.349561e-05);
   Graph_Graph1005->SetMaximum(0.002897274);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   gre->Draw("p");
   
   TPaveText *pt = new TPaveText(0.4398567,0.9344958,0.5601433,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *AText = pt->AddText("Graph");
   pt->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
