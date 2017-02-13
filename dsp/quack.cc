// generated from file './/quack.dsp' by dsp2cc:
// Code generated with Faust 0.9.73 (http://faust.grame.fr)


namespace quack {

class Dsp: public PluginLV2 {
private:
	uint32_t fSamplingFreq;
	int 	iConst0;
	double 	fConst1;
	double 	fConst2;
	double 	fConst3;
	double 	fConst4;
	double 	fConst5;
	double 	fConst6;
	FAUSTFLOAT 	fslider0;
	FAUSTFLOAT	*fslider0_;
	double 	fRec1[2];
	FAUSTFLOAT 	fslider1;
	FAUSTFLOAT	*fslider1_;
	double 	fRec7[2];
	double 	fVec0[2];
	double 	fConst7;
	double 	fConst8;
	double 	fConst9;
	double 	fConst10;
	double 	fRec9[2];
	double 	fConst11;
	double 	fConst12;
	double 	fConst13;
	double 	fConst14;
	double 	fConst15;
	double 	fRec8[2];
	double 	fRec4[2];
	int 	iRec5[2];
	double 	fRec6[2];
	double 	fConst16;
	double 	fConst17;
	double 	fRec3[2];
	double 	fConst18;
	double 	fConst19;
	double 	fRec2[2];
	FAUSTFLOAT 	fslider2;
	FAUSTFLOAT	*fslider2_;
	double 	fConst20;
	double 	fConst21;
	double 	fConst22;
	double 	fConst23;
	double 	fConst24;
	double 	fConst25;
	double 	fConst26;
	double 	fConst27;
	double 	fConst28;
	double 	fConst29;
	double 	fConst30;
	double 	fConst31;
	double 	fConst32;
	double 	fConst33;
	double 	fConst34;
	double 	fConst35;
	double 	fConst36;
	double 	fConst37;
	double 	fConst38;
	double 	fConst39;
	double 	fConst40;
	double 	fConst41;
	double 	fConst42;
	double 	fConst43;
	double 	fConst44;
	double 	fConst45;
	double 	fConst46;
	double 	fConst47;
	double 	fConst48;
	double 	fRec11[2];
	double 	fRec10[5];
	double 	fConst49;
	double 	fConst50;
	double 	fConst51;
	double 	fConst52;
	double 	fConst53;
	double 	fConst54;
	double 	fConst55;
	double 	fConst56;
	double 	fConst57;
	double 	fConst58;
	double 	fConst59;
	double 	fConst60;
	double 	fConst61;
	double 	fConst62;
	double 	fConst63;
	double 	fConst64;
	double 	fConst65;
	double 	fConst66;
	double 	fConst67;
	double 	fConst68;
	double 	fConst69;
	double 	fConst70;
	double 	fConst71;
	double 	fConst72;
	double 	fConst73;
	double 	fConst74;
	double 	fConst75;
	double 	fConst76;
	double 	fConst77;
	double 	fConst78;
	double 	fConst79;
	double 	fConst80;
	double 	fConst81;
	double 	fConst82;
	double 	fConst83;
	double 	fConst84;
	double 	fConst85;
	double 	fConst86;
	double 	fConst87;
	double 	fConst88;
	double 	fConst89;
	double 	fConst90;
	double 	fConst91;
	double 	fConst92;
	double 	fConst93;
	double 	fRec13[2];
	double 	fRec12[5];
	double 	fConst94;
	double 	fConst95;
	double 	fConst96;
	double 	fConst97;
	double 	fConst98;
	double 	fConst99;
	double 	fConst100;
	double 	fConst101;
	double 	fConst102;
	double 	fConst103;
	double 	fConst104;
	double 	fConst105;
	double 	fConst106;
	double 	fConst107;
	double 	fConst108;
	double 	fConst109;
	double 	fConst110;
	double 	fConst111;
	double 	fConst112;
	double 	fConst113;
	double 	fConst114;
	double 	fConst115;
	double 	fConst116;
	double 	fConst117;
	double 	fConst118;
	double 	fConst119;
	double 	fConst120;
	double 	fConst121;
	double 	fConst122;
	double 	fConst123;
	double 	fConst124;
	double 	fConst125;
	double 	fConst126;
	double 	fConst127;
	double 	fConst128;
	double 	fConst129;
	double 	fConst130;
	double 	fConst131;
	double 	fConst132;
	double 	fConst133;
	double 	fConst134;
	double 	fConst135;
	double 	fConst136;
	double 	fConst137;
	double 	fConst138;
	double 	fRec15[2];
	double 	fRec14[5];
	double 	fConst139;
	double 	fConst140;
	double 	fConst141;
	double 	fConst142;
	double 	fConst143;
	double 	fConst144;
	double 	fConst145;
	double 	fConst146;
	double 	fConst147;
	double 	fConst148;
	double 	fConst149;
	double 	fConst150;
	double 	fConst151;
	double 	fConst152;
	double 	fConst153;
	FAUSTFLOAT 	fslider3;
	FAUSTFLOAT	*fslider3_;
	double 	fRec0[2];
	double 	fConst154;
	double 	fConst155;
	double 	fConst156;
	double 	fConst157;
	double 	fConst158;
	double 	fRec16[2];
	double 	fConst159;
	FAUSTFLOAT 	fslider4;
	FAUSTFLOAT	*fslider4_;
	FAUSTFLOAT 	fslider5;
	FAUSTFLOAT	*fslider5_;
	FAUSTFLOAT 	fslider6;
	FAUSTFLOAT	*fslider6_;
	double 	fRec17[2];
	void connect(uint32_t port,void* data);
	void clear_state_f();
	void init(uint32_t samplingFreq);
	void compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0);

