
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42018cf4(int param_1,ushort *param_2,uint param_3)

{
  byte bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  uint uVar7;
  ushort uVar8;
  uint uVar9;
  int *piVar10;
  
  if (param_2 == (ushort *)0x0) {
    return 0x102;
  }
  piVar2 = _DAT_ram_3fcb66b0;
  if (param_3 == 0) {
LAB_ram_42018d0c:
    iVar3 = 0;
  }
  else {
    for (; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[0xb]) {
      if (*piVar2 == param_1) {
        if ((char)piVar2[4] == '\0') {
LAB_ram_42018d3e:
          if ((piVar2[5] == 0) && ((char)piVar2[6] == '\0')) {
            if ((*(uint *)(piVar2[2] + 4) & 0xfffffffd) == 0) {
              uVar6 = (ushort)(byte)*param_2;
              uVar8 = 0xe9;
            }
            else {
              if (*(uint *)(piVar2[2] + 4) != 3) goto LAB_ram_42018d42;
              uVar6 = *param_2;
              uVar8 = 0x50aa;
            }
            param_1 = 0x1503;
            if (uVar6 != uVar8) {
              return 0x1503;
            }
          }
        }
        else {
          param_1 = piVar2[1];
          uVar4 = piVar2[5];
          uVar9 = *(uint *)(param_1 + 0x14);
          uVar7 = uVar4 / uVar9;
          uVar5 = ((param_3 - 1) + uVar4) / uVar9;
          if (uVar4 % uVar9 == 0) {
            iVar3 = (uVar5 + 1) - uVar7;
LAB_ram_42018d84:
            iVar3 = FUN_ram_420195a0(param_1,uVar4,iVar3 * uVar9);
            param_1 = 0;
            if (iVar3 != 0) {
              return iVar3;
            }
            goto LAB_ram_42018d3e;
          }
          if (uVar7 != uVar5) {
            iVar3 = uVar5 - uVar7;
            uVar4 = (uVar7 + 1) * uVar9;
            goto LAB_ram_42018d84;
          }
        }
LAB_ram_42018d42:
        iVar3 = thunk_FUN_ram_40391b46(param_1);
        if (iVar3 != 0) {
          uVar4 = (uint)*(byte *)(piVar2 + 6);
          if (uVar4 != 0) {
            uVar5 = 0x10 - uVar4;
            if (param_3 < 0x10 - uVar4) {
              uVar5 = param_3;
            }
            piVar10 = piVar2 + 7;
            FUN_ram_40399daa(uVar4 + (int)piVar10,param_2,uVar5);
            bVar1 = *(byte *)(piVar2 + 6);
            *(char *)(piVar2 + 6) = (char)(bVar1 + uVar5);
            if ((bVar1 + uVar5 & 0xff) != 0x10) goto LAB_ram_42018d0c;
            iVar3 = FUN_ram_420194e0(piVar2[1],piVar2[5],piVar10,0x10);
            if (iVar3 != 0) {
              return iVar3;
            }
            (*(code *)&SUB_ram_40010488)(piVar10,0xff,0x10);
            param_2 = (ushort *)((int)param_2 + uVar5);
            param_3 = param_3 - uVar5;
            piVar2[5] = piVar2[5] + 0x10;
          }
          uVar4 = param_3 & 0xf;
          *(char *)(piVar2 + 6) = (char)uVar4;
          if (uVar4 != 0) {
            param_3 = param_3 - uVar4;
            FUN_ram_40399daa(piVar2 + 7,(byte *)((int)param_2 + param_3));
          }
        }
        iVar3 = FUN_ram_420194e0(piVar2[1],piVar2[5],param_2,param_3);
        if (iVar3 != 0) {
          return iVar3;
        }
        piVar2[5] = piVar2[5] + param_3;
        return 0;
      }
    }
    iVar3 = 0x102;
  }
  return iVar3;
}

