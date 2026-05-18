
int FUN_ram_42065314(int param_1,undefined1 *param_2,uint param_3)

{
  int iVar1;
  undefined1 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  int iVar8;
  
  if (*(int *)(param_1 + 0x230) == 2) {
    iVar8 = *(int *)(param_1 + 0x1e8);
    uVar5 = *(undefined4 *)(param_1 + 0x1ec);
    iVar1 = *(int *)(param_1 + 0x1f0);
    uVar7 = *(undefined4 *)(param_1 + 500);
    if ((-(uint)(*(int *)(param_1 + 0x1c0) == 0) & 0xffffffee) + 0x28 <= param_3) {
      *param_2 = 0x30;
      param_2[3] = 0;
      param_2[2] = 1;
      iVar3 = FUN_ram_42062796(2,uVar5);
      if (iVar3 != 0) {
        param_2[4] = (char)((uint)iVar3 >> 0x18);
        param_2[5] = (char)((uint)iVar3 >> 0x10);
        param_2[6] = (char)((uint)iVar3 >> 8);
        param_2[7] = (char)iVar3;
        if ((*(char *)(param_1 + 0x31d) == '\0') && (iVar1 != 1)) {
          param_2[1] = 6;
          return 8;
        }
        param_2[8] = 1;
        param_2[9] = 0;
        iVar3 = FUN_ram_42062796(2,iVar8);
        if ((iVar3 != 0) && (iVar8 != 1)) {
          param_2[10] = (char)((uint)iVar3 >> 0x18);
          param_2[0xb] = (char)((uint)iVar3 >> 0x10);
          param_2[0xc] = (char)((uint)iVar3 >> 8);
          param_2[0xd] = (char)iVar3;
          param_2[0xe] = 1;
          param_2[0xf] = 0;
          if ((iVar1 == 1) || (iVar1 == 2)) {
            uVar6 = (undefined1)iVar1;
          }
          else if (iVar1 == 0x80) {
            uVar6 = 5;
          }
          else if (iVar1 == 0x100) {
            uVar6 = 6;
          }
          else if (iVar1 == 0x400) {
            uVar6 = 8;
          }
          else if (iVar1 == 0x4000000) {
            uVar6 = 0x18;
          }
          else if (iVar1 == 0x400000) {
            uVar6 = 0x12;
          }
          else if (iVar1 == 0x20000) {
            uVar6 = 0xc;
          }
          else {
            if (iVar1 != 0x10000) {
              return -1;
            }
            uVar6 = 0xb;
          }
          param_2[0x11] = 0xf;
          param_2[0x13] = uVar6;
          param_2[0x10] = 0;
          param_2[0x12] = 0xac;
          uVar6 = 0;
          if ((((*(char *)(param_1 + 0x31e) != '\0') &&
               (uVar6 = 0xc0, *(char *)(param_1 + 799) == '\0')) && (iVar1 != 0x400)) &&
             (iVar1 != 0x400000)) {
            uVar6 = 0x80;
          }
          iVar1 = 0x16;
          param_2[0x15] =
               (byte)(((uint)*(byte *)(param_1 + 0x322) << 0xb) >> 8) |
               (byte)(((uint)*(byte *)(param_1 + 0x321) << 10) >> 8);
          param_2[0x14] = uVar6;
          if (*(int *)(param_1 + 0x1c0) != 0) {
            param_2[0x16] = 1;
            param_2[0x17] = 0;
            FUN_ram_40399daa(param_2 + 0x18,*(int *)(param_1 + 0x1c0) + 4,0x10);
            iVar1 = 0x28;
          }
          puVar2 = param_2 + iVar1;
          iVar1 = FUN_ram_42061e92(uVar7);
          if (iVar1 != 0) {
            if (*(int *)(param_1 + 0x1c0) == 0) {
              puVar2[1] = 0;
              *puVar2 = 0;
              puVar2 = puVar2 + 2;
            }
            uVar5 = FUN_ram_42062796(2,uVar7);
            *puVar2 = (char)((uint)uVar5 >> 0x18);
            puVar2[1] = (char)((uint)uVar5 >> 0x10);
            puVar2[2] = (char)((uint)uVar5 >> 8);
            puVar2[3] = (char)uVar5;
            puVar2 = puVar2 + 4;
          }
          param_2[1] = (char)((int)puVar2 - (int)param_2) + -2;
          return (int)puVar2 - (int)param_2;
        }
      }
    }
  }
  else {
    if (*(int *)(param_1 + 0x230) == 4) {
      return 0;
    }
    iVar8 = *(int *)(param_1 + 0x1e8);
    uVar5 = *(undefined4 *)(param_1 + 0x1ec);
    iVar1 = *(int *)(param_1 + 0x1f0);
    if (0x17 < param_3) {
      *param_2 = 0xdd;
      param_2[3] = 0x50;
      param_2[2] = 0;
      param_2[4] = 0xf2;
      param_2[5] = 1;
      param_2[7] = 0;
      param_2[6] = 1;
      iVar3 = FUN_ram_42062796(1,uVar5);
      if (iVar3 != 0) {
        param_2[8] = (char)((uint)iVar3 >> 0x18);
        param_2[9] = (char)((uint)iVar3 >> 0x10);
        param_2[0xb] = (char)iVar3;
        param_2[10] = (char)((uint)iVar3 >> 8);
        param_2[0xc] = 1;
        param_2[0xd] = 0;
        iVar3 = FUN_ram_42062796(1,iVar8);
        if ((iVar3 != 0) && ((iVar4 = FUN_ram_42062772(iVar8), iVar4 != 0 || (iVar8 == 1)))) {
          param_2[0xe] = (char)((uint)iVar3 >> 0x18);
          param_2[0xf] = (char)((uint)iVar3 >> 0x10);
          param_2[0x10] = (char)((uint)iVar3 >> 8);
          param_2[0x11] = (char)iVar3;
          param_2[0x12] = 1;
          param_2[0x13] = 0;
          if ((iVar1 != 1) && (iVar1 != 2)) {
            if (iVar1 != 0x10) {
              return -1;
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
  return -1;
}

