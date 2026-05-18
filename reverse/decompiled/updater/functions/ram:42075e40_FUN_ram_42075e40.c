
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42075e40(int param_1,int param_2,undefined4 param_3,ushort *param_4,int *param_5)

{
  uint uVar1;
  sbyte sVar2;
  ushort uVar3;
  short sVar4;
  short sVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  char cVar10;
  ushort uVar11;
  uint uVar12;
  code *pcVar13;
  int iVar14;
  char cVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  int iVar19;
  int iStack_58;
  int iStack_54;
  int iStack_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  
  iStack_58 = 0;
  iStack_54 = 0;
  iStack_50 = 0;
  iStack_4c = 0;
  iStack_48 = 0;
  iStack_44 = 0;
  uVar11 = *param_4;
  uVar3 = param_4[1];
  uVar6 = (**(code **)(_DAT_ram_3fcb640c + 0x74))(1,2);
  uVar9 = 0;
  uVar12 = 0;
  do {
    uVar1 = uVar9 & 0x1f;
    uVar9 = uVar9 + 1;
    uVar12 = uVar12 + ((int)(uVar6 & 0xff) >> uVar1 & 1U) & 0xff;
  } while (uVar9 != 7);
  iVar14 = 1;
  if ((param_2 != 0) && (iVar14 = 6, param_1 == 0)) {
    iVar14 = 0;
  }
  cVar10 = '\b';
  iVar18 = 0x36;
  cVar15 = (param_2 == 0) + '\x01';
  do {
    iVar17 = (int)(short)uVar3;
    iVar16 = (int)(short)uVar11;
    pcVar13 = *(code **)(_DAT_ram_3fcb640c + 0x70);
    *param_4 = uVar11;
    param_4[1] = uVar3;
    (*pcVar13)(2,cVar15,uVar11);
    (**(code **)(_DAT_ram_3fcb640c + 0x70))(3,cVar15,param_4[1]);
    if (param_2 == 0) {
      (*(code *)&SUB_ram_40010044)(10);
      FUN_ram_42075d86(param_3,1,param_5);
      sVar2 = 3 < uVar12;
    }
    else {
      (**(code **)(_DAT_ram_3fcb640c + 0x70))(1,2,0);
      (*(code *)&SUB_ram_40010044)(10);
      FUN_ram_42075d86(param_3,1,&iStack_58);
      (**(code **)(_DAT_ram_3fcb640c + 0x70))(1,2,0x20);
      (*(code *)&SUB_ram_40010044)(10);
      FUN_ram_42075d86(param_3,1,&iStack_4c);
      *param_5 = iStack_4c - iStack_58;
      param_5[1] = iStack_48 - iStack_54;
      iVar18 = iStack_44;
      if (iStack_44 < iStack_50) {
        iVar18 = iStack_50;
      }
      sVar2 = 3;
      if (param_1 == 0) {
        sVar2 = 0;
      }
    }
    iVar19 = 0;
    iVar7 = (*(code *)&SUB_ram_4001220c)(*param_5);
    if (iVar14 <= iVar7) {
      iVar19 = (int)(short)(*param_5 >> sVar2);
    }
    iVar7 = (*(code *)&SUB_ram_4001220c)(param_5[1]);
    if (iVar7 < iVar14) {
      if (iVar19 == 0) {
        iVar7 = 0;
        goto LAB_ram_42075f5a;
      }
LAB_ram_42075f76:
      iVar7 = 1;
      if (param_5[1] < 1) {
        iVar7 = (int)((uint)(param_5[1] != 0) * -0x10000) >> 0x10;
      }
    }
    else {
      iVar7 = (int)(short)(param_5[1] >> sVar2);
      if (iVar19 == 0) {
LAB_ram_42075f5a:
        iVar19 = 1;
        if (*param_5 < 1) {
          iVar19 = (int)((uint)(*param_5 != 0) * -0x10000) >> 0x10;
        }
      }
      if (iVar7 == 0) goto LAB_ram_42075f76;
    }
    if (param_2 != 0) {
      if (0x2c < iVar18) {
        iVar7 = 0;
        iVar19 = 0;
      }
      if (param_2 == 2) {
        sVar4 = (*(code *)&SUB_ram_40012218)(iVar19,5,0xfffffffb);
        sVar5 = (*(code *)&SUB_ram_40012218)(iVar7,5,0xfffffffb);
        iVar19 = (int)sVar4;
        iVar7 = (int)sVar5;
      }
    }
    iVar8 = (*(code *)&SUB_ram_4001220c)(*param_5);
    if (((iVar8 <= iVar14) && (iVar8 = (*(code *)&SUB_ram_4001220c)(param_5[1]), iVar8 <= iVar14))
       && (iVar18 < 0x2e)) break;
    iVar8 = (*(code *)&SUB_ram_4001220c)(*param_5);
    if (iVar14 < iVar8) {
      iVar16 = (int)(((uint)uVar11 - iVar19) * 0x10000) >> 0x10;
    }
    iVar19 = (*(code *)&SUB_ram_4001220c)(param_5[1]);
    if (iVar14 < iVar19) {
      iVar17 = (iVar17 - iVar7) * 0x10000 >> 0x10;
    }
    if (0x1ff < iVar16) {
      iVar16 = 0x1ff;
    }
    uVar11 = (ushort)iVar16;
    if (iVar16 << 0x10 < 0) {
      uVar11 = 0;
    }
    if (0x1ff < iVar17) {
      iVar17 = 0x1ff;
    }
    uVar3 = (ushort)iVar17;
    if (iVar17 << 0x10 < 0) {
      uVar3 = 0;
    }
    cVar10 = cVar10 + -1;
  } while (cVar10 != '\0');
  if ((short)*param_4 < 0) {
    *param_4 = 0;
  }
  else if (0x1ff < (short)*param_4) {
    *param_4 = 0x1ff;
  }
  if ((short)param_4[1] < 0) {
    param_4[1] = 0;
  }
  else if (0x1ff < (short)param_4[1]) {
    param_4[1] = 0x1ff;
  }
  (**(code **)(_DAT_ram_3fcb640c + 0x70))(2,cVar15,*param_4);
  (**(code **)(_DAT_ram_3fcb640c + 0x70))(3,cVar15,param_4[1]);
  return;
}

