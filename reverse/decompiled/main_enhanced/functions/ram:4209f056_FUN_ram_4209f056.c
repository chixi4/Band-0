
uint FUN_ram_4209f056(int param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  undefined1 *puVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char cVar7;
  undefined4 uVar8;
  int iVar9;
  
  if (*(int *)(param_1 + 0x230) == 2) {
    iVar9 = *(int *)(param_1 + 0x1e8);
    uVar6 = *(undefined4 *)(param_1 + 0x1ec);
    iVar1 = *(int *)(param_1 + 0x1f0);
    uVar8 = *(undefined4 *)(param_1 + 500);
    if ((-(uint)(*(int *)(param_1 + 0x1c0) == 0) & 0xffffffee) + 0x28 <= param_3) {
      *param_2 = 0x30;
      param_2[3] = 0;
      param_2[2] = 1;
      iVar4 = FUN_ram_4209c930(2,uVar6);
      if (iVar4 != 0) {
        param_2[4] = (char)((uint)iVar4 >> 0x18);
        param_2[5] = (char)((uint)iVar4 >> 0x10);
        param_2[6] = (char)((uint)iVar4 >> 8);
        param_2[7] = (char)iVar4;
        if ((*(char *)(param_1 + 0x31d) == '\0') && (iVar1 != 1)) {
          param_2[1] = 6;
          return 8;
        }
        param_2[8] = 1;
        param_2[9] = 0;
        iVar4 = FUN_ram_4209c930(2,iVar9);
        if ((iVar4 != 0) && (iVar9 != 1)) {
          param_2[10] = (char)((uint)iVar4 >> 0x18);
          param_2[0xb] = (char)((uint)iVar4 >> 0x10);
          param_2[0xc] = (char)((uint)iVar4 >> 8);
          param_2[0xd] = (char)iVar4;
          param_2[0xe] = 1;
          param_2[0xf] = 0;
          if ((iVar1 != 1) && (iVar1 != 2)) {
            if (iVar1 == 0x80) {
              iVar1 = 5;
            }
            else if (iVar1 == 0x100) {
              iVar1 = 6;
            }
            else if (iVar1 == 0x20000) {
              iVar1 = 0xc;
            }
            else {
              if (iVar1 != 0x10000) {
                return 0xffffffff;
              }
              iVar1 = 0xb;
            }
          }
          param_2[0x11] = 0xf;
          param_2[0x12] = 0xac;
          param_2[0x10] = 0;
          param_2[0x13] = (char)iVar1;
          cVar7 = '\0';
          if (*(char *)(param_1 + 0x31e) != '\0') {
            cVar7 = (*(char *)(param_1 + 799) != '\0') * '@' + -0x80;
          }
          iVar1 = 0x16;
          param_2[0x15] =
               (byte)(((uint)*(byte *)(param_1 + 0x321) << 10) >> 8) |
               (byte)(((uint)*(byte *)(param_1 + 0x322) << 0xb) >> 8);
          param_2[0x14] = cVar7;
          if (*(int *)(param_1 + 0x1c0) != 0) {
            param_2[0x16] = 1;
            param_2[0x17] = 0;
            FUN_ram_4039c11e(param_2 + 0x18,*(int *)(param_1 + 0x1c0) + 4,0x10);
            iVar1 = 0x28;
          }
          puVar2 = param_2 + iVar1;
          iVar1 = FUN_ram_4209c15a(uVar8);
          if (iVar1 != 0) {
            if (*(int *)(param_1 + 0x1c0) == 0) {
              puVar2[1] = 0;
              *puVar2 = 0;
              puVar2 = puVar2 + 2;
            }
            uVar6 = FUN_ram_4209c930(2,uVar8);
            *puVar2 = (char)((uint)uVar6 >> 0x18);
            puVar2[1] = (char)((uint)uVar6 >> 0x10);
            puVar2[2] = (char)((uint)uVar6 >> 8);
            puVar2[3] = (char)uVar6;
            puVar2 = puVar2 + 4;
          }
          uVar3 = (int)puVar2 - (int)param_2;
          param_2[1] = (char)uVar3 + -2;
          if (param_3 < uVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_ram_4039bf9e(0,0,0,0);
          }
          return uVar3;
        }
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x230) == 4) {
      return 0;
    }
    iVar9 = *(int *)(param_1 + 0x1e8);
    uVar6 = *(undefined4 *)(param_1 + 0x1ec);
    iVar1 = *(int *)(param_1 + 0x1f0);
    if (0x17 < param_3) {
      *param_2 = 0xdd;
      param_2[3] = 0x50;
      param_2[2] = 0;
      param_2[4] = 0xf2;
      param_2[5] = 1;
      param_2[7] = 0;
      param_2[6] = 1;
      iVar4 = FUN_ram_4209c930(1,uVar6);
      if (iVar4 != 0) {
        param_2[8] = (char)((uint)iVar4 >> 0x18);
        param_2[9] = (char)((uint)iVar4 >> 0x10);
        param_2[0xb] = (char)iVar4;
        param_2[10] = (char)((uint)iVar4 >> 8);
        param_2[0xc] = 1;
        param_2[0xd] = 0;
        iVar4 = FUN_ram_4209c930(1,iVar9);
        if ((iVar4 != 0) && ((iVar5 = FUN_ram_4209c90c(iVar9), iVar5 != 0 || (iVar9 == 1)))) {
          param_2[0xe] = (char)((uint)iVar4 >> 0x18);
          param_2[0xf] = (char)((uint)iVar4 >> 0x10);
          param_2[0x10] = (char)((uint)iVar4 >> 8);
          param_2[0x11] = (char)iVar4;
          param_2[0x12] = 1;
          param_2[0x13] = 0;
          if ((iVar1 != 1) && (iVar1 != 2)) {
            if (iVar1 != 0x10) {
              return 0xffffffff;
            }
            iVar1 = 0;
          }
          param_2[0x15] = 0x50;
          param_2[0x16] = 0xf2;
          param_2[0x17] = (char)iVar1;
          param_2[0x14] = 0;
          param_2[1] = 0x16;
          return 0x18;
        }
      }
    }
  }
  return 0xffffffff;
}

