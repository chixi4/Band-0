
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42024092(char *param_1)

{
  char cVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 uVar5;
  undefined1 uStack_17;
  ushort uStack_16;
  undefined4 uStack_14;
  
  cVar1 = *param_1;
  if (cVar1 != '\x02') {
    if (cVar1 == '\x03') {
      iVar4 = FUN_ram_420300a0(**(undefined4 **)(param_1 + 8));
      if (iVar4 != 0x2908) {
        return;
      }
      iVar4 = FUN_ram_42029a52(*(undefined2 *)(param_1 + 4),&uStack_14);
      if (iVar4 == 0) {
        FUN_ram_4202d538(uStack_14,&uStack_16,2,0);
        uVar2 = **(undefined2 **)(*(int *)(param_1 + 8) + 0xc);
        uStack_17 = 1;
        iVar4 = FUN_ram_42023b5a(uStack_16 & 0xff,uStack_16 >> 8,&uStack_17);
        if (iVar4 != 0) {
          *(undefined2 *)(iVar4 + 0xc) = uVar2;
          (*(code *)&SUB_ram_40011a08)(uStack_14);
          return;
        }
      }
    }
    else if (cVar1 == '\x01') {
      iVar4 = FUN_ram_420300a0(*(undefined4 *)(*(int *)(param_1 + 8) + 4));
      if (iVar4 != 0x1812) {
        return;
      }
      iVar4 = *(int *)(gp + -0x778) + 1;
      *(int *)(gp + -0x778) = iVar4;
      *(undefined2 *)(iVar4 * 0x18 + *(int *)(_DAT_ram_3fcc518c + 0x54) + 0x10) =
           *(undefined2 *)(param_1 + 4);
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  iVar4 = FUN_ram_420300a0(**(undefined4 **)(param_1 + 8));
  if (iVar4 == 0x2a4c) {
    *(undefined2 *)(*(int *)(_DAT_ram_3fcc518c + 0x54) + *(int *)(gp + -0x778) * 0x18 + 0x12) =
         *(undefined2 *)(param_1 + 6);
    return;
  }
  if (iVar4 == 0x2a4e) {
    *(undefined2 *)(*(int *)(_DAT_ram_3fcc518c + 0x54) + *(int *)(gp + -0x778) * 0x18 + 0x14) =
         *(undefined2 *)(param_1 + 6);
    return;
  }
  if (iVar4 == 0x2a22) {
    uVar5 = 1;
  }
  else {
    if (iVar4 != 0x2a32) {
      if (iVar4 != 0x2a33) {
        return;
      }
      uVar5 = 1;
      uVar3 = 2;
      goto LAB_ram_42024168;
    }
    uVar5 = 2;
  }
  uVar3 = 1;
LAB_ram_42024168:
  uStack_17 = 0;
  iVar4 = FUN_ram_42024036(uVar3,uVar5,&uStack_17);
  if (iVar4 != 0) {
    *(undefined2 *)(iVar4 + 0xc) = *(undefined2 *)(param_1 + 6);
  }
  return;
}

