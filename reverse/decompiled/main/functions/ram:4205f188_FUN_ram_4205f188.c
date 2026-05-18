
undefined4 FUN_ram_4205f188(int param_1)

{
  int iVar1;
  uint unaff_s1;
  int iVar2;
  int iVar3;
  int extraout_a5;
  uint uVar4;
  undefined4 uStack_18;
  undefined1 auStack_14 [4];
  
  iVar1 = *(int *)(param_1 + 0xc);
  if (iVar1 == 0) goto LAB_ram_4205f1b8;
  unaff_s1 = *(uint *)(iVar1 + 0x54);
  if ((unaff_s1 & 0x40) == 0) {
    if (*(int *)(iVar1 + 0x2c) == 0) goto LAB_ram_4205f1b8;
    if (*(int *)(iVar1 + 0x28) == 0) goto LAB_ram_4205f1b8;
    if (*(int *)(iVar1 + 0x18) == 0) goto LAB_ram_4205f1b8;
  }
  iVar3 = *(int *)(iVar1 + 0x14);
  if (iVar3 == 0) goto LAB_ram_4205f1b8;
  if (*(int *)(iVar1 + 0x10) == 0) goto LAB_ram_4205f1c0;
  do {
    unaff_s1 = unaff_s1 & 0x20;
    if (unaff_s1 == 0) {
      iVar2 = *(int *)(iVar1 + 8);
      iVar3 = FUN_ram_42053612(*(undefined4 *)(iVar1 + 0x10),iVar2,iVar2 + 4,iVar2 + 8,iVar1,iVar3,
                               0x42041e3e);
      if (iVar3 != 0) {
        iVar3 = *(int *)(iVar1 + 0x10);
        if ((*(int *)(iVar1 + 0x38) != 0) && (iVar3 != 0)) {
          *(undefined4 *)(iVar3 + 0x40) = 0x4204ea88;
        }
        uVar4 = *(uint *)(iVar1 + 0x54);
        *(int *)(iVar3 + 0x1c) = iVar1;
        if ((uVar4 & 8) != 0) {
          FUN_ram_420585b0(60000,0x4204ec12);
        }
        iVar3 = *(int *)(iVar1 + 0x10);
        if ((*(uint *)(iVar1 + 0x54) & 4) != 0) {
          FUN_ram_42053758(iVar3);
          FUN_ram_4205386a(iVar3);
        }
        if ((*(uint *)(iVar1 + 0x54) & 2) == 0) {
          if (((*(uint *)(iVar1 + 0x54) & 1) != 0) && (*(int *)(iVar1 + 0x3c) != 2)) {
            return 0;
          }
        }
        else {
          if (*(int *)(iVar1 + 0x40) != 0) {
            if (*(int *)(iVar1 + 0x40) != 1) {
              return 0;
            }
            return 0x5004;
          }
          if (iVar3 == 0) {
            return 0;
          }
          if ((*(byte *)(iVar3 + 0x39) & 1) == 0) {
            return 0;
          }
          iVar2 = *(int *)(iVar1 + 8);
          FUN_ram_4039c11e(&uStack_18,iVar2,4);
          FUN_ram_4039c11e(auStack_14,iVar2 + 4);
          FUN_ram_42097fd8(*(undefined4 *)(iVar1 + 0x24),0x4204eb80,iVar1);
          FUN_ram_4209787e(*(undefined4 *)(iVar1 + 0x24),1,auStack_14,4);
          iVar3 = FUN_ram_42097fe6(*(undefined4 *)(iVar1 + 0x24),iVar3,uStack_18);
          if (iVar3 != 0) {
            *(undefined4 *)(iVar1 + 0x40) = 0;
            return 0x500d;
          }
          *(undefined4 *)(iVar1 + 0x40) = 1;
        }
        FUN_ram_4205eeb4(iVar1,1);
        return 0;
      }
      FUN_ram_4205ebc6(iVar1);
    }
LAB_ram_4205f1b8:
    do {
      FUN_ram_4039bf1e();
      iVar3 = extraout_a5;
LAB_ram_4205f1c0:
      iVar2 = FUN_ram_4039c08e(1,0x54);
      *(int *)(iVar1 + 0x10) = iVar2;
    } while (iVar2 == 0);
  } while( true );
}

