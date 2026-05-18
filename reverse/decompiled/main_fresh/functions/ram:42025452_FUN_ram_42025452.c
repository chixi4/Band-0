
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42025452(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  
  iVar1 = (*(code *)&SUB_ram_40011a40)(0x3fcb6abc,*param_1);
  if (iVar1 != 0) {
    FUN_ram_40396f68(*(undefined4 *)*param_1,0);
    return;
  }
  piVar2 = (int *)(*(code *)&SUB_ram_40011a44)(0x3fcb6abc);
  *param_1 = piVar2;
  if (piVar2 == (int *)0x0) {
    (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24c0,&DAT_ram_3c0c2578);
    uVar3 = 0x8c;
  }
  else {
    *(undefined1 *)piVar2 = 0;
    *(undefined1 *)((int)piVar2 + 1) = 0;
    *(undefined1 *)((int)piVar2 + 2) = 0;
    *(undefined1 *)((int)piVar2 + 3) = 0;
    iVar1 = FUN_ram_40397076(_DAT_ram_3fcb6a56,4,0);
    *piVar2 = iVar1;
    if (iVar1 != 0) {
      return;
    }
    (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24c0,&DAT_ram_3c0c2580);
    uVar3 = 0x8f;
  }
  (*(code *)&SUB_ram_40010034)
            (&DAT_ram_3c0c24d0,uVar3,
             "/wwPIgsfD2UEBQ9GBYMP9QUGDycGBg8ZAAgPkQUFD6QGBS8A/jIABQ8hBwYffDIABQ+FBwYfODIABQ/pBwYfEDIABQ9ZBgUP2wFrD3ECBQ/WBv9RD4cPAQF3AQ8ZAAEvA5/SDwgi/vhHAgkCAC8fPzYQCB//5hABP/5/gJoQBw/MEAYPshABDxcRCw98AAEBYhEPlBEGD8YRBh8AFhEBKf+ACQEPAgCkUAAAAAAA"
            );
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

