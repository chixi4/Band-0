
undefined4 FUN_ram_420659c0(int param_1,int param_2,int param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  
  if (param_1 == 0) {
    return 0x102;
  }
  uVar2 = 0x102;
  if ((param_2 != 0) && (uVar2 = 0xffffffff, *(char *)(param_1 + 8) != '\0')) {
    iVar3 = *(int *)(param_1 + 0x310);
    uVar2 = 0x105;
    if ((*(ushort *)(iVar3 + 0x34) & 0x10) != 0) {
      uVar1 = (uint)*(ushort *)(iVar3 + 0x4a);
      uVar2 = 0xb004;
      if (uVar1 <= param_3 - 1U) {
        iVar3 = FUN_ram_4039c11e(param_2,(uint)*(ushort *)(iVar3 + 0x48) + param_1 + 8,uVar1);
        *(undefined1 *)(iVar3 + uVar1) = 0;
        uVar2 = 0;
      }
      return uVar2;
    }
  }
  return uVar2;
}

