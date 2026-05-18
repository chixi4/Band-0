
undefined4 FUN_ram_420252a6(undefined4 *param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = (*(code *)&SUB_ram_40011a40)(0x3fcb6a5c,*param_1);
  if (iVar1 == 0) {
    piVar2 = (int *)(*(code *)&SUB_ram_40011a44)(0x3fcb6a5c);
    *param_1 = piVar2;
    if (piVar2 == (int *)0x0) {
      return 3;
    }
    *(undefined1 *)piVar2 = 0;
    *(undefined1 *)((int)piVar2 + 1) = 0;
    *(undefined1 *)((int)piVar2 + 2) = 0;
    *(undefined1 *)((int)piVar2 + 3) = 0;
    iVar1 = FUN_ram_4039731c(4);
    *piVar2 = iVar1;
    if (iVar1 == 0) {
      (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24c0,"n today and more path.");
      (*(code *)&SUB_ram_40010034)
                (&DAT_ram_3c0c24d0,0x16e,
                 "/OAyAABfA5+AAPyWAAEPGQAGHwEyAAUPGQD/////DB8BZQQEAG8GD34EAg8ZAIQfGK8ABQ8ZAAYfPDIABQ8ZAAYffjIABQ8ZAAYf/zIABQ8ZAAUfARkABw+pAQQPGQAGPwP/wEAGAw/CAYQfACwBBQ8ZAAUPvAIGD+8G/////wwPIgsfD2UEBQ9GBYMP9QUGDycGBg8ZAAgPkQUFD6QGBS8A/jIABQ8hBwYffDIABQ+FBwYfODIABQ/pBwYfEDIABQ9ZBgUP2wFrD3ECBQ/WBv9RD4cPAQF3AQ8ZAAEvA5/SDwgi/vhHAgkCAC8fPzYQCB//5hABP/5/gJoQBw/MEAYPshABDxcRCw98AAEBYhEPlBEGD8YRBh8AFhEBKf+ACQEPAgCkUAAAAAAA"
                );
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
  }
  return 0;
}

