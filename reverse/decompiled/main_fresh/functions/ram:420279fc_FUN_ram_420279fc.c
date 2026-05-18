
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420279fc(undefined4 param_1,undefined4 *param_2,int *param_3)

{
  byte bVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 uStack_b8;
  undefined2 uStack_b4;
  undefined1 uStack_b2;
  byte bStack_b1;
  undefined1 uStack_b0;
  byte bStack_af;
  undefined1 auStack_ac [7];
  undefined1 uStack_a5;
  undefined1 auStack_a4 [11];
  undefined1 auStack_99 [33];
  undefined1 auStack_78 [10];
  undefined1 uStack_6e;
  byte bStack_28;
  
  iVar3 = FUN_ram_4202d598(param_2,6);
  *param_3 = iVar3;
  if (iVar3 != 0) {
    return;
  }
  iVar6 = *(int *)*param_2;
  thunk_FUN_ram_4202b7dc();
  iVar3 = FUN_ram_420279b4(param_1,0xff,0xffffffff,&uStack_b8);
  if (iVar3 != 0) {
    if (*(char *)(iVar3 + 0xd) != '\b') {
      *(undefined1 *)(param_3 + 1) = 8;
      *param_3 = 0x408;
      *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 0x10;
      thunk_FUN_ram_4202b7f6();
      return;
    }
    FUN_ram_4202773a(uStack_b8);
    FUN_ram_420276e4(iVar3);
  }
  thunk_FUN_ram_4202b7f6();
  iVar3 = FUN_ram_420278f6(param_1);
  if (iVar3 != 0) {
    *(undefined1 *)(param_3 + 1) = 8;
    *param_3 = iVar3;
    return;
  }
  thunk_FUN_ram_4202b7dc();
  iVar3 = FUN_ram_4202710e();
  if (iVar3 != 0) {
    *(short *)(iVar3 + 10) = (short)param_1;
    *(undefined1 *)(iVar3 + 0xd) = 0;
    FUN_ram_42026fba();
    *(undefined1 *)(iVar3 + 0x10) = 1;
    FUN_ram_4039c11e(iVar3 + 0x11,iVar6,6);
    iVar4 = thunk_FUN_ram_420365de(param_1);
    if (((*(byte *)(iVar4 + 0x34) & 1) == 0) && (DAT_ram_3fcb69be != 1)) {
      bVar1 = *(byte *)(iVar6 + 3);
      if (bVar1 < 7) {
        *(undefined1 *)(param_3 + 1) = 6;
        iVar3 = 0x406;
      }
      else if (bVar1 < 0x11) {
        if ((_DAT_ram_3fcb69bc & 0x1000) != 0) {
          if ((*(byte *)(iVar6 + 2) & 8) == 0) {
            *(undefined1 *)(param_3 + 1) = 3;
            iVar3 = 0x403;
          }
          else {
            if (bVar1 == 0x10) goto LAB_ram_42027bae;
            *(undefined1 *)(param_3 + 1) = 6;
            iVar3 = 0x406;
          }
          *param_3 = iVar3;
          *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 2;
          goto LAB_ram_42027af2;
        }
LAB_ram_42027bae:
        if ((DAT_ram_3fcb69be < 3) || ((*(byte *)(iVar6 + 2) & 4) != 0)) {
          uVar2 = DAT_ram_3fcb69bc;
          *(undefined1 *)(iVar3 + 0x17) = 2;
          *(undefined1 *)(iVar3 + 0x18) = uVar2;
          *(byte *)(iVar3 + 0x19) = (byte)(_DAT_ram_3fcb69bc >> 8) & 1;
          uVar2 = FUN_ram_42026fe8();
          bVar1 = DAT_ram_3fcb69c2;
          *(undefined1 *)(iVar3 + 0x1b) = 0x10;
          *(undefined1 *)(iVar3 + 0x1a) = uVar2;
          *(byte *)(iVar3 + 0x1c) = *(byte *)(iVar3 + 0x15) & bVar1;
          *(byte *)(iVar3 + 0x1d) = *(byte *)(iVar3 + 0x16) & DAT_ram_3fcb69c1;
          FUN_ram_42027768(iVar3);
          uVar5 = (uint)*(byte *)(iVar3 + 8);
          uVar2 = *(undefined1 *)(iVar3 + 0xf);
          *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) | 1;
          goto LAB_ram_42027af6;
        }
        *(undefined1 *)(param_3 + 1) = 3;
        iVar3 = 0x403;
      }
      else {
        *(undefined1 *)(param_3 + 1) = 10;
        iVar3 = 0x40a;
      }
    }
    else {
      *(undefined1 *)(param_3 + 1) = 7;
      iVar3 = 0x407;
    }
    *param_3 = iVar3;
  }
LAB_ram_42027af2:
  uVar2 = 0;
  uVar5 = 0;
LAB_ram_42027af6:
  thunk_FUN_ram_4202b7f6();
  if (*param_3 == 0) {
    do {
      iVar3 = FUN_ram_4202e30c(param_1,auStack_a4);
      if (iVar3 != 0) {
LAB_ram_42027b28:
        if (iVar3 == 5) {
          return;
        }
        goto LAB_ram_42027b2e;
      }
      uStack_a5 = 0;
      FUN_ram_4039c11e(auStack_ac,auStack_99,7);
      iVar3 = FUN_ram_4202ce90(auStack_ac,auStack_78);
      if (iVar3 != 0) goto LAB_ram_42027b28;
      uStack_b2 = uStack_6e;
      bStack_b1 = bStack_b1 & 0xfc | bStack_28 & 3;
      bStack_af = (byte)(uVar5 >> 3) & 2 | (byte)(uVar5 >> 3) & 1 | (byte)(uVar5 >> 3) & 4 |
                  bStack_af & 0xf8;
      uStack_b4 = (short)param_1;
      uStack_b0 = uVar2;
      iVar3 = FUN_ram_4202f9b2(&uStack_b4);
    } while (iVar3 == 1);
    iVar3 = 2;
LAB_ram_42027b2e:
    *param_3 = iVar3;
    *(byte *)(param_3 + 5) = *(byte *)(param_3 + 5) & 0xfe;
  }
  return;
}

