
void FUN_ram_403a61d2(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *apuStack_24 [4];
  int aiStack_14 [2];
  
  if (*(char *)*param_2 == '\0') {
    param_1 = (undefined4 *)*param_1;
    *(char *)*param_2 = '\x01';
    apuStack_24[0] = param_2;
    iVar1 = FUN_ram_403a6074();
    if (iVar1 == 0) {
      iVar1 = FUN_ram_40397156(*param_1,apuStack_24,0xffffffff,1);
    }
    else {
      iVar1 = FUN_ram_40397350(*param_1,apuStack_24,aiStack_14);
      if (aiStack_14[0] == 1) {
        FUN_ram_403969ca();
      }
    }
    if (iVar1 != 1) {
      (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24c0,&DAT_ram_3c0c2534);
      (*(code *)&SUB_ram_40010034)
                (&DAT_ram_3c0c24d0,0x119,
                 "D34EAg8ZAIQfGK8ABQ8ZAAYfPDIABQ8ZAAYffjIABQ8ZAAYf/zIABQ8ZAAUfARkABw+pAQQPGQAGPwP/wEAGAw/CAYQfACwBBQ8ZAAUPvAIGD+8G/////wwPIgsfD2UEBQ9GBYMP9QUGDycGBg8ZAAgPkQUFD6QGBS8A/jIABQ8hBwYffDIABQ+FBwYfODIABQ/pBwYfEDIABQ9ZBgUP2wFrD3ECBQ/WBv9RD4cPAQF3AQ8ZAAEvA5/SDwgi/vhHAgkCAC8fPzYQCB//5hABP/5/gJoQBw/MEAYPshABDxcRCw98AAEBYhEPlBEGD8YRBh8AFhEBKf+ACQEPAgCkUAAAAAAA"
                );
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
  }
  return;
}

