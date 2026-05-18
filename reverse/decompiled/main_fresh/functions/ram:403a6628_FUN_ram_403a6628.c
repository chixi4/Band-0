
undefined4 FUN_ram_403a6628(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int aiStack_14 [3];
  
  param_1 = (int *)*param_1;
  if (param_1 == (int *)0x0) {
    return 3;
  }
  if (*param_1 == 0) {
    (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24c0," path.");
    uVar2 = 0x246;
  }
  else {
    iVar1 = FUN_ram_403a6074();
    if (iVar1 == 0) {
      iVar1 = FUN_ram_40397156(*param_1,0,0,0);
    }
    else {
      iVar1 = FUN_ram_40397422(*param_1,aiStack_14);
      if (aiStack_14[0] == 1) {
        FUN_ram_403969ca();
      }
    }
    if (iVar1 == 1) {
      return 0;
    }
    (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24c0,&DAT_ram_3c0c2534);
    uVar2 = 0x251;
  }
  (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24d0,uVar2,"lBEGD8YRBh8AFhEBKv+ACgEPAgCjUAAAAAAA");
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

