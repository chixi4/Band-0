
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4205ef06(uint param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  code *pcVar8;
  int *piVar9;
  undefined4 *puVar10;
  uint uVar11;
  uint uVar12;
  
  fence();
  fence();
  if (DAT_ram_3fcb5fc4 == '\0') {
    return 0xffffffff;
  }
  piVar2 = (int *)FUN_ram_40399d1a(1,0x30);
  if (piVar2 != (int *)0x0) {
    iVar3 = FUN_ram_420221d2(piVar2 + 2);
    if (-1 < iVar3) {
      uVar5 = piVar2[2];
      uVar11 = piVar2[3];
      uVar7 = param_1 + uVar5;
      uVar4 = (uVar7 < param_1) + uVar11;
      piVar2[2] = uVar7;
      piVar2[3] = uVar4;
      if ((uVar11 <= uVar4) && ((uVar11 != uVar4 || (uVar5 <= uVar7)))) {
        param_2 = param_2 + piVar2[4];
        while( true ) {
          uVar12 = uVar7 + 1;
          uVar6 = (uVar12 < uVar7) + uVar4;
          if (param_2 < 1000000) break;
          piVar2[2] = uVar12;
          piVar2[3] = uVar6;
          param_2 = param_2 + -1000000;
          uVar4 = uVar6;
          uVar7 = uVar12;
        }
        piVar2[4] = param_2;
        uVar1 = _DAT_ram_3fcb6870;
        if ((uVar11 <= uVar4) && ((uVar11 != uVar4 || (uVar5 <= uVar7)))) {
          pcVar8 = *(code **)(_DAT_ram_3fcb6854 + 0x54);
          piVar2[6] = param_4;
          piVar2[7] = param_5;
          piVar2[8] = param_3;
          (*pcVar8)(uVar1);
          for (puVar10 = _DAT_ram_3fcb5fa8; puVar10 != (undefined4 *)&DAT_ram_3fcb5fa8;
              puVar10 = (undefined4 *)*puVar10) {
            uVar4 = piVar2[3];
            uVar7 = puVar10[3];
            if (((uVar4 < uVar7) || ((uVar7 == uVar4 && ((uint)piVar2[2] < (uint)puVar10[2])))) ||
               ((piVar2[2] == puVar10[2] && ((uVar4 == uVar7 && (piVar2[4] < (int)puVar10[4]))))))
            break;
          }
          piVar9 = (int *)puVar10[1];
          iVar3 = *piVar9;
          piVar2[1] = (int)piVar9;
          *piVar2 = iVar3;
          *(int **)(iVar3 + 4) = piVar2;
          *piVar9 = (int)piVar2;
          FUN_ram_4205eddc();
          FUN_ram_4205edc2(0);
          (**(code **)(_DAT_ram_3fcb6854 + 0x58))(_DAT_ram_3fcb6870);
          return 0;
        }
      }
    }
    thunk_FUN_ram_40390608(piVar2);
  }
  return 0xffffffff;
}

