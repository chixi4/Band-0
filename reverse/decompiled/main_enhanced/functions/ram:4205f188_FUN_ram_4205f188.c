
undefined4 FUN_ram_4205f188(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uStack_18;
  undefined1 auStack_14 [4];
  
  iVar1 = *(int *)(param_1 + 0xc);
  if ((iVar1 != 0) &&
     (((uVar2 = *(uint *)(iVar1 + 0x54), (uVar2 & 0x40) != 0 ||
       (((*(int *)(iVar1 + 0x2c) != 0 && (*(int *)(iVar1 + 0x28) != 0)) &&
        (*(int *)(iVar1 + 0x18) != 0)))) && (iVar4 = *(int *)(iVar1 + 0x14), iVar4 != 0)))) {
    if (*(int *)(iVar1 + 0x10) == 0) {
      iVar3 = FUN_ram_4039c08e(1,0x54);
      *(int *)(iVar1 + 0x10) = iVar3;
      if (iVar3 == 0) goto LAB_ram_4205f1b8;
    }
    if ((uVar2 & 0x20) == 0) {
      iVar3 = *(int *)(iVar1 + 8);
      iVar4 = FUN_ram_42053612(*(undefined4 *)(iVar1 + 0x10),iVar3,iVar3 + 4,iVar3 + 8,iVar1,iVar4,
                               0x42041e3e);
      if (iVar4 != 0) {
        iVar4 = *(int *)(iVar1 + 0x10);
        if ((*(int *)(iVar1 + 0x38) != 0) && (iVar4 != 0)) {
          *(undefined4 *)(iVar4 + 0x40) = 0x4204ea88;
        }
        uVar2 = *(uint *)(iVar1 + 0x54);
        *(int *)(iVar4 + 0x1c) = iVar1;
        if ((uVar2 & 8) != 0) {
          FUN_ram_420585b0(60000,0x4204ec12);
        }
        iVar4 = *(int *)(iVar1 + 0x10);
        if ((*(uint *)(iVar1 + 0x54) & 4) != 0) {
          FUN_ram_42053758(iVar4);
          FUN_ram_4205386a(iVar4);
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
          if (iVar4 == 0) {
            return 0;
          }
          if ((*(byte *)(iVar4 + 0x39) & 1) == 0) {
            return 0;
          }
          iVar3 = *(int *)(iVar1 + 8);
          FUN_ram_4039c11e(&uStack_18,iVar3,4);
          FUN_ram_4039c11e(auStack_14,iVar3 + 4);
          FUN_ram_42097fd8(*(undefined4 *)(iVar1 + 0x24),0x4204eb80,iVar1);
          FUN_ram_4209787e(*(undefined4 *)(iVar1 + 0x24),1,auStack_14,4);
          iVar4 = FUN_ram_42097fe6(*(undefined4 *)(iVar1 + 0x24),iVar4,uStack_18);
          if (iVar4 != 0) {
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
  }
LAB_ram_4205f1b8:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

