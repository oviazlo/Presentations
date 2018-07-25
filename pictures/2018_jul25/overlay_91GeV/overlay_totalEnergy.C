void overlay_totalEnergy()
{
//=========Macro generated from canvas: c1/A Simple Graph Example
//=========  (Mon Jul 23 14:24:35 2018) by ROOT version6.08/00
   TCanvas *c1 = new TCanvas("c1", "A Simple Graph Example",2,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-5.666667,-2.432432,27.66667,11.08108);
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
   
   TH1D *Energy__2 = new TH1D("Energy__2","energy",250,0,125);
   Energy__2->SetBinContent(24,1);
   Energy__2->SetBinContent(25,5);
   Energy__2->SetMinimum(0);
   Energy__2->SetMaximum(10);
   Energy__2->SetEntries(6);
   Energy__2->SetStats(0);
   Energy__2->SetLineWidth(2);
   Energy__2->SetMarkerStyle(24);
   Energy__2->SetMarkerSize(1.2);
   Energy__2->GetXaxis()->SetTitle(" Total Energy [GeV]");
   Energy__2->GetXaxis()->SetRange(1,50);
   Energy__2->GetXaxis()->SetNdivisions(506);
   Energy__2->GetXaxis()->SetLabelFont(42);
   Energy__2->GetXaxis()->SetLabelOffset(0.015);
   Energy__2->GetXaxis()->SetLabelSize(0.06);
   Energy__2->GetXaxis()->SetTitleSize(0.07);
   Energy__2->GetXaxis()->SetTitleFont(42);
   Energy__2->GetYaxis()->SetTitle(" Counts");
   Energy__2->GetYaxis()->SetNdivisions(506);
   Energy__2->GetYaxis()->SetLabelFont(42);
   Energy__2->GetYaxis()->SetLabelOffset(0.015);
   Energy__2->GetYaxis()->SetLabelSize(0.06);
   Energy__2->GetYaxis()->SetTitleSize(0.07);
   Energy__2->GetYaxis()->SetTitleOffset(1.2);
   Energy__2->GetYaxis()->SetTitleFont(42);
   Energy__2->GetZaxis()->SetLabelFont(42);
   Energy__2->GetZaxis()->SetLabelOffset(0.015);
   Energy__2->GetZaxis()->SetLabelSize(0.06);
   Energy__2->GetZaxis()->SetTitleSize(0.07);
   Energy__2->GetZaxis()->SetTitleOffset(1.2);
   Energy__2->GetZaxis()->SetTitleFont(42);
   Energy__2->Draw("");
   
   TH1D *Energy__3 = new TH1D("Energy__3","energy",250,0,125);
   Energy__3->SetBinContent(43,5);
   Energy__3->SetBinContent(44,1);
   Energy__3->SetEntries(6);
   Energy__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff6666");
   Energy__3->SetLineColor(ci);
   Energy__3->SetLineWidth(2);

   ci = TColor::GetColor("#ff6666");
   Energy__3->SetMarkerColor(ci);
   Energy__3->SetMarkerStyle(25);
   Energy__3->SetMarkerSize(1.2);
   Energy__3->GetXaxis()->SetTitle(" Total Energy [GeV]");
   Energy__3->GetXaxis()->SetNdivisions(506);
   Energy__3->GetXaxis()->SetLabelFont(42);
   Energy__3->GetXaxis()->SetLabelOffset(0.015);
   Energy__3->GetXaxis()->SetLabelSize(0.06);
   Energy__3->GetXaxis()->SetTitleSize(0.07);
   Energy__3->GetXaxis()->SetTitleFont(42);
   Energy__3->GetYaxis()->SetTitle(" Counts");
   Energy__3->GetYaxis()->SetNdivisions(506);
   Energy__3->GetYaxis()->SetLabelFont(42);
   Energy__3->GetYaxis()->SetLabelOffset(0.015);
   Energy__3->GetYaxis()->SetLabelSize(0.06);
   Energy__3->GetYaxis()->SetTitleSize(0.07);
   Energy__3->GetYaxis()->SetTitleOffset(1.2);
   Energy__3->GetYaxis()->SetTitleFont(42);
   Energy__3->GetZaxis()->SetLabelFont(42);
   Energy__3->GetZaxis()->SetLabelOffset(0.015);
   Energy__3->GetZaxis()->SetLabelSize(0.06);
   Energy__3->GetZaxis()->SetTitleSize(0.07);
   Energy__3->GetZaxis()->SetTitleOffset(1.2);
   Energy__3->GetZaxis()->SetTitleFont(42);
   Energy__3->Draw("same");
   
   TH1D *Energy__4 = new TH1D("Energy__4","energy",250,0,125);
   Energy__4->SetBinContent(1,6);
   Energy__4->SetEntries(6);
   Energy__4->SetStats(0);

   ci = TColor::GetColor("#0000ff");
   Energy__4->SetLineColor(ci);
   Energy__4->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   Energy__4->SetMarkerColor(ci);
   Energy__4->SetMarkerStyle(26);
   Energy__4->SetMarkerSize(1.2);
   Energy__4->GetXaxis()->SetTitle(" Total Energy [GeV]");
   Energy__4->GetXaxis()->SetNdivisions(506);
   Energy__4->GetXaxis()->SetLabelFont(42);
   Energy__4->GetXaxis()->SetLabelOffset(0.015);
   Energy__4->GetXaxis()->SetLabelSize(0.06);
   Energy__4->GetXaxis()->SetTitleSize(0.07);
   Energy__4->GetXaxis()->SetTitleFont(42);
   Energy__4->GetYaxis()->SetTitle(" Counts");
   Energy__4->GetYaxis()->SetNdivisions(506);
   Energy__4->GetYaxis()->SetLabelFont(42);
   Energy__4->GetYaxis()->SetLabelOffset(0.015);
   Energy__4->GetYaxis()->SetLabelSize(0.06);
   Energy__4->GetYaxis()->SetTitleSize(0.07);
   Energy__4->GetYaxis()->SetTitleOffset(1.2);
   Energy__4->GetYaxis()->SetTitleFont(42);
   Energy__4->GetZaxis()->SetLabelFont(42);
   Energy__4->GetZaxis()->SetLabelOffset(0.015);
   Energy__4->GetZaxis()->SetLabelSize(0.06);
   Energy__4->GetZaxis()->SetTitleSize(0.07);
   Energy__4->GetZaxis()->SetTitleOffset(1.2);
   Energy__4->GetZaxis()->SetTitleFont(42);
   Energy__4->Draw("same");
   
   TH1D *Energy__5 = new TH1D("Energy__5","energy",250,0,125);
   Energy__5->SetBinContent(9,1);
   Energy__5->SetBinContent(10,2);
   Energy__5->SetBinContent(11,3);
   Energy__5->SetEntries(6);
   Energy__5->SetStats(0);

   ci = TColor::GetColor("#009900");
   Energy__5->SetLineColor(ci);
   Energy__5->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   Energy__5->SetMarkerColor(ci);
   Energy__5->SetMarkerStyle(27);
   Energy__5->SetMarkerSize(1.2);
   Energy__5->GetXaxis()->SetTitle(" Total Energy [GeV]");
   Energy__5->GetXaxis()->SetNdivisions(506);
   Energy__5->GetXaxis()->SetLabelFont(42);
   Energy__5->GetXaxis()->SetLabelOffset(0.015);
   Energy__5->GetXaxis()->SetLabelSize(0.06);
   Energy__5->GetXaxis()->SetTitleSize(0.07);
   Energy__5->GetXaxis()->SetTitleFont(42);
   Energy__5->GetYaxis()->SetTitle(" Counts");
   Energy__5->GetYaxis()->SetNdivisions(506);
   Energy__5->GetYaxis()->SetLabelFont(42);
   Energy__5->GetYaxis()->SetLabelOffset(0.015);
   Energy__5->GetYaxis()->SetLabelSize(0.06);
   Energy__5->GetYaxis()->SetTitleSize(0.07);
   Energy__5->GetYaxis()->SetTitleOffset(1.2);
   Energy__5->GetYaxis()->SetTitleFont(42);
   Energy__5->GetZaxis()->SetLabelFont(42);
   Energy__5->GetZaxis()->SetLabelOffset(0.015);
   Energy__5->GetZaxis()->SetLabelSize(0.06);
   Energy__5->GetZaxis()->SetTitleSize(0.07);
   Energy__5->GetZaxis()->SetTitleOffset(1.2);
   Energy__5->GetZaxis()->SetTitleFont(42);
   Energy__5->Draw("same");
   
   TLegend *leg = new TLegend(0.6,0.7,0.9,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("Energy","ECAL Barrel","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(24);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Energy","ECAL Endcap","lp");

   ci = TColor::GetColor("#ff6666");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#ff6666");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(25);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Energy","HCAL Barrel","lp");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(26);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   entry=leg->AddEntry("Energy","HCAL Endcap","lp");

   ci = TColor::GetColor("#009900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);

   ci = TColor::GetColor("#009900");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(27);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
