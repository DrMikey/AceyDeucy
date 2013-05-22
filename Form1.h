#include "linkedlist.h"


namespace Program16 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	///
	/// WARNING: If you change the name of this class, you will need to change the
	///          'Resource File Name' property for the managed resource compiler tool
	///          associated with all .resx files this class depends on.  Otherwise,
	///          the designers will not be able to interact properly with localized
	///          resources associated with this form.
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
			
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  buttongroup;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::TextBox^  textBox1;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  gameToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  betToolStripMenuItem;










	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->buttongroup = (gcnew System::Windows::Forms::GroupBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->gameToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->betToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->buttongroup->SuspendLayout();
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->SuspendLayout();
			// 
			// buttongroup
			// 
			this->buttongroup->Controls->Add(this->textBox1);
			this->buttongroup->Controls->Add(this->button2);
			this->buttongroup->Location = System::Drawing::Point(385, 71);
			this->buttongroup->Name = L"buttongroup";
			this->buttongroup->Size = System::Drawing::Size(109, 135);
			this->buttongroup->TabIndex = 0;
			this->buttongroup->TabStop = false;
			this->buttongroup->Text = L"Current Balance";
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(20, 32);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(71, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"100.00";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(25, 78);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(59, 33);
			this->button2->TabIndex = 1;
			this->button2->Text = L"Deal";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Visible = false;
			this->button2->Click += gcnew System::EventHandler(this, &Form1::button2_Click);
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Location = System::Drawing::Point(12, 41);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(280, 82);
			this->groupBox1->TabIndex = 1;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Instructions";
			this->groupBox1->Enter += gcnew System::EventHandler(this, &Form1::groupBox1_Enter);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(6, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(263, 52);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Welcome to Acey Deucey. You have $100.00 to start.\r\nComputer will deal 2 cards Yo" 
				L"u can bet any amt. on \r\nwhether the 3rd card is between the other two.\r\nGame end" 
				L"s when you run out of money.";
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {this->gameToolStripMenuItem, 
				this->betToolStripMenuItem});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(520, 24);
			this->menuStrip1->TabIndex = 2;
			this->menuStrip1->Text = L"menuStrip1";
			this->menuStrip1->ItemClicked += gcnew System::Windows::Forms::ToolStripItemClickedEventHandler(this, &Form1::menuStrip1_ItemClicked);
			// 
			// gameToolStripMenuItem
			// 
			this->gameToolStripMenuItem->Name = L"gameToolStripMenuItem";
			this->gameToolStripMenuItem->Size = System::Drawing::Size(50, 20);
			this->gameToolStripMenuItem->Text = L"Game";
			// 
			// betToolStripMenuItem
			// 
			this->betToolStripMenuItem->Name = L"betToolStripMenuItem";
			this->betToolStripMenuItem->Size = System::Drawing::Size(36, 20);
			this->betToolStripMenuItem->Text = L"Bet";
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(520, 277);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->buttongroup);
			this->Controls->Add(this->menuStrip1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"Form1";
			this->Text = L"Form1";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->buttongroup->ResumeLayout(false);
			this->buttongroup->PerformLayout();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
		Deck *reddeck;
		linklist<Card> *node;
		linklist<Card> *node2;

		int cpt, hpt, tie, cardnum;
		cli::array<String^> ^clubs ;
		cli::array<String^> ^diamonds ;
		cli::array<String^> ^hearts ;
		cli::array<String^> ^spades ;
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
		
				Card *hand[52];	
				node = new linklist<Card>;
				node2 = new linklist<Card>;

				 reddeck = new Deck;
				 hand[52] = new Card;

				 int i = 0;
				 while (i < 52)
				 {
					 Card TCard = reddeck->dealacard();
					 hand[i]->setcard(TCard.getpip(),TCard.getsuit());
					 i++;
				 }

				 i = 0;

				 while (i < 52)
				 {
						 Card TCard;
						 TCard.setcard(hand[i]->getpip(),hand[i]->getsuit());
						 node->add(TCard);
						 i++;
						 TCard.setcard(hand[i]->getpip(),hand[i]->getsuit());
						 node2->add(TCard);
						 i++;
				 }
				 
				 cpt=hpt=tie=0;
				 cardnum = 0;

				 clubs=gcnew cli::array<String^>(13);
				 clubs[0] = "card0jc2.bmp";clubs[1] = "card0jc3.bmp";
				 clubs[2] = "card0jc4.bmp";clubs[3] = "card0jc5.bmp";
				 clubs[4] = "card0jc6.bmp";clubs[5] = "card0jc7.bmp";
				 clubs[6] = "card0jc8.bmp";clubs[7] = "card0jc9.bmp";
				 clubs[8] = "card0jct.bmp";clubs[9] = "card0jcj.bmp";
				 clubs[10] = "card0jcq.bmp";clubs[11] = "card0jck.bmp";
				 clubs[12] = "card0jca.bmp";

				 diamonds=gcnew cli::array<String^>(13);
				 diamonds[0] = "card0jd2.bmp";diamonds[1] = "card0jd3.bmp";
				 diamonds[2] = "card0jd4.bmp";diamonds[3] = "card0jd5.bmp";
				 diamonds[4] = "card0jd6.bmp";diamonds[5] = "card0jd7.bmp";
				 diamonds[6] = "card0jd8.bmp";diamonds[7] = "card0jd9.bmp";
				 diamonds[8] = "card0jdt.bmp";diamonds[9] = "card0jdj.bmp";
				 diamonds[10] = "card0jdq.bmp";diamonds[11] = "card0jdk.bmp";
				 diamonds[12] = "card0jda.bmp";

				 spades=gcnew cli::array<String^>(13);
				 spades[0] = "card0js2.bmp";spades[1] = "card0js3.bmp";
				 spades[2] = "card0js4.bmp";spades[3] = "card0js5.bmp";
				 spades[4] = "card0js6.bmp";spades[5] = "card0js7.bmp";
				 spades[6] = "card0js8.bmp";spades[7] = "card0js9.bmp";
				 spades[8] = "card0jst.bmp";spades[9] = "card0jsj.bmp";
				 spades[10] = "card0jsq.bmp";spades[11] = "card0jsk.bmp";
				 spades[12] = "card0jsa.bmp";

				 hearts=gcnew cli::array<String^>(13);
				 hearts[0] = "card0jh2.bmp";hearts[1] = "card0jh3.bmp";
				 hearts[2] = "card0jh4.bmp";hearts[3] = "card0jh5.bmp";
				 hearts[4] = "card0jh6.bmp";hearts[5] = "card0jh7.bmp";
				 hearts[6] = "card0jh8.bmp";hearts[7] = "card0jh9.bmp";
				 hearts[8] = "card0jht.bmp";hearts[9] = "card0jhj.bmp";
				 hearts[10] = "card0jhq.bmp";hearts[11] = "card0jhk.bmp";
				 hearts[12] = "card0jha.bmp";
			 }
	private:System::Void Form1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e){
					 Graphics^pg=CreateGraphics();
					 Graphics^pg2=CreateGraphics();

					 Bitmap^bmp = gcnew Bitmap("back05v4.bmp");
					 pg->DrawImage(bmp,30,30);
					 pg2->DrawImage(bmp, 90, 30);
					 }
	
	private:System::Void button1_Click(System::Object^ sender, System::EventArgs^ e){
				this->button2->Visible = true;
				int i=0;
				cardnum = 0;
				hpt=cpt=tie=0;

				reddeck->resetdeck();

				Graphics^pg=CreateGraphics();
				Graphics^pg2=CreateGraphics();

				Bitmap^bmp = gcnew Bitmap("back05v4.bmp");
				pg->DrawImage(bmp,30,30);
				pg2->DrawImage(bmp, 90, 30);

			}
	private:System::Void button2_Click(System::Object^ sender, System::EventArgs^ e){
				int i = 0;
				int high = 0;
				int chpip, uhpip;
				char chsuit, uhsuit;

				Card chand[26];
				Card uhand[26];

				while (i<26)
				{
					Card TCard=node->popnode();
					chand[i].setcard(TCard.getpip(),TCard.getsuit());
					TCard=node2->popnode();
					uhand[i].setcard(TCard.getpip(),TCard.getsuit());
					i++;
				}

				chpip = chand[cardnum].getpip();			
				chsuit = chand[cardnum].getsuit();
				uhpip = uhand[cardnum].getpip();
				uhsuit = uhand[cardnum].getsuit();

				Graphics^pg = CreateGraphics();
				Graphics^pg2 = CreateGraphics();
				Bitmap^bmp;
				Brush^b = gcnew SolidBrush (Color::DarkOrange);
				String ^s1 = "Human";
				String ^s2 = "Computer";

				pg->DrawString(s1, this->Font, b, 30, 120);
				pg->DrawString(s2, this->Font, b, 90, 120);

				switch (chsuit)
				{
				case 'c':
					bmp=gcnew Bitmap(clubs[chpip-2]);
					break;
				case 'd':
					bmp=gcnew Bitmap(diamonds[chpip-2]);
					break;
				case 'h':
					bmp=gcnew Bitmap(hearts[chpip-2]);
					break;
				case 's':
					bmp=gcnew Bitmap(spades[chpip-2]);
					break;
				}

				pg->DrawImage(bmp, 90, 30);

				switch (uhsuit)
				{
				case 'c':
					bmp=gcnew Bitmap(clubs[uhpip-2]);
					break;
				case 'd':
					bmp=gcnew Bitmap(diamonds[uhpip-2]);
					break;
				case 'h':
					bmp=gcnew Bitmap(hearts[uhpip-2]);
					break;
				case 's':
					bmp=gcnew Bitmap(spades[uhpip-2]);
					break;
				}
				pg2->DrawImage(bmp, 30, 30);

				if (chand[cardnum].higher(uhand[cardnum])==1)
				{
					cpt++;
				}
				else if (chand[cardnum].higher(uhand[cardnum])==0)
				{
					tie++;
				}
				else if (chand[cardnum].higher(uhand[cardnum])==-1)
				{
					hpt++;
				}
				cardnum++;
				if (cardnum == 26)
				{
					if (hpt>cpt)
					MessageBox::Show ("Human wins!");
					else if (hpt<cpt)
					MessageBox::Show ("You lose!");
					else
					MessageBox::Show("It's a tie!");

					this->button2->Visible = false;
				}
			}
private: System::Void label4_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void label5_Click(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
		 }
private: System::Void menuStrip1_ItemClicked(System::Object^  sender, System::Windows::Forms::ToolStripItemClickedEventArgs^  e) {
		 }
};
}
