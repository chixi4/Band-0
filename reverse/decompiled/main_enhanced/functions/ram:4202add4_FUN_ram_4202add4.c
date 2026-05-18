
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4202add4(void)

{
  undefined4 uVar1;
  int iVar2;
  
  iVar2 = FUN_ram_42029734();
  uVar1 = 6;
  if (iVar2 == 0) {
    FUN_ram_42029766();
    iVar2 = _DAT_ram_3fcb6b84;
    uVar1 = 0;
    if (*(ushort *)(_DAT_ram_3fcb6b88 + 2) != 0) {
      uVar1 = FUN_ram_403a5e02(1,(uint)*(ushort *)(_DAT_ram_3fcb6b88 + 2) * 0x14);
      *(undefined4 *)(iVar2 + 0x20) = uVar1;
      if (*(int *)(_DAT_ram_3fcb6b84 + 0x20) == 0) {
        uVar1 = 6;
      }
      else {
        iVar2 = (*(code *)&SUB_ram_40011a60)
                          (_DAT_ram_3fcb6b84 + 0x24,*(undefined2 *)(_DAT_ram_3fcb6b88 + 2),0x14,
                           *(int *)(_DAT_ram_3fcb6b84 + 0x20),"");
        if (iVar2 == 0) {
          return 0;
        }
        (*(code *)&SUB_ram_40010488)(_DAT_ram_3fcb6b84 + 0x24,0,0x1c);
        uVar1 = 0xb;
      }
      FUN_ram_42029766();
    }
  }
  return uVar1;
}

