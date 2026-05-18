
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420267da(int param_1)

{
  char cVar1;
  uint uVar2;
  uint *puVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  int iVar9;
  char *pcStack_70;
  undefined4 uStack_6c;
  undefined1 auStack_68 [4];
  undefined4 uStack_64;
  uint uStack_60;
  int iStack_58;
  char *pcStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  int iStack_44;
  uint uStack_40;
  uint *puStack_38;
  
  if (((_DAT_ram_3fcb6b70 != (uint *)0x0) ||
      (_DAT_ram_3fcb6b70 = (uint *)FUN_ram_403a5e02(1,5000), _DAT_ram_3fcb6b70 != (uint *)0x0)) &&
     (puVar3 = _DAT_ram_3fcb6b70, *(char *)((int)_DAT_ram_3fcb6b70 + 0x1386) == '\0')) {
    uVar4 = 3;
    if (5 < *(byte *)(param_1 + 0x53c)) goto LAB_ram_42026b42;
    FUN_ram_4039c11e(_DAT_ram_3fcb6b70,param_1,0x750);
    uVar2 = puVar3[0x4e1];
    if ((*puVar3 & 1) != 0) {
      (*(code *)&SUB_ram_40010488)(&uStack_48,0,0x18);
      pcStack_50 = 
      "AAAQABbBCwBh4PAH8IYQFgA08OHHIQAW+QsAJf/BFgBw34PA4AAAf1QAJoGHCwAlz+AWAFHf///AvU0AUuGAAfCAbgBi4YAB8IegFgAWwBYAJePDIQAVYQsANOAwBxYANOAwDzcANeB4DxYAMeAD8EsAkP//wQAAcAAAP+MAQ+MBgPALAEP3j/HwpQANAgBQ//////8="
      ;
      uStack_40 = 0x1206;
      puStack_38 = (uint *)((int)puVar3 + 2);
      uStack_4c = 0x42016468;
      iVar5 = FUN_ram_420263b2();
      if (iVar5 == 0) goto LAB_ram_42026b40;
      FUN_ram_4039c11e(iVar5,&pcStack_50,0x20);
    }
    (*(code *)&SUB_ram_40010488)(&uStack_4c,0,0x1c);
    iVar5 = (int)puVar3 + 0x73e;
    pcStack_50 = 
    "8OHHIQAW+QsAJf/BFgBw34PA4AAAf1QAJoGHCwAlz+AWAFHf///AvU0AUuGAAfCAbgBi4YAB8IegFgAWwBYAJePDIQAVYQsANOAwBxYANOAwDzcANeB4DxYAMeAD8EsAkP//wQAAcAAAP+MAQ+MBgPALAEP3j/HwpQANAgBQ//////8="
    ;
    uStack_4c = CONCAT31(uStack_4c._1_3_,1);
    uStack_48 = 0x42016468;
    iStack_44 = iVar5;
    (*(code *)&SUB_ram_40010488)(auStack_68,0);
    pcStack_70 = 
    "FgA08OHHIQAW+QsAJf/BFgBw34PA4AAAf1QAJoGHCwAlz+AWAFHf///AvU0AUuGAAfCAbgBi4YAB8IegFgAWwBYAJePDIQAVYQsANOAwBxYANOAwDzcANeB4DxYAMeAD8EsAkP//wQAAcAAAP+MAQ+MBgPALAEP3j/HwpQANAgBQ//////8="
    ;
    uStack_60 = 0x202;
    uStack_6c = 0x42016468;
    iStack_58 = iVar5;
    if ((ushort)puVar3[0x3a8] < 0x17) {
      uVar7 = (ushort)puVar3[0x3a8] + 2;
      *(ushort *)(puVar3 + 0x3a8) = uVar7;
      uStack_64 = FUN_ram_4039c11e(puVar3 + (uVar7 - 2) * 4 + 0x3a9,&pcStack_50,0x20);
      iVar5 = FUN_ram_420263b2();
      if (iVar5 != 0) {
        FUN_ram_4039c11e(iVar5,&pcStack_70,0x20);
        (*(code *)&SUB_ram_40010488)(&uStack_4c,0,0x1c);
        pcStack_50 = 
        "8IYQFgA08OHHIQAW+QsAJf/BFgBw34PA4AAAf1QAJoGHCwAlz+AWAFHf///AvU0AUuGAAfCAbgBi4YAB8IegFgAWwBYAJePDIQAVYQsANOAwBxYANOAwDzcANeB4DxYAMeAD8EsAkP//wQAAcAAAP+MAQ+MBgPALAEP3j/HwpQANAgBQ//////8="
        ;
        uStack_4c = CONCAT31(uStack_4c._1_3_,1);
        uStack_48 = 0x42016468;
        (*(code *)&SUB_ram_40010488)(auStack_68,0);
        pcStack_70 = 
        "4PAH8IYQFgA08OHHIQAW+QsAJf/BFgBw34PA4AAAf1QAJoGHCwAlz+AWAFHf///AvU0AUuGAAfCAbgBi4YAB8IegFgAWwBYAJePDIQAVYQsANOAwBxYANOAwDzcANeB4DxYAMeAD8EsAkP//wQAAcAAAP+MAQ+MBgPALAEP3j/HwpQANAgBQ//////8="
        ;
        uStack_6c = 0x42016468;
        iVar9 = (int)puVar3 + 0x122;
        for (iVar5 = 0; iVar5 < (int)(uint)(byte)puVar3[0x14f]; iVar5 = iVar5 + 1) {
          if (0x16 < (ushort)puVar3[0x3a8]) goto LAB_ram_42026b40;
          uVar7 = (ushort)puVar3[0x3a8] + 2;
          *(ushort *)(puVar3 + 0x3a8) = uVar7;
          iStack_44 = iVar9;
          uVar4 = FUN_ram_4039c11e(puVar3 + (uVar7 - 2) * 4 + 0x3a9,&pcStack_50,0x20);
          cVar1 = *(char *)(iVar9 + -3);
          if (cVar1 == '\x02') {
            uVar8 = 0xe;
          }
          else if (cVar1 == '\x03') {
            uVar8 = 10;
          }
          else {
            if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
              FUN_ram_4039bf9e(0,0,0,0);
            }
            uVar8 = 0x1a;
          }
          uStack_64 = uVar4;
          iStack_58 = iVar9;
          iVar6 = FUN_ram_420263b2();
          iVar9 = iVar9 + 0x106;
          if (iVar6 == 0) goto LAB_ram_42026b40;
          uStack_60 = uVar8 | 0x1200;
          FUN_ram_4039c11e(iVar6,&pcStack_70,0x20);
        }
        if ((*puVar3 >> 1 & 1) != 0) {
          uVar8 = 0;
          if ((*puVar3 >> 4 & 1) != 0) {
            uVar8 = 0x1008;
          }
          (*(code *)&SUB_ram_40010488)(&uStack_48,0,0x18);
          pcStack_50 = 
          "8AfwAAAQABbBCwBh4PAH8IYQFgA08OHHIQAW+QsAJf/BFgBw34PA4AAAf1QAJoGHCwAlz+AWAFHf///AvU0AUuGAAfCAbgBi4YAB8IegFgAWwBYAJePDIQAVYQsANOAwBxYANOAwDzcANeB4DxYAMeAD8EsAkP//wQAAcAAAP+MAQ+MBgPALAEP3j/HwpQANAgBQ//////8="
          ;
          uStack_40 = uVar8 | 0x212;
          puStack_38 = puVar3 + 3;
          uStack_4c = 0x42016468;
          iVar5 = FUN_ram_420263b2();
          if (iVar5 == 0) goto LAB_ram_42026b40;
          FUN_ram_4039c11e(iVar5,&pcStack_50,0x20);
        }
        if ((*puVar3 >> 2 & 1) != 0) {
          (*(code *)&SUB_ram_40010488)(&uStack_48,0,0x18);
          pcStack_50 = 
          "AGHj8AfwAAAQABbBCwBh4PAH8IYQFgA08OHHIQAW+QsAJf/BFgBw34PA4AAAf1QAJoGHCwAlz+AWAFHf///AvU0AUuGAAfCAbgBi4YAB8IegFgAWwBYAJePDIQAVYQsANOAwBxYANOAwDzcANeB4DxYAMeAD8EsAkP//wQAAcAAAP+MAQ+MBgPALAEP3j/HwpQANAgBQ//////8="
          ;
          uStack_40 = 0x120e;
          puStack_38 = puVar3 + 4;
          uStack_4c = 0x42016468;
          iVar5 = FUN_ram_420263b2();
          if (iVar5 == 0) goto LAB_ram_42026b40;
          FUN_ram_4039c11e(iVar5,&pcStack_50,0x20);
        }
        if ((*puVar3 >> 3 & 1) != 0) {
          uVar8 = 0;
          if ((*puVar3 >> 5 & 1) != 0) {
            uVar8 = 0x1008;
          }
          (*(code *)&SUB_ram_40010488)(&uStack_48,0,0x18);
          pcStack_50 = 
          "Fv8BAGHj8AfwAAAQABbBCwBh4PAH8IYQFgA08OHHIQAW+QsAJf/BFgBw34PA4AAAf1QAJoGHCwAlz+AWAFHf///AvU0AUuGAAfCAbgBi4YAB8IegFgAWwBYAJePDIQAVYQsANOAwBxYANOAwDzcANeB4DxYAMeAD8EsAkP//wQAAcAAAP+MAQ+MBgPALAEP3j/HwpQANAgBQ//////8="
          ;
          uStack_40 = uVar8 | 0x212;
          puStack_38 = puVar3 + 7;
          uStack_4c = 0x42016468;
          iVar5 = FUN_ram_420263b2();
          if (iVar5 != 0) {
            FUN_ram_4039c11e(iVar5,&pcStack_50,0x20);
          }
        }
        (*(code *)&SUB_ram_40010488)(&uStack_48,0,0x18);
        pcStack_50 = 
        "CwBh4PAH8IYQFgA08OHHIQAW+QsAJf/BFgBw34PA4AAAf1QAJoGHCwAlz+AWAFHf///AvU0AUuGAAfCAbgBi4YAB8IegFgAWwBYAJePDIQAVYQsANOAwBxYANOAwDzcANeB4DxYAMeAD8EsAkP//wQAAcAAAP+MAQ+MBgPALAEP3j/HwpQANAgBQ//////8="
        ;
        uStack_40 = 0x202;
        puStack_38 = puVar3 + 0x1d2;
        uStack_4c = 0x42016468;
        iVar5 = FUN_ram_420263b2();
        if (iVar5 != 0) {
          FUN_ram_4039c11e(iVar5,&pcStack_50,0x20);
        }
        (*(code *)&SUB_ram_40010488)(&uStack_48,0,0x18);
        pcStack_50 = 
        "ABbBCwBh4PAH8IYQFgA08OHHIQAW+QsAJf/BFgBw34PA4AAAf1QAJoGHCwAlz+AWAFHf///AvU0AUuGAAfCAbgBi4YAB8IegFgAWwBYAJePDIQAVYQsANOAwBxYANOAwDzcANeB4DxYAMeAD8EsAkP//wQAAcAAAP+MAQ+MBgPALAEP3j/HwpQANAgBQ//////8="
        ;
        uStack_40 = 0x1004;
        puStack_38 = puVar3 + 0x1d3;
        uStack_4c = 0x42016468;
        iVar5 = FUN_ram_420263b2();
        if (iVar5 != 0) {
          FUN_ram_4039c11e(iVar5,&pcStack_50,0x20);
        }
        iVar5 = FUN_ram_420263b2();
        if (iVar5 != 0) {
          (*(code *)&SUB_ram_40010488)(iVar5,0,0x20);
          if (*(ushort *)((int)puVar3 + 0x1386) < 2) {
            uVar7 = *(ushort *)((int)puVar3 + 0x1386) + 1;
            *(ushort *)((int)puVar3 + 0x1386) = uVar7;
            *(undefined1 *)(puVar3 + (uint)uVar7 * 4 + 0x4d5) = 1;
            puVar3[(uint)uVar7 * 4 + 0x4d6] = (uint)"";
            puVar3[(uint)uVar7 * 4 + 0x4d8] = (uint)(puVar3 + ((ushort)uVar2 & 0xff) * 8 + 0x409);
            return 0;
          }
        }
      }
    }
  }
LAB_ram_42026b40:
  uVar4 = 6;
LAB_ram_42026b42:
  FUN_ram_420267aa();
  return uVar4;
}

