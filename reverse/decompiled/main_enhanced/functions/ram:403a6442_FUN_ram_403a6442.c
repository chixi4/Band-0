
undefined4 FUN_ram_403a6442(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  param_1 = (int *)*param_1;
  if (param_1 == (int *)0x0) {
    return 3;
  }
  if (*param_1 == 0) {
    (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24c0,"n today and more path.");
    uVar2 = 0x1c6;
  }
  else {
    iVar1 = FUN_ram_403a6074();
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4039771c(*param_1,param_2);
      if (iVar1 != 1) {
        return 6;
      }
      return 0;
    }
    (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24c0," structure often strengthens the work.");
    uVar2 = 0x1ca;
  }
  (*(code *)&SUB_ram_40010034)
            (&DAT_ram_3c0c24d0,uVar2,
             "/wAA/2UAAW/8f4AA/39+AAFff4AA/nxLAABfD7+AAP59AAJfv4AA/OAyAABfA5+AAPyWAAEPGQAGHwEyAAUPGQD/////DB8BZQQEAG8GD34EAg8ZAIQfGK8ABQ8ZAAYfPDIABQ8ZAAYffjIABQ8ZAAYf/zIABQ8ZAAUfARkABw+pAQQPGQAGPwP/wEAGAw/CAYQfACwBBQ8ZAAUPvAIGD+8G/////wwPIgsfD2UEBQ9GBYMP9QUGDycGBg8ZAAgPkQUFD6QGBS8A/jIABQ8hBwYffDIABQ+FBwYfODIABQ/pBwYfEDIABQ9ZBgUP2wFrD3ECBQ/WBv9RD4cPAQF3AQ8ZAAEvA5/SDwgi/vhHAgkCAC8fPzYQCB//5hABP/5/gJoQBw/MEAYPshABDxcRCw98AAEBYhEPlBEGD8YRBh8AFhEBKf+ACQEPAgCkUAAAAAAA"
            );
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