	static void clear_state_f_static(PluginLV2*);
	static void init_static(uint32_t samplingFreq, PluginLV2*);
	static void compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2*);
	static void del_instance(PluginLV2 *p);
	static void connect_static(uint32_t port,void* data, PluginLV2 *p);
public:
	Dsp();
	~Dsp();
};



Dsp::Dsp()
	: PluginLV2() {
	version = PLUGINLV2_VERSION;
	id = "quack";
	name = N_("quack");
	mono_audio = compute_static;
	stereo_audio = 0;
	set_samplerate = init_static;
	activate_plugin = 0;
	connect_ports = connect_static;
	clear_state = clear_state_f_static;
	delete_instance = del_instance;
}

Dsp::~Dsp() {
}

inline void Dsp::clear_state_f()
{
	for (int i=0; i<2; i++) fRec1[i] = 0;
	for (int i=0; i<2; i++) fRec7[i] = 0;
	for (int i=0; i<2; i++) fVec0[i] = 0;
	for (int i=0; i<2; i++) fRec9[i] = 0;
	for (int i=0; i<2; i++) fRec8[i] = 0;
	for (int i=0; i<2; i++) fRec4[i] = 0;
	for (int i=0; i<2; i++) iRec5[i] = 0;
	for (int i=0; i<2; i++) fRec6[i] = 0;
	for (int i=0; i<2; i++) fRec3[i] = 0;
	for (int i=0; i<2; i++) fRec2[i] = 0;
	for (int i=0; i<2; i++) fRec11[i] = 0;
	for (int i=0; i<5; i++) fRec10[i] = 0;
	for (int i=0; i<2; i++) fRec13[i] = 0;
	for (int i=0; i<5; i++) fRec12[i] = 0;
	for (int i=0; i<2; i++) fRec15[i] = 0;
	for (int i=0; i<5; i++) fRec14[i] = 0;
	for (int i=0; i<2; i++) fRec0[i] = 0;
	for (int i=0; i<2; i++) fRec16[i] = 0;
	for (int i=0; i<2; i++) fRec17[i] = 0;
}

void Dsp::clear_state_f_static(PluginLV2 *p)
{
	static_cast<Dsp*>(p)->clear_state_f();
}

