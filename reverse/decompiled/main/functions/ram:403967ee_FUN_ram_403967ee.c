
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403967ee(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined8 uVar2;
  
  FUN_ram_4039691e();
  FUN_ram_40396966();
  uVar2 = (*_DAT_ram_3fcb957c)(param_1,param_2);
  iVar1 = _DAT_ram_3fcb9574;
  *(uint *)(_DAT_ram_3fcb9574 + 0xc) =
       *(uint *)(_DAT_ram_3fcb9574 + 0xc) & 0xfff00000 | (uint)((ulonglong)uVar2 >> 0x20) & 0xfffff;
  *(int *)(iVar1 + 0x10) = (int)uVar2;
  *(undefined4 *)(iVar1 + 0x5c) = 1;
  FUN_ram_4039691e();
  FUN_ram_40396994();
  return;
}

