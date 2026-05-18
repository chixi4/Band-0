
void FUN_ram_403a6086(undefined4 *param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 *puStack_18;
  int aiStack_14 [3];
  
  param_1 = (undefined4 *)*param_1;
  puStack_18 = (undefined4 *)0x0;
  iVar1 = FUN_ram_403a6074();
  if (iVar1 == 0) {
    uVar2 = FUN_ram_403974ca(*param_1,&puStack_18);
  }
  else {
    if (param_2 != 0) {
      (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24c0,"return before surface appeal.");
      uVar3 = 0xd4;
      goto LAB_ram_403a60be;
    }
    uVar2 = FUN_ram_40397756(*param_1,&puStack_18,aiStack_14);
    if (aiStack_14[0] == 1) {
      FUN_ram_403969ca();
    }
  }
  if (uVar2 < 2) {
    if ((puStack_18 != (undefined4 *)0x0) && ((undefined1 *)*puStack_18 != (undefined1 *)0x0)) {
      *(undefined1 *)*puStack_18 = 0;
    }
    return;
  }
  (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24c0,"e surface appeal.");
  uVar3 = 0xdc;
LAB_ram_403a60be:
  (*(code *)&SUB_ram_40010034)
            (&DAT_ram_3c0c24d0,uVar3,
             "ARkABw+pAQQPGQAGPwP/wEAGAw/CAYQfACwBBQ8ZAAUPvAIGD+8G/////wwPIgsfD2UEBQ9GBYMP9QUGDycGBg8ZAAgPkQUFD6QGBS8A/jIABQ8hBwYffDIABQ+FBwYfODIABQ/pBwYfEDIABQ9ZBgUP2wFrD3ECBQ/WBv9RD4cPAQF3AQ8ZAAEvA5/SDwgi/vhHAgkCAC8fPzYQCB//5hABP/5/gJoQBw/MEAYPshABDxcRCw98AAEBYhEPlBEGD8YRBh8AFhEBKf+ACQEPAgCkUAAAAAAA"
            );
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