inline void Dsp::init(uint32_t samplingFreq)
{
	fSamplingFreq = samplingFreq;
	iConst0 = min(192000, max(1, fSamplingFreq));
	fConst1 = double(iConst0);
	fConst2 = (1.85778624631907e-05 * fConst1);
	fConst3 = (0.108262601766846 + fConst2);
	fConst4 = ((0.108262601766846 - fConst2) / fConst3);
	fConst5 = (5.00642970042579e-20 * fConst1);
	fConst6 = (1.48605150860605e-11 + (fConst1 * (6.23836917291325e-13 + (fConst1 * (3.44255097306176e-17 + fConst5)))));
	fConst7 = (1.0 / tan((18849.55592153876 / double(iConst0))));
	fConst8 = (1 + fConst7);
	fConst9 = (1.0 / fConst8);
	fConst10 = (0 - ((1 - fConst7) / fConst8));
	fConst11 = (1.0 / tan((31.41592653589793 / double(iConst0))));
	fConst12 = (0 - fConst11);
	fConst13 = (1 + fConst11);
	fConst14 = (1.0 / fConst13);
	fConst15 = (0 - ((1 - fConst11) / fConst13));
	fConst16 = exp((0 - (1e+01 / double(iConst0))));
	fConst17 = (1.0 - fConst16);
	fConst18 = exp((0 - (1e+02 / double(iConst0))));
	fConst19 = (1.0 - fConst18);
	fConst20 = (4.43653850014272e-20 * fConst1);
	fConst21 = (fConst1 * ((fConst1 * (0 - (6.36752117412588e-18 + fConst20))) - 6.90511452690395e-14));
	fConst22 = (2.9643704767506e-19 * fConst1);
	fConst23 = (1.96168026332498e-12 + (fConst1 * (5.22620199762732e-14 + (fConst1 * (2.20654546981828e-17 + fConst22)))));
	fConst24 = (7.5608386057978e-21 * fConst1);
	fConst25 = (2.00079255029258e-12 + (fConst1 * ((fConst1 * (2.50316072052274e-16 - fConst24)) - 3.73895528562635e-13)));
	fConst26 = (1.25354929406751e-21 * fConst1);
	fConst27 = (fConst1 * (5.13677938472839e-14 + (fConst1 * (fConst26 - 3.48240441754786e-17))));
	fConst28 = (1.25190991419205e-21 * fConst1);
	fConst29 = (1.41321715027133e-12 + (fConst1 * ((fConst1 * (3.48523283496869e-17 - fConst28)) - 5.2316993141028e-14)));
	fConst30 = ((fConst1 * (6.23836917291325e-13 + (fConst1 * (fConst5 - 3.44255097306176e-17)))) - 1.48605150860605e-11);
	fConst31 = (fConst1 * ((fConst1 * (6.36752117412588e-18 - fConst20)) - 6.90511452690395e-14));
	fConst32 = ((fConst1 * (5.22620199762732e-14 + (fConst1 * (fConst22 - 2.20654546981828e-17)))) - 1.96168026332498e-12);
	fConst33 = (2.00257188017031e-19 * fConst1);
	fConst34 = faustpower<2>(fConst1);
	fConst35 = ((fConst34 * (6.88510194612353e-17 - fConst33)) - 2.9721030172121e-11);
	fConst36 = (1.77461540005709e-19 * fConst1);
	fConst37 = (fConst34 * (fConst36 - 1.27350423482518e-17));
	fConst38 = (1.18574819070024e-18 * fConst1);
	fConst39 = ((fConst34 * (4.41309093963656e-17 - fConst38)) - 3.92336052664997e-12);
	fConst40 = (1.38102290538079e-13 - (2.66192310008563e-19 * fConst34));
	fConst41 = ((1.77862228605036e-18 * fConst34) - 1.04524039952546e-13);
	fConst42 = ((3.00385782025547e-19 * fConst34) - 1.24767383458265e-12);
	fConst43 = (2.9721030172121e-11 + (fConst34 * (0 - (6.88510194612353e-17 + fConst33))));
	fConst44 = (fConst34 * (1.27350423482518e-17 + fConst36));
	fConst45 = (3.92336052664997e-12 + (fConst34 * (0 - (4.41309093963656e-17 + fConst38))));
	fConst46 = (716.5731508706599 / double(iConst0));
	fConst47 = (1 - fConst46);
	fConst48 = (1.0 / (1 + fConst46));
	fConst49 = (3.02433544231912e-20 * fConst1);
	fConst50 = (4.00158510058516e-12 + (fConst34 * (fConst49 - 5.00632144104549e-16)));
	fConst51 = (5.01419717627005e-21 * fConst1);
	fConst52 = (fConst34 * (6.96480883509573e-17 - fConst51));
	fConst53 = (5.0076396567682e-21 * fConst1);
	fConst54 = (2.82643430054267e-12 + (fConst34 * (fConst53 - 6.97046566993739e-17)));
	fConst55 = (7.47791057125271e-13 - (4.53650316347868e-20 * fConst34));
	fConst56 = ((7.52129576440508e-21 * fConst34) - 1.02735587694568e-13);
	fConst57 = (1.04633986282056e-13 - (7.5114594851523e-21 * fConst34));
	fConst58 = ((fConst34 * (5.00632144104549e-16 + fConst49)) - 4.00158510058516e-12);
	fConst59 = (fConst34 * (0 - (6.96480883509573e-17 + fConst51)));
	fConst60 = ((fConst34 * (6.97046566993739e-17 + fConst53)) - 2.82643430054267e-12);
	fConst61 = ((fConst1 * ((fConst1 * (0 - (2.50316072052274e-16 + fConst24))) - 3.73895528562635e-13)) - 2.00079255029258e-12);
	fConst62 = (fConst1 * (5.13677938472839e-14 + (fConst1 * (3.48240441754786e-17 + fConst26))));
	fConst63 = ((fConst1 * ((fConst1 * (0 - (3.48523283496869e-17 + fConst28))) - 5.2316993141028e-14)) - 1.41321715027133e-12);
	fConst64 = (5.01914796753341e-20 * fConst1);
	fConst65 = (6.77335915336719e-12 + (fConst1 * (2.84390724782166e-13 + (fConst1 * (1.89702499604079e-17 + fConst64)))));
	fConst66 = (4.44780902320256e-20 * fConst1);
	fConst67 = (fConst1 * ((fConst1 * (0 - (4.66089024039189e-18 + fConst66))) - 3.14666190356821e-14));
	fConst68 = (2.9719011238515e-19 * fConst1);
	fConst69 = (8.93938040786422e-13 + (fConst1 * (2.38657892377949e-14 + (fConst1 * (2.08220998907639e-17 + fConst68)))));
	fConst70 = (7.5800460596258e-21 * fConst1);
	fConst71 = (9.11761516790774e-13 + (fConst1 * ((fConst1 * (1.14664610269757e-16 - fConst70)) - 1.70393435035239e-13)));
	fConst72 = (1.25673379400189e-21 * fConst1);
	fConst73 = (fConst1 * (2.34083126836639e-14 + (fConst1 * (fConst72 - 1.61204970391041e-17))));
	fConst74 = (1.25509024946765e-21 * fConst1);
	fConst75 = (6.4400330373986e-13 + (fConst1 * ((fConst1 * (1.61488530660524e-17 - fConst74)) - 2.38429224035913e-14)));
	fConst76 = ((fConst1 * (2.84390724782166e-13 + (fConst1 * (fConst64 - 1.89702499604079e-17)))) - 6.77335915336719e-12);
	fConst77 = (fConst1 * ((fConst1 * (4.66089024039189e-18 - fConst66)) - 3.14666190356821e-14));
	fConst78 = ((fConst1 * (2.38657892377949e-14 + (fConst1 * (fConst68 - 2.08220998907639e-17)))) - 8.93938040786422e-13);
	fConst79 = (2.00765918701337e-19 * fConst1);
	fConst80 = ((fConst34 * (3.79404999208157e-17 - fConst79)) - 1.35467183067344e-11);
	fConst81 = (1.77912360928102e-19 * fConst1);
	fConst82 = (fConst34 * (fConst81 - 9.32178048078377e-18));
	fConst83 = (1.1887604495406e-18 * fConst1);
	fConst84 = ((fConst34 * (4.16441997815278e-17 - fConst83)) - 1.78787608157284e-12);
	fConst85 = (6.29332380713641e-14 - (2.66868541392154e-19 * fConst34));
	fConst86 = ((1.7831406743109e-18 * fConst34) - 4.77315784755897e-14);
	fConst87 = ((3.01148878052005e-19 * fConst34) - 5.68781449564332e-13);
	fConst88 = (1.35467183067344e-11 + (fConst34 * (0 - (3.79404999208157e-17 + fConst79))));
	fConst89 = (fConst34 * (9.32178048078377e-18 + fConst81));
	fConst90 = (1.78787608157284e-12 + (fConst34 * (0 - (4.16441997815278e-17 + fConst83))));
	fConst91 = (716.72703729746 / double(iConst0));
	fConst92 = (1 - fConst91);
	fConst93 = (1.0 / (1 + fConst91));
	fConst94 = (3.03201842385032e-20 * fConst1);
	fConst95 = (1.82352303358155e-12 + (fConst34 * (fConst94 - 2.29329220539513e-16)));
	fConst96 = (5.02693517600757e-21 * fConst1);
	fConst97 = (fConst34 * (3.22409940782082e-17 - fConst96));
	fConst98 = (5.02036099787061e-21 * fConst1);
	fConst99 = (1.28800660747972e-12 + (fConst34 * (fConst98 - 3.22977061321047e-17)));
	fConst100 = (3.40786870070478e-13 - (4.54802763577548e-20 * fConst34));
	fConst101 = ((7.54040276401136e-21 * fConst34) - 4.68166253673278e-14);
	fConst102 = (4.76858448071827e-14 - (7.53054149680591e-21 * fConst34));
	fConst103 = ((fConst34 * (2.29329220539513e-16 + fConst94)) - 1.82352303358155e-12);
	fConst104 = (fConst34 * (0 - (3.22409940782082e-17 + fConst96)));
	fConst105 = ((fConst34 * (3.22977061321047e-17 + fConst98)) - 1.28800660747972e-12);
	fConst106 = ((fConst1 * ((fConst1 * (0 - (1.14664610269757e-16 + fConst70))) - 1.70393435035239e-13)) - 9.11761516790774e-13);
	fConst107 = (fConst1 * (2.34083126836639e-14 + (fConst1 * (1.61204970391041e-17 + fConst72))));
	fConst108 = ((fConst1 * ((fConst1 * (0 - (1.61488530660524e-17 + fConst74))) - 2.38429224035913e-14)) - 6.4400330373986e-13);
	fConst109 = (5.02634610074678e-20 * fConst1);
	fConst110 = (2.19628701391733e-12 + (fConst1 * (9.2275013955392e-14 + (fConst1 * (1.02230662165229e-17 + fConst109)))));
	fConst111 = (4.45418777953964e-20 * fConst1);
	fConst112 = (fConst1 * ((fConst1 * (0 - (3.69499160249299e-18 + fConst111))) - 1.01949767761838e-14));
	fConst113 = (2.97616322976291e-19 * fConst1);
	fConst114 = (2.89630022050677e-13 + (fConst1 * (7.79442896477869e-15 + (fConst1 * (2.01184007540029e-17 + fConst113)))));
	fConst115 = (7.59091686512077e-21 * fConst1);
	fConst116 = (2.95404710580664e-13 + (fConst1 * ((fConst1 * (3.78902125065437e-17 - fConst115)) - 5.52177453027185e-14)));
	fConst117 = (1.25853611928206e-21 * fConst1);
	fConst118 = (fConst1 * (7.58413873162652e-15 + (fConst1 * (fConst117 - 5.53488632351979e-18))));
	fConst119 = (1.25689021768392e-21 * fConst1);
	fConst120 = (2.08652817705965e-13 + (fConst1 * ((fConst1 * (5.56328301682433e-18 - fConst119)) - 7.7275071769974e-15)));
	fConst121 = ((fConst1 * (9.2275013955392e-14 + (fConst1 * (fConst109 - 1.02230662165229e-17)))) - 2.19628701391733e-12);
	fConst122 = (fConst1 * ((fConst1 * (3.69499160249299e-18 - fConst111)) - 1.01949767761838e-14));
	fConst123 = ((fConst1 * (7.79442896477869e-15 + (fConst1 * (fConst113 - 2.01184007540029e-17)))) - 2.89630022050677e-13);
	fConst124 = (2.01053844029871e-19 * fConst1);
	fConst125 = ((fConst34 * (2.04461324330459e-17 - fConst124)) - 4.39257402783466e-12);
	fConst126 = (1.78167511181586e-19 * fConst1);
	fConst127 = (fConst34 * (fConst126 - 7.38998320498597e-18));
	fConst128 = (1.19046529190516e-18 * fConst1);
	fConst129 = ((fConst34 * (4.02368015080057e-17 - fConst128)) - 5.79260044101354e-13);
	fConst130 = (2.03899535523677e-14 - (2.67251266772379e-19 * fConst34));
	fConst131 = ((1.78569793785775e-18 * fConst34) - 1.55888579295574e-14);
	fConst132 = ((3.01580766044807e-19 * fConst34) - 1.84550027910784e-13);
	fConst133 = (4.39257402783466e-12 + (fConst34 * (0 - (2.04461324330459e-17 + fConst124))));
	fConst134 = (fConst34 * (7.38998320498597e-18 + fConst126));
	fConst135 = (5.79260044101354e-13 + (fConst34 * (0 - (4.02368015080057e-17 + fConst128))));
	fConst136 = (717.9792205009998 / double(iConst0));
	fConst137 = (1 - fConst136);
	fConst138 = (1.0 / (1 + fConst136));
	fConst139 = (3.03636674604831e-20 * fConst1);
	fConst140 = (5.90809421161329e-13 + (fConst34 * (fConst139 - 7.57804250130874e-17)));
	fConst141 = (5.03414447712823e-21 * fConst1);
	fConst142 = (fConst34 * (1.10697726470396e-17 - fConst141));
	fConst143 = (5.0275608707357e-21 * fConst1);
	fConst144 = (4.17305635411929e-13 + (fConst34 * (fConst143 - 1.11265660336487e-17)));
	fConst145 = (1.10435490605437e-13 - (4.55455011907246e-20 * fConst34));
	fConst146 = ((7.55121671569235e-21 * fConst34) - 1.5168277463253e-14);
	fConst147 = (1.54550143539948e-14 - (7.54134130610355e-21 * fConst34));
	fConst148 = ((fConst34 * (7.57804250130874e-17 + fConst139)) - 5.90809421161329e-13);
	fConst149 = (fConst34 * (0 - (1.10697726470396e-17 + fConst141)));
	fConst150 = ((fConst34 * (1.11265660336487e-17 + fConst143)) - 4.17305635411929e-13);
	fConst151 = ((fConst1 * ((fConst1 * (0 - (3.78902125065437e-17 + fConst115))) - 5.52177453027185e-14)) - 2.95404710580664e-13);
	fConst152 = (fConst1 * (7.58413873162652e-15 + (fConst1 * (5.53488632351979e-18 + fConst117))));
	fConst153 = ((fConst1 * ((fConst1 * (0 - (5.56328301682433e-18 + fConst119))) - 7.7275071769974e-15)) - 2.08652817705965e-13);
	fConst154 = (0 - fConst2);
	fConst155 = (1.0 / fConst3);
	fConst156 = (2.02913631633715e-05 * fConst1);
	fConst157 = (0.0260145681581686 + fConst156);
	fConst158 = ((0.0260145681581686 - fConst156) / fConst157);
	fConst159 = (0.0260145681581686 / fConst157);
	clear_state_f();
}

