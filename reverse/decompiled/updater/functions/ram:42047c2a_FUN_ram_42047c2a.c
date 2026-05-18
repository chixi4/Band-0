
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42047c2a(int param_1)

{
  undefined1 uVar1;
  undefined1 uVar2;
  int iVar3;
  undefined4 extraout_a3;
  undefined4 extraout_a4;
  
  uVar2 = DAT_ram_3fcb5386;
  uVar1 = DAT_ram_3fcb5385;
  DAT_ram_3fcb5385 = param_1 == 0;
  DAT_ram_3fcb5386 = !(bool)DAT_ram_3fcb5385;
  FUN_ram_40392eec(6,param_1 + 2);
  iVar3 = (*_DAT_ram_3fcb5590)(param_1,0,0,extraout_a3,extraout_a4,_DAT_ram_3fcb5590);
  if (iVar3 == 0) {
    DAT_ram_3fcb5385 = uVar1;
    DAT_ram_3fcb5386 = uVar2;
  }
  return;
}

