
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42023142(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0x102;
  }
  _DAT_ram_3fcb369c = param_1;
  iVar1 = FUN_ram_4207b520(0);
  if (iVar1 != 0) {
    uVar2 = FUN_ram_420216ca(param_1,iVar1);
    return uVar2;
  }
  return 0xffffffff;
}