void Dsp::init_static(uint32_t samplingFreq, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->init(samplingFreq);
}

void always_inline Dsp::compute(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0)
{
#define fslider0 (*fslider0_)
#define fslider1 (*fslider1_)
#define fslider2 (*fslider2_)
#define fslider3 (*fslider3_)
#define fslider4 (*fslider4_)
#define fslider5 (*fslider5_)
#define fslider6 (*fslider6_)
	double 	fSlow0 = (0.007000000000000006 * double(fslider0));
	double 	fSlow1 = (0.007000000000000006 * pow(10,(0.05 * double(fslider1))));
	int 	iSlow2 = int(double(fslider2));
	int 	iSlow3 = int(double(fslider3));
	int 	iSlow4 = int(double(fslider4));
	int 	iSlow5 = int(double(fslider5));
	double 	fSlow6 = (0.007000000000000006 * pow(10,(0.05 * double(fslider6))));
	for (int i=0; i<count; i++) {
		fRec1[0] = ((0.993 * fRec1[1]) + fSlow0);
		fRec7[0] = ((0.993 * fRec7[1]) + fSlow1);
		double fTemp0 = (double)input0[i];
		fVec0[0] = fTemp0;
		fRec9[0] = ((fConst10 * fRec9[1]) + (fConst9 * (fVec0[0] + fVec0[1])));
		fRec8[0] = ((fConst15 * fRec8[1]) + (fConst14 * ((fConst11 * fRec9[0]) + (fConst12 * fRec9[1]))));
		double fTemp1 = (fRec8[0] * fRec7[0]);
		int iTemp2 = int((iRec5[1] < 256));
		fRec4[0] = ((iTemp2)?max(fRec4[1], fTemp1):fTemp1);
		iRec5[0] = ((iTemp2)?(1 + iRec5[1]):1);
		fRec6[0] = ((iTemp2)?fRec6[1]:fRec4[1]);
		double fTemp3 = fabs(fRec6[0]);
		fRec3[0] = max(fTemp3, ((fConst16 * fRec3[1]) + (fConst17 * fTemp3)));
		fRec2[0] = ((fConst18 * fRec2[1]) + (fConst19 * fRec3[0]));
		double fTemp4 = max(0.0, min(1.0, fRec2[0]));
		double fTemp5 = (((iSlow2)?(1 - fTemp4):fTemp4) * fRec1[0]);
		double fTemp6 = (5.57295529353689e-11 + (fConst1 * ((fTemp5 * (fConst23 + (fConst21 * fTemp5))) + fConst6)));
		double fTemp7 = (fVec0[0] - fVec0[1]);
		fRec11[0] = (fConst48 * (fTemp7 + (fConst47 * fRec11[1])));
		fRec10[0] = (fRec11[0] - (((((fRec10[1] * (2.22918211741475e-10 + (fConst1 * ((fTemp5 * (fConst45 + (fConst44 * fTemp5))) + fConst43)))) + (fRec10[2] * (3.34377317612213e-10 + (fConst34 * (fConst42 + (fTemp5 * (fConst41 + (fConst40 * fTemp5)))))))) + (fRec10[3] * (2.22918211741475e-10 + (fConst1 * ((fTemp5 * (fConst39 + (fConst37 * fTemp5))) + fConst35))))) + (fRec10[4] * (5.57295529353689e-11 + (fConst1 * ((fTemp5 * (fConst32 + (fConst31 * fTemp5))) + fConst30))))) / fTemp6));
		double fTemp8 = (2.53959670677961e-11 + (fConst1 * ((fTemp5 * (fConst69 + (fConst67 * fTemp5))) + fConst65)));
		fRec13[0] = (fConst93 * (fTemp7 + (fConst92 * fRec13[1])));
		fRec12[0] = (fRec13[0] - (((((fRec12[1] * (1.01583868271184e-10 + (fConst1 * ((fTemp5 * (fConst90 + (fConst89 * fTemp5))) + fConst88)))) + (fRec12[2] * (1.52375802406776e-10 + (fConst34 * (fConst87 + (fTemp5 * (fConst86 + (fConst85 * fTemp5)))))))) + (fRec12[3] * (1.01583868271184e-10 + (fConst1 * ((fTemp5 * (fConst84 + (fConst82 * fTemp5))) + fConst80))))) + (fRec12[4] * (2.53959670677961e-11 + (fConst1 * ((fTemp5 * (fConst78 + (fConst77 * fTemp5))) + fConst76))))) / fTemp8));
		double fTemp9 = (8.22812562643968e-12 + (fConst1 * ((fTemp5 * (fConst114 + (fConst112 * fTemp5))) + fConst110)));
		fRec15[0] = (fConst138 * (fTemp7 + (fConst137 * fRec15[1])));
		fRec14[0] = (fRec15[0] - (((((fRec14[1] * (3.29125025057587e-11 + (fConst1 * ((fTemp5 * (fConst135 + (fConst134 * fTemp5))) + fConst133)))) + (fRec14[2] * (4.93687537586381e-11 + (fConst34 * (fConst132 + (fTemp5 * (fConst131 + (fConst130 * fTemp5)))))))) + (fRec14[3] * (3.29125025057587e-11 + (fConst1 * ((fTemp5 * (fConst129 + (fConst127 * fTemp5))) + fConst125))))) + (fRec14[4] * (8.22812562643968e-12 + (fConst1 * ((fTemp5 * (fConst123 + (fConst122 * fTemp5))) + fConst121))))) / fTemp9));
		double fTemp10 = ((iSlow3==0)? (fConst1 * ((((((fRec14[0] * ((fTemp5 * (fConst153 + (fConst152 * fTemp5))) + fConst151)) + (fRec14[1] * ((fTemp5 * (fConst150 + (fConst149 * fTemp5))) + fConst148))) + (fConst1 * (fRec14[2] * ((fTemp5 * (fConst147 + (fConst146 * fTemp5))) + fConst145)))) + (fRec14[3] * ((fTemp5 * (fConst144 + (fConst142 * fTemp5))) + fConst140))) + (fRec14[4] * ((fTemp5 * (fConst120 + (fConst118 * fTemp5))) + fConst116))) / fTemp9)) : ((iSlow3==1)?(fConst1 * ((((((fRec12[0] * ((fTemp5 * (fConst108 + (fConst107 * fTemp5))) + fConst106)) + (fRec12[1] * ((fTemp5 * (fConst105 + (fConst104 * fTemp5))) + fConst103))) + (fConst1 * (fRec12[2] * ((fTemp5 * (fConst102 + (fConst101 * fTemp5))) + fConst100)))) + (fRec12[3] * ((fTemp5 * (fConst99 + (fConst97 * fTemp5))) + fConst95))) + (fRec12[4] * ((fTemp5 * (fConst75 + (fConst73 * fTemp5))) + fConst71))) / fTemp8)):(fConst1 * ((((((fRec10[0] * ((fTemp5 * (fConst63 + (fConst62 * fTemp5))) + fConst61)) + (fRec10[1] * ((fTemp5 * (fConst60 + (fConst59 * fTemp5))) + fConst58))) + (fConst1 * (fRec10[2] * ((fTemp5 * (fConst57 + (fConst56 * fTemp5))) + fConst55)))) + (fRec10[3] * ((fTemp5 * (fConst54 + (fConst52 * fTemp5))) + fConst50))) + (fRec10[4] * ((fTemp5 * (fConst29 + (fConst27 * fTemp5))) + fConst25))) / fTemp6))) );
		fRec0[0] = (fTemp10 - (fConst4 * fRec0[1]));
		fRec16[0] = (fTemp10 - (fConst158 * fRec16[1]));
		double fTemp11 = ((iSlow4==0)? fTemp10 : ((iSlow4==1)?(fConst159 * (fRec16[0] + fRec16[1])):(fConst155 * ((fConst154 * fRec0[1]) + (fConst2 * fRec0[0])))) );
		double fTemp12 = max((double)-1, min((double)1, (0.01 + (3.1622776601683795 * fTemp11))));
		fRec17[0] = ((0.993 * fRec17[1]) + fSlow6);
		output0[i] = (FAUSTFLOAT)(fRec17[0] * ((iSlow5)?(fTemp12 * (1 - (0.3333333333333333 * faustpower<2>(fTemp12)))):fTemp11));
		// post processing
		fRec17[1] = fRec17[0];
		fRec16[1] = fRec16[0];
		fRec0[1] = fRec0[0];
		for (int i=4; i>0; i--) fRec14[i] = fRec14[i-1];
		fRec15[1] = fRec15[0];
		for (int i=4; i>0; i--) fRec12[i] = fRec12[i-1];
		fRec13[1] = fRec13[0];
		for (int i=4; i>0; i--) fRec10[i] = fRec10[i-1];
		fRec11[1] = fRec11[0];
		fRec2[1] = fRec2[0];
		fRec3[1] = fRec3[0];
		fRec6[1] = fRec6[0];
		iRec5[1] = iRec5[0];
		fRec4[1] = fRec4[0];
		fRec8[1] = fRec8[0];
		fRec9[1] = fRec9[0];
		fVec0[1] = fVec0[0];
		fRec7[1] = fRec7[0];
		fRec1[1] = fRec1[0];
	}
#undef fslider0
#undef fslider1
#undef fslider2
#undef fslider3
#undef fslider4
#undef fslider5
#undef fslider6
}

