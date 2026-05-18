
void FUN_ram_403a629a(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  undefined4 *puStack_28;
  uint uStack_24;
  
  pcVar6 = (char *)*param_2;
  if (*pcVar6 != '\0') {
    param_1 = (undefined4 *)*param_1;
    iVar1 = FUN_ram_403a6074();
    if (iVar1 == 0) {
      FUN_ram_40396966();
      iVar1 = FUN_ram_403977fa(*param_1);
      for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
        iVar2 = FUN_ram_403974ca(*param_1,&puStack_28,0);
        if (iVar2 != 1) {
          (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24c0,&DAT_ram_3c0c2534);
          uVar3 = 0x14f;
          goto LAB_ram_403a6324;
        }
        if ((puStack_28 != param_2) &&
           (iVar2 = FUN_ram_40397156(*param_1,&puStack_28,0,0), iVar2 != 1)) {
          (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24c0,&DAT_ram_3c0c2534);
          uVar3 = 0x156;
          goto LAB_ram_403a6324;
        }
      }
      FUN_ram_40396994();
    }
    else {
      uVar4 = 0;
      iVar1 = FUN_ram_4039781e(*param_1);
      for (iVar5 = 0; iVar5 < iVar1; iVar5 = iVar5 + 1) {
        iVar2 = FUN_ram_40397756(*param_1,&puStack_28,&uStack_24);
        if (iVar2 != 1) {
          (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24c0,&DAT_ram_3c0c2534);
          uVar3 = 0x139;
          goto LAB_ram_403a6324;
        }
        uVar4 = uVar4 | uStack_24;
        if (puStack_28 != param_2) {
          iVar2 = FUN_ram_40397350(*param_1,&puStack_28,&uStack_24,0);
          if (iVar2 != 1) {
            (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24c0,&DAT_ram_3c0c2534);
            uVar3 = 0x141;
LAB_ram_403a6324:
            (*(code *)&SUB_ram_40010034)
                      (&DAT_ram_3c0c24d0,uVar3,
                       "HwEyAAUPGQD/////DB8BZQQEAG8GD34EAg8ZAIQfGK8ABQ8ZAAYfPDIABQ8ZAAYffjIABQ8ZAAYf/zIABQ8ZAAUfARkABw+pAQQPGQAGPwP/wEAGAw/CAYQfACwBBQ8ZAAUPvAIGD+8G/////wwPIgsfD2UEBQ9GBYMP9QUGDycGBg8ZAAgPkQUFD6QGBS8A/jIABQ8hBwYffDIABQ+FBwYfODIABQ/pBwYfEDIABQ9ZBgUP2wFrD3ECBQ/WBv9RD4cPAQF3AQ8ZAAEvA5/SDwgi/vhHAgkCAC8fPzYQCB//5hABP/5/gJoQBw/MEAYPshABDxcRCw98AAEBYhEPlBEGD8YRBh8AFhEBKf+ACQEPAgCkUAAAAAAA"
                      );
                    /* WARNING: Subroutine does not return */
            FUN_ram_4039bf9e(0,0,0,0);
          }
          uVar4 = uVar4 | uStack_24;
        }
      }
      if (uVar4 == 1) {
        FUN_ram_403969ca();
      }
    }
    *pcVar6 = '\0';
  }
  return;
}

