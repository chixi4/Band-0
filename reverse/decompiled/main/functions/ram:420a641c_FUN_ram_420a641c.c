
undefined4 FUN_ram_420a641c(undefined4 param_1,int param_2,int param_3,int param_4,uint *param_5)

{
  undefined4 uVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  
  iVar2 = 0x80;
  if ((param_4 == 0x303) && (param_3 == 0)) {
    uVar4 = (uint)*(byte *)(param_2 + 10);
    iVar2 = 0x20;
    if (uVar4 != 7) {
      if (uVar4 < 8) {
        if (uVar4 != 1) {
          iVar2 = (uint)(uVar4 - 2 < 3) << 7;
        }
      }
      else {
        iVar2 = (uint)(uVar4 - 9 < 2) << 3;
      }
    }
  }
  iVar2 = FUN_ram_420a9dba(param_1,iVar2);
  uVar1 = 0;
  if (iVar2 != 0) {
    *param_5 = *param_5 | 0x800;
    uVar1 = 0xffffffff;
  }
  if (param_3 == 0) {
    pcVar3 = &DAT_ram_3c0c3a4c;
  }
  else {
    pcVar3 = "Turn complexity into actions.";
  }
  iVar2 = FUN_ram_420a9dfc(param_1,pcVar3,8);
  if (iVar2 != 0) {
    uVar1 = 0xffffffff;
    *param_5 = *param_5 | 0x1000;
  }
  return uVar1;
}