void __rt_func Dsp::compute_static(int count, FAUSTFLOAT *input0, FAUSTFLOAT *output0, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->compute(count, input0, output0);
}


void Dsp::connect(uint32_t port,void* data)
{
	switch ((PortIndex)port)
	{
	case DEPTH: 
		fslider0_ = (float*)data; // , 1.0, 0.0, 1.0, 0.01 
		break;
	// static const value_pair fslider5_values[] = {{"Off"},{"On"},{0}};
	case DRIVE: 
		fslider5_ = (float*)data; // , 0.0, 0.0, 1.0, 1.0 
		break;
	case GAIN: 
		fslider6_ = (float*)data; // , 0.0, -12.0, 6.0, 0.01 
		break;
	// static const value_pair fslider3_values[] = {{"Low"},{"High"},{"Orig"},{0}};
	case MODE: 
		fslider3_ = (float*)data; // , 0.0, 0.0, 2.0, 1.0 
		break;
	case PEAK: 
		fslider1_ = (float*)data; // , 5.0, -6.0, 2e+01, 0.1 
		break;
	// static const value_pair fslider2_values[] = {{"Low"},{"High"},{0}};
	case RANGE: 
		fslider2_ = (float*)data; // , 0.0, 0.0, 1.0, 1.0 
		break;
	// static const value_pair fslider4_values[] = {{"Off"},{"Low"},{"High"},{0}};
	case TONE: 
		fslider4_ = (float*)data; // , 0.0, 0.0, 2.0, 1.0 
		break;
	default:
		break;
	}
}

void Dsp::connect_static(uint32_t port,void* data, PluginLV2 *p)
{
	static_cast<Dsp*>(p)->connect(port, data);
}


PluginLV2 *plugin() {
	return new Dsp();
}

void Dsp::del_instance(PluginLV2 *p)
{
	delete static_cast<Dsp*>(p);
}

/*
typedef enum
{
   DEPTH, 
   DRIVE, 
   GAIN, 
   MODE, 
   PEAK, 
   RANGE, 
   TONE, 
} PortIndex;
*/

} // end namespace quack
