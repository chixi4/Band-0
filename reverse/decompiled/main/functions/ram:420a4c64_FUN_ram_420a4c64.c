
int FUN_ram_420a4c64(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  byte *pbVar6;
  undefined1 auStack_4c [8];
  byte bStack_44;
  byte bStack_43;
  byte bStack_42;
  byte *pbStack_40;
  int iStack_3c;
  int iStack_38;
  uint uStack_34;
  
  if (param_1[0x22] == 0) {
    do {
      while( true ) {
        uVar3 = param_1[0x20];
        if (uVar3 == 0) break;
        if (param_1[0x1c] != 0) {
          return -0x6c00;
        }
        if (param_1[3] == 0) {
          if (uVar3 < (uint)param_1[0x1e]) {
            param_1[0x1e] = param_1[0x1e] - uVar3;
            FUN_ram_4039c1f2(param_1[0x1b],uVar3 + param_1[0x1b]);
            uVar5 = param_1[0x1e];
            puVar4 = (undefined1 *)param_1[0x19];
            *puVar4 = (char)((uint)uVar5 >> 8);
            puVar4[1] = (char)uVar5;
          }
          else {
            param_1[0x1e] = 0;
          }
          param_1[0x20] = 0;
        }
LAB_ram_420a4ce2:
        if (param_1[0x1e] == 0) goto LAB_ram_420a4d2e;
LAB_ram_420a4ce6:
        iVar2 = FUN_ram_420a4bb2(param_1);
        if ((iVar2 + 0x6680U & 0xfffffeff) != 0) {
          if (iVar2 != 0) {
            return iVar2;
          }
          if ((param_1[0x1d] == 0x16) && (param_2 == 1)) {
            iVar2 = FUN_ram_420a47a8(param_1);
            return iVar2;
          }
          goto LAB_ram_420a4eb2;
        }
      }
      if (param_1[0x1c] != 0) goto LAB_ram_420a4ce2;
      param_1[0x1e] = 0;
LAB_ram_420a4d2e:
      iVar2 = FUN_ram_420a46ee(param_1,5);
      if (iVar2 == 0) {
        pbVar6 = (byte *)param_1[0x18];
        if ((uint)param_1[0x1f] < 5) {
          return -0x7200;
        }
        bStack_44 = *pbVar6;
        if (3 < (byte)(bStack_44 - 0x14)) {
          return -0x7200;
        }
        bStack_43 = pbVar6[1];
        bStack_42 = pbVar6[2];
        if (*(uint *)*param_1 <
            ((uint)(*(ushort *)(pbVar6 + 1) >> 8) | (*(ushort *)(pbVar6 + 1) & 0xff) << 8)) {
          return -0x7200;
        }
        FUN_ram_4039c11e(auStack_4c,param_1[0x17],8);
        iStack_38 = 5;
        uStack_34 = (uint)(*(ushort *)(pbVar6 + 3) >> 8) | (*(ushort *)(pbVar6 + 3) & 0xff) << 8;
        iStack_3c = uStack_34 + 5;
        if (uStack_34 == 0) {
          return -0x7200;
        }
        pbStack_40 = pbVar6;
        iVar2 = FUN_ram_420a46ee(param_1);
        if (iVar2 == 0) {
          param_1[0x1f] = 0;
          if (param_1[0xf] != 0) {
            iVar2 = FUN_ram_420a42c6(param_1,param_1[0xf],auStack_4c);
            if (iVar2 != 0) {
              if (iVar2 == -0x7180) {
LAB_ram_420a4e0c:
                FUN_ram_420a4a96(param_1,2,0x14);
                return -0x7180;
              }
              goto LAB_ram_420a4ea8;
            }
            if (uStack_34 == 0) {
              if ((param_1[2] == 0x303) && (bStack_44 != 0x17)) {
                return -0x7200;
              }
              iVar2 = param_1[0x21];
              param_1[0x21] = iVar2 + 1;
              if (3 < iVar2 + 1) goto LAB_ram_420a4e0c;
            }
            else {
              param_1[0x21] = 0;
            }
            iVar2 = 8;
            while( true ) {
              iVar2 = iVar2 + -1;
              cVar1 = *(char *)(param_1[0x17] + iVar2);
              *(char *)(param_1[0x17] + iVar2) = cVar1 + '\x01';
              if (cVar1 != -1) break;
              if (iVar2 == 0) {
                return -0x6b80;
              }
            }
          }
          if (0x2000 < uStack_34) {
            return -0x7200;
          }
          FUN_ram_420a4acc(param_1);
          param_1[0x1a] = param_1[0x19] + 2;
          param_1[0x1d] = (uint)bStack_44;
          *(byte *)param_1[0x18] = bStack_44;
          puVar4 = (undefined1 *)param_1[0x19];
          param_1[0x1b] = pbStack_40 + iStack_38;
          param_1[0x1e] = uStack_34;
          *puVar4 = (char)(uStack_34 >> 8);
          puVar4[1] = (char)uStack_34;
          goto LAB_ram_420a4ce6;
        }
      }
LAB_ram_420a4ea8:
    } while (iVar2 == -0x6580);
  }
  else {
    param_1[0x22] = 0;
LAB_ram_420a4eb2:
    iVar2 = 0;
  }
  return iVar2;
}

