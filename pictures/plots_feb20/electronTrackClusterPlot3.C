void electronTrackClusterPlot3()
{
//=========Macro generated from canvas: c1/A Simple Graph Example
//=========  (Tue Feb 20 16:37:10 2018) by ROOT version6.08/00
   TCanvas *c1 = new TCanvas("c1", "A Simple Graph Example",2,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-23.8,-1818.231,116.2,8283.053);
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
   
   TH1I *trackClusterPerpendicularDistancemIElectron1__1 = new TH1I("trackClusterPerpendicularDistancemIElectron1__1","Track-Cluster Perpendicular Distance",1000,0,250);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(1,2206);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(2,5784);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(3,7119);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(4,5712);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(5,3538);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(6,2090);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(7,1476);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(8,1019);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(9,726);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(10,505);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(11,243);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(12,152);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(13,57);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(14,14);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(15,20);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(16,17);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(17,11);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(18,12);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(19,8);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(20,5);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(21,5);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(22,5);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(23,7);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(24,4);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(25,4);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(26,2);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(27,5);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(28,4);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(29,2);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(30,5);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(31,4);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(32,3);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(33,2);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(34,3);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(35,2);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(37,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(39,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(40,2);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(41,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(42,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(43,3);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(44,2);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(45,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(46,2);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(49,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(51,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(58,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(60,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(61,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(67,2);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(71,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(77,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(78,2);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(80,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(92,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(98,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(100,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(102,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(114,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(121,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(123,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(135,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(136,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(138,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(172,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(176,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(177,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(178,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(182,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(184,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(216,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(223,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(224,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(229,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(238,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(266,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(280,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(283,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(291,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(305,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(308,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(314,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(326,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(336,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(367,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(398,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(403,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(414,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(415,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(418,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(424,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(443,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(461,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(498,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(514,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(523,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(530,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(532,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(535,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(538,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(542,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(548,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(562,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(601,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(636,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(637,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(640,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(650,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(652,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(664,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(669,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(670,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(690,2);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(697,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(701,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(718,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(719,2);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(724,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(734,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(735,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(744,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(746,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(757,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(759,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(760,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(762,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(773,2);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(774,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(776,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(779,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(783,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(787,2);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(788,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(789,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(790,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(794,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(796,2);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(799,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(800,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(801,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(802,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(803,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(806,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(811,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(812,2);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(813,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(814,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(817,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(818,2);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(821,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(822,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(829,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(833,2);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(834,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(836,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(837,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(840,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(842,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(854,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(856,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(858,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(867,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(896,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(912,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(915,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(952,1);
   trackClusterPerpendicularDistancemIElectron1__1->SetBinContent(1001,76);
   trackClusterPerpendicularDistancemIElectron1__1->SetEntries(30993);
   trackClusterPerpendicularDistancemIElectron1__1->SetStats(0);
   trackClusterPerpendicularDistancemIElectron1__1->SetLineWidth(2);
   trackClusterPerpendicularDistancemIElectron1__1->SetMarkerStyle(0);
   trackClusterPerpendicularDistancemIElectron1__1->SetMarkerSize(1.2);
   trackClusterPerpendicularDistancemIElectron1__1->GetXaxis()->SetTitle("Perpendicular Distance [mm]");
   trackClusterPerpendicularDistancemIElectron1__1->GetXaxis()->SetRange(1,420);
   trackClusterPerpendicularDistancemIElectron1__1->GetXaxis()->SetNdivisions(506);
   trackClusterPerpendicularDistancemIElectron1__1->GetXaxis()->SetLabelFont(42);
   trackClusterPerpendicularDistancemIElectron1__1->GetXaxis()->SetLabelOffset(0.015);
   trackClusterPerpendicularDistancemIElectron1__1->GetXaxis()->SetLabelSize(0.06);
   trackClusterPerpendicularDistancemIElectron1__1->GetXaxis()->SetTitleSize(0.07);
   trackClusterPerpendicularDistancemIElectron1__1->GetXaxis()->SetTitleFont(42);
   trackClusterPerpendicularDistancemIElectron1__1->GetYaxis()->SetTitle(" Counts");
   trackClusterPerpendicularDistancemIElectron1__1->GetYaxis()->SetNdivisions(506);
   trackClusterPerpendicularDistancemIElectron1__1->GetYaxis()->SetLabelFont(42);
   trackClusterPerpendicularDistancemIElectron1__1->GetYaxis()->SetLabelOffset(0.015);
   trackClusterPerpendicularDistancemIElectron1__1->GetYaxis()->SetLabelSize(0.06);
   trackClusterPerpendicularDistancemIElectron1__1->GetYaxis()->SetTitleSize(0.07);
   trackClusterPerpendicularDistancemIElectron1__1->GetYaxis()->SetTitleOffset(1.2);
   trackClusterPerpendicularDistancemIElectron1__1->GetYaxis()->SetTitleFont(42);
   trackClusterPerpendicularDistancemIElectron1__1->GetZaxis()->SetLabelFont(42);
   trackClusterPerpendicularDistancemIElectron1__1->GetZaxis()->SetLabelOffset(0.015);
   trackClusterPerpendicularDistancemIElectron1__1->GetZaxis()->SetLabelSize(0.06);
   trackClusterPerpendicularDistancemIElectron1__1->GetZaxis()->SetTitleSize(0.07);
   trackClusterPerpendicularDistancemIElectron1__1->GetZaxis()->SetTitleOffset(1.2);
   trackClusterPerpendicularDistancemIElectron1__1->GetZaxis()->SetTitleFont(42);
   trackClusterPerpendicularDistancemIElectron1__1->Draw("HIST");
   
   TLegend *leg = new TLegend(0.3,0.6,0.68,0.8,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("trackClusterPerpendicularDistance-Electron1","Electron","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(62);
   leg->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);
}
