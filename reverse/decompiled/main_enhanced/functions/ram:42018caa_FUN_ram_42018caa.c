
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42018caa(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (_DAT_ram_3fcb97b0 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (_DAT_ram_3fcb97b8 != (int *)0x0) {
      iVar3 = *_DAT_ram_3fcb97b8;
      if (iVar3 != param_1) {
        piVar1 = (int *)FUN_ram_42018c12();
        if (piVar1 == (int *)0x0) {
          return 0;
        }
        if ((iVar3 == 0) || (param_1 == 0)) {
          FUN_ram_4201f046();
          thunk_FUN_ram_4202066e();
        }
        if ((code *)_DAT_ram_3fcb97b8[3] != (code *)0x0) {
          (*(code *)_DAT_ram_3fcb97b8[3])(param_1);
        }
        _DAT_ram_3fcb97b8 = piVar1;
        if ((code *)piVar1[2] != (code *)0x0) {
          (*(code *)piVar1[2])(iVar3);
        }
        DAT_ram_3fcb97bc = 1;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}

