
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420282b0(int param_1,int *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  uint uVar5;
  undefined1 uStack_25;
  undefined4 auStack_24 [3];
  
  bVar1 = *(byte *)(param_1 + 8);
  iVar4 = FUN_ram_4202fef8('\x02' - (bVar1 & 1),6,auStack_24);
  if (iVar4 == 0) {
    iVar4 = 6;
  }
  else {
    if ((bVar1 & 1) == 0) {
      FUN_ram_4039c11e(iVar4,param_1 + 0x18,6);
      *(byte *)(param_1 + 0xd) = (-((*(byte *)(param_1 + 8) & 0x10) == 0) & 0xf8U) + 9;
      FUN_ram_42027010(param_1,&uStack_25);
      uVar5 = FUN_ram_42028026(uStack_25);
      if (uVar5 == *(byte *)(param_1 + 0xd)) {
        *(undefined1 *)(param_2 + 2) = uStack_25;
      }
    }
    else {
      *(undefined1 *)(param_1 + 0x10) = 1;
      *(undefined1 *)(param_1 + 0x11) = DAT_ram_3fcb69bc;
      *(byte *)(param_1 + 0x12) = (byte)((uint)_DAT_ram_3fcb69bc >> 8) & 1;
      uVar3 = FUN_ram_42026fe8();
      *(undefined1 *)(param_1 + 0x14) = 0x10;
      uVar2 = DAT_ram_3fcb69c1;
      *(undefined1 *)(param_1 + 0x13) = uVar3;
      *(undefined1 *)(param_1 + 0x15) = uVar2;
      *(undefined1 *)(param_1 + 0x16) = DAT_ram_3fcb69c2;
      FUN_ram_4039c11e(iVar4,param_1 + 0x11,6);
    }
    iVar4 = FUN_ram_4202ff46(*(undefined2 *)(param_1 + 10),auStack_24[0]);
    auStack_24[0] = 0;
    if (iVar4 == 0) {
      FUN_ram_4202829c(param_1);
      iVar4 = FUN_ram_42027918();
      *param_2 = iVar4;
      if (iVar4 == 0) {
        return;
      }
      *(undefined1 *)(param_2 + 1) = 8;
      *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 2;
      return;
    }
  }
  *param_2 = iVar4;
  if ((bVar1 & 1) == 0) {
    *(undefined1 *)(param_2 + 1) = 8;
  }
  return;
}

