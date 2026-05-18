
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42030c48(int param_1,int *param_2)

{
  byte bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uStack_14;
  
  bVar1 = *(byte *)(param_1 + 0xc);
  if (bVar1 == 1) {
    bVar1 = *(byte *)(param_1 + 0x110);
    *(byte *)(param_1 + 0x111) =
         ((byte)((int)(uint)*(byte *)((uint)(bVar1 >> 3) + param_1 + 0x1e) >> (bVar1 & 7)) & 1) +
         0x80;
    *(byte *)(param_1 + 0x110) = bVar1 + 1;
LAB_ram_42030c94:
    iVar4 = FUN_ram_4202fef8(3,0x10,&uStack_14);
    uVar2 = _DAT_ram_3fcb6bb4;
    if (iVar4 != 0) {
      uVar3 = FUN_ram_4202829c(param_1);
      iVar4 = FUN_ram_4202b1ca(uVar2,param_1 + 0x112,uVar3,*(undefined1 *)(param_1 + 0x111),iVar4);
      if (iVar4 == 0) {
        iVar4 = FUN_ram_4202ff46(*(undefined2 *)(param_1 + 10));
        if (iVar4 == 0) {
          if ((*(byte *)(param_1 + 8) & 1) != 0) {
            return;
          }
          *(undefined1 *)(param_1 + 0xd) = 2;
          return;
        }
        *param_2 = iVar4;
      }
      else {
        (*(code *)&SUB_ram_40011a08)(uStack_14);
        *param_2 = iVar4;
      }
      goto LAB_ram_42030c72;
    }
    iVar4 = 6;
  }
  else {
    if ((bVar1 < 2) || ((byte)(bVar1 - 2) < 2)) {
      *(undefined1 *)(param_1 + 0x111) = 0;
      goto LAB_ram_42030c94;
    }
    iVar4 = 0x11;
  }
  *param_2 = iVar4;
LAB_ram_42030c72:
  *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 2;
  *(undefined1 *)(param_2 + 1) = 8;
  return;
}

