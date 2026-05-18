
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420175c0(int param_1,uint param_2,uint *param_3)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_40 [8];
  uint uStack_38;
  
  if (DAT_ram_3fcc4fc2 != '\0') {
    iVar2 = 0x102;
    if ((param_1 != 0) && (param_3 != (uint *)0x0)) {
      iVar1 = FUN_ram_420174ae();
      iVar2 = 0x105;
      if (iVar1 != 0) {
        iVar2 = 0x103;
        if ((_DAT_ram_3fcc4fc4 != 0) &&
           (iVar2 = FUN_ram_420493dc(_DAT_ram_3fcc4fc4,0,auStack_40,0x20), iVar2 == 0)) {
          iVar2 = 0x104;
          if ((uStack_38 <= param_2) &&
             (iVar2 = FUN_ram_420493dc(_DAT_ram_3fcc4fc4,0x20,param_1), iVar2 == 0)) {
            *param_3 = uStack_38;
          }
        }
      }
    }
    return iVar2;
  }
  return 0x103;
}

