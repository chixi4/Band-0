
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4039da3a(int param_1,uint param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 extraout_a1;
  undefined4 uVar7;
  code *pcVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined8 uVar16;
  int aiStack_44 [3];
  int iStack_38;
  int iStack_34;
  
  aiStack_44[0] = param_1;
  uVar16 = (*(code *)_DAT_ram_3fcb0e08[2])(aiStack_44);
  uVar7 = (undefined4)((ulonglong)uVar16 >> 0x20);
  iVar4 = (int)uVar16;
  if (iVar4 == 0) {
    if ((*(int *)(*(int *)(aiStack_44[0] + 4) + 0x18) == 0) ||
       (*(int *)(*(int *)(aiStack_44[0] + 4) + 0x1c) == 0)) {
      iVar4 = 0x6005;
    }
    else {
      pcVar8 = *(code **)(*(int *)(aiStack_44[0] + 8) + 8);
      if (pcVar8 != (code *)0x0) {
        uVar16 = (*pcVar8)(*(undefined4 *)(aiStack_44[0] + 0xc),param_2,param_3);
        uVar7 = (undefined4)((ulonglong)uVar16 >> 0x20);
        if ((int)uVar16 == 0x10d) {
          return 0x10d;
        }
        if ((int)uVar16 != 0) {
          FUN_ram_40399b58();
          uVar7 = extraout_a1;
        }
      }
      uVar13 = 0;
      iVar10 = *(int *)(aiStack_44[0] + 4);
      if (*(int *)(iVar10 + 0x1c) != 0) {
        uVar13 = *(uint *)(iVar10 + 0x24);
      }
      uVar15 = *(uint *)(iVar10 + 0x20);
      if ((uVar15 == 0) || (uVar13 % uVar15 != 0)) {
        iVar4 = 0x6003;
      }
      else if ((((*(uint *)(aiStack_44[0] + 0x14) < param_2) ||
                (*(uint *)(aiStack_44[0] + 0x14) - param_2 < param_3)) || (param_2 % uVar15 != 0))
              || (param_3 % uVar15 != 0)) {
        iVar4 = 0x102;
      }
      else if (param_3 != 0) {
        uVar11 = param_2;
        uVar14 = param_3;
        if ((*(int *)(iVar10 + 0x38) != 0) && (*(char *)(iVar10 + 0x30) != '\0')) {
          iVar4 = (*(code *)*_DAT_ram_3fcb0e08)();
          if (iVar4 != 0) {
            return iVar4;
          }
          iStack_38 = 0;
          iStack_34 = 0;
          iVar5 = (**(code **)(*(int *)(aiStack_44[0] + 4) + 0x38))(aiStack_44[0],&iStack_38);
          iVar2 = iStack_34;
          iVar10 = iStack_38;
          iVar4 = aiStack_44[0];
          if ((iVar5 == 0) && (iStack_38 != 0 || iStack_34 != 0)) {
            iVar12 = *(int *)(aiStack_44[0] + 4);
            bVar1 = *(byte *)(iVar12 + 0x30);
            for (iVar3 = 0; iVar3 < (int)(uint)bVar1; iVar3 = iVar3 + 1) {
              if (iVar5 != 0) {
                iVar5 = 0x6006;
                break;
              }
              uVar6 = (*(code *)&SUB_ram_40010974)(iVar10,iVar2,iVar3);
              if ((uVar6 & 1) != 0) {
                puVar9 = (uint *)(*(int *)(iVar12 + 0x34) + iVar3 * 8);
                uVar6 = *puVar9;
                if ((uVar6 < param_2 + param_3) && (param_2 < uVar6 + puVar9[1])) {
                  iVar5 = 0x6006;
                }
              }
            }
          }
          uVar16 = (*(code *)_DAT_ram_3fcb0e08[1])(iVar4,iVar5);
          uVar7 = (undefined4)((ulonglong)uVar16 >> 0x20);
          if ((int)uVar16 != 0) {
            return (int)uVar16;
          }
        }
        do {
          pcVar8 = *(code **)(*(int *)(aiStack_44[0] + 4) + 0x68);
          if (pcVar8 != (code *)0x0) {
            uVar16 = (*pcVar8)(aiStack_44[0],0);
            uVar7 = (undefined4)((ulonglong)uVar16 >> 0x20);
            if ((int)uVar16 != 0) {
              return (int)uVar16;
            }
          }
          iVar4 = (*(code *)*_DAT_ram_3fcb0e08)(aiStack_44[0],uVar7);
          if (iVar4 != 0) {
            uVar7 = 0;
            goto LAB_ram_4039dafc;
          }
          if (((uVar13 == 0) || (uVar14 < uVar13)) || (uVar11 % uVar13 != 0)) {
            iVar4 = (**(code **)(*(int *)(aiStack_44[0] + 4) + 0x18))(aiStack_44[0],uVar11);
            uVar6 = uVar15;
          }
          else {
            iVar4 = (**(code **)(*(int *)(aiStack_44[0] + 4) + 0x1c))(aiStack_44[0],uVar11);
            uVar6 = uVar13;
          }
          if ((iVar4 != 0) || (uVar14 - uVar6 == 0)) break;
          iVar4 = (*(code *)_DAT_ram_3fcb0e08[1])(aiStack_44[0]);
          uVar7 = 0;
          uVar11 = uVar11 + uVar6;
          uVar14 = uVar14 - uVar6;
        } while (iVar4 == 0);
        uVar7 = 1;
LAB_ram_4039dafc:
        iVar4 = (*(code *)_DAT_ram_3fcb0e08[3])
                          (aiStack_44[0],iVar4,uVar7,param_2,param_3,(code *)_DAT_ram_3fcb0e08[3]);
      }
    }
  }
  return iVar4;
}

