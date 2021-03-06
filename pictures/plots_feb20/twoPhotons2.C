void twoPhotons2()
{
//=========Macro generated from canvas: c1/A Simple Graph Example
//=========  (Tue Feb 20 16:40:15 2018) by ROOT version6.08/00
   TCanvas *c1 = new TCanvas("c1", "A Simple Graph Example",2,51,800,700);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(-23.8,-137.6635,116.2,627.1338);
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
   
   TH1I *trackClusterParallelDistancemIPhoton2__2 = new TH1I("trackClusterParallelDistancemIPhoton2__2","Track-Cluster Parallel Distance",1000,0,250);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(1,539);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(2,417);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(3,337);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(4,295);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(5,257);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(6,190);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(7,201);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(8,182);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(9,151);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(10,141);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(11,115);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(12,87);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(13,89);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(14,79);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(15,51);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(16,48);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(17,60);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(18,42);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(19,33);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(20,40);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(21,46);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(22,37);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(23,38);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(24,30);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(25,37);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(26,42);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(27,33);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(28,41);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(29,39);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(30,29);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(31,30);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(32,29);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(33,26);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(34,38);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(35,29);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(36,20);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(37,26);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(38,40);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(39,35);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(40,22);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(41,26);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(42,32);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(43,32);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(44,20);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(45,29);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(46,31);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(47,25);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(48,22);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(49,23);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(50,26);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(51,18);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(52,32);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(53,30);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(54,20);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(55,24);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(56,28);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(57,21);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(58,23);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(59,23);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(60,13);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(61,19);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(62,24);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(63,14);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(64,22);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(65,16);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(66,16);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(67,25);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(68,16);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(69,20);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(70,23);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(71,15);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(72,10);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(73,25);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(74,18);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(75,8);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(76,18);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(77,10);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(78,15);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(79,9);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(80,14);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(81,19);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(82,16);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(83,12);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(84,12);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(85,17);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(86,15);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(87,13);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(88,13);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(89,17);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(90,12);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(91,16);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(92,12);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(93,9);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(94,7);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(95,17);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(96,13);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(97,9);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(98,11);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(99,10);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(100,9);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(101,16);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(102,10);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(103,9);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(104,10);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(105,9);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(106,12);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(107,9);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(108,8);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(109,12);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(110,8);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(111,11);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(112,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(113,12);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(114,13);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(115,13);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(116,13);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(117,9);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(118,8);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(119,6);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(120,8);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(121,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(122,7);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(123,5);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(124,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(125,12);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(126,5);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(127,6);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(128,4);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(129,5);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(130,8);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(131,4);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(132,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(133,7);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(134,9);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(135,9);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(136,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(137,8);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(138,10);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(139,5);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(140,8);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(141,5);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(142,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(143,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(144,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(145,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(146,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(147,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(148,5);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(149,6);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(150,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(151,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(152,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(153,5);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(155,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(156,8);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(157,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(158,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(159,6);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(161,5);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(162,4);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(163,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(164,5);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(165,5);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(166,9);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(167,5);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(168,6);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(169,4);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(170,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(171,6);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(172,5);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(173,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(174,8);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(175,4);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(176,4);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(177,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(178,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(179,5);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(180,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(181,4);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(182,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(183,4);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(184,4);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(185,4);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(186,6);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(187,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(188,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(190,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(191,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(192,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(193,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(194,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(195,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(196,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(198,5);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(199,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(200,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(201,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(204,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(205,5);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(206,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(207,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(210,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(211,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(212,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(215,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(216,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(217,4);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(219,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(221,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(222,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(223,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(225,4);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(226,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(228,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(229,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(230,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(231,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(232,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(234,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(236,5);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(237,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(240,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(242,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(243,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(245,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(248,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(249,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(250,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(251,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(253,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(254,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(255,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(258,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(259,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(260,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(261,3);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(262,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(265,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(267,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(270,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(273,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(277,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(278,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(279,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(281,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(283,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(284,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(285,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(287,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(288,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(289,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(290,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(291,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(292,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(296,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(298,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(299,4);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(301,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(306,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(309,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(313,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(315,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(316,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(317,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(321,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(323,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(328,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(329,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(330,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(332,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(335,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(337,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(353,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(361,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(364,2);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(366,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(370,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(374,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(379,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(380,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(392,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(396,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(397,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(401,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(415,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(433,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(449,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(450,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(457,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(463,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(469,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(496,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(506,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(517,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(530,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(539,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(542,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(546,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(549,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(569,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(579,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(583,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(592,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(599,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(621,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(628,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(634,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(657,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(665,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(695,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(727,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(736,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(740,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(759,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(793,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(807,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(928,1);
   trackClusterParallelDistancemIPhoton2__2->SetBinContent(1001,52);
   trackClusterParallelDistancemIPhoton2__2->SetEntries(5864);
   trackClusterParallelDistancemIPhoton2__2->SetStats(0);
   trackClusterParallelDistancemIPhoton2__2->SetLineWidth(2);
   trackClusterParallelDistancemIPhoton2__2->SetMarkerStyle(0);
   trackClusterParallelDistancemIPhoton2__2->SetMarkerSize(1.2);
   trackClusterParallelDistancemIPhoton2__2->GetXaxis()->SetTitle("Parallel Distance [mm]");
   trackClusterParallelDistancemIPhoton2__2->GetXaxis()->SetRange(1,420);
   trackClusterParallelDistancemIPhoton2__2->GetXaxis()->SetNdivisions(506);
   trackClusterParallelDistancemIPhoton2__2->GetXaxis()->SetLabelFont(42);
   trackClusterParallelDistancemIPhoton2__2->GetXaxis()->SetLabelOffset(0.015);
   trackClusterParallelDistancemIPhoton2__2->GetXaxis()->SetLabelSize(0.06);
   trackClusterParallelDistancemIPhoton2__2->GetXaxis()->SetTitleSize(0.07);
   trackClusterParallelDistancemIPhoton2__2->GetXaxis()->SetTitleFont(42);
   trackClusterParallelDistancemIPhoton2__2->GetYaxis()->SetTitle(" Counts");
   trackClusterParallelDistancemIPhoton2__2->GetYaxis()->SetNdivisions(506);
   trackClusterParallelDistancemIPhoton2__2->GetYaxis()->SetLabelFont(42);
   trackClusterParallelDistancemIPhoton2__2->GetYaxis()->SetLabelOffset(0.015);
   trackClusterParallelDistancemIPhoton2__2->GetYaxis()->SetLabelSize(0.06);
   trackClusterParallelDistancemIPhoton2__2->GetYaxis()->SetTitleSize(0.07);
   trackClusterParallelDistancemIPhoton2__2->GetYaxis()->SetTitleOffset(1.2);
   trackClusterParallelDistancemIPhoton2__2->GetYaxis()->SetTitleFont(42);
   trackClusterParallelDistancemIPhoton2__2->GetZaxis()->SetLabelFont(42);
   trackClusterParallelDistancemIPhoton2__2->GetZaxis()->SetLabelOffset(0.015);
   trackClusterParallelDistancemIPhoton2__2->GetZaxis()->SetLabelSize(0.06);
   trackClusterParallelDistancemIPhoton2__2->GetZaxis()->SetTitleSize(0.07);
   trackClusterParallelDistancemIPhoton2__2->GetZaxis()->SetTitleOffset(1.2);
   trackClusterParallelDistancemIPhoton2__2->GetZaxis()->SetTitleFont(42);
   trackClusterParallelDistancemIPhoton2__2->Draw("HIST");
   
   TLegend *leg = new TLegend(0.3,0.6,0.68,0.8,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(2);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("trackClusterParallelDistance-Photon2","Subleading Photon","lp");
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
