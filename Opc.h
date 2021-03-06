//---------------------------------------------------------------------------
#ifndef OpcH
#define OpcH
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include "cspin.h"
#include <ComCtrls.hpp>
#include <Buttons.hpp>
//---------------------------------------------------------------------------
class TOpcjeForm : public TForm
{
__published:	// IDE-managed Components
    TLabel *Label1;
    TUpDown *UpDown3;
    TEdit *Edit2;
    TEdit *Edit3;
	TBitBtn *BitBtn1;
    TEdit *Edit1;
    TUpDown *UpDown1;
    TUpDown *UpDown2;
    void __fastcall Edit2KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall Edit1KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
    void __fastcall Edit3KeyDown(TObject *Sender, WORD &Key,
          TShiftState Shift);
private:	// User declarations
public:		// User declarations
    __fastcall TOpcjeForm(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TOpcjeForm *OpcjeForm;
//---------------------------------------------------------------------------
#endif
