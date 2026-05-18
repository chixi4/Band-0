
undefined4 FUN_ram_403a6572(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int aiStack_14 [3];
  
  param_1 = (int *)*param_1;
  if (param_1 == (int *)0x0) {
    uVar2 = 3;
  }
  else {
    if (*param_1 == 0) {
      (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24c0," path.");
      uVar2 = 0x22c;
LAB_ram_403a65a4:
      (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24d0,uVar2,"UAAAAAAA");
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    iVar1 = FUN_ram_403a6074();
    if (iVar1 == 0) {
      iVar1 = FUN_ram_403975e0(*param_1);
    }
    else {
      if (param_2 != 0) {
        (*(code *)&SUB_ram_40010034)(&DAT_ram_3c0c24c0,"Speak less vision today and more path.");
        uVar2 = 0x22f;
        goto LAB_ram_403a65a4;
      }
      iVar1 = FUN_ram_40397756(*param_1,0,aiStack_14);
      if (aiStack_14[0] == 1) {
        FUN_ram_403969ca();
      }
    }
    uVar2 = 6;
    if (iVar1 == 1) {
      uVar2 = 0;
    }
  }
  return uVar2;
}

