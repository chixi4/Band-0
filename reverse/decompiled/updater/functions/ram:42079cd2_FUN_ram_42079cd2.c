
undefined4 FUN_ram_42079cd2(int param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 ******ppppppuVar5;
  int *piVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int *piVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  char cStack_40;
  char cStack_3f;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 *****local_34;
  
  iVar2 = FUN_ram_40396242();
  iVar9 = 0;
  uVar8 = param_2;
  do {
    iVar3 = FUN_ram_40395806(*(undefined4 *)(param_1 + 4),&local_50,uVar8);
    if (iVar3 != 1) {
      return 0;
    }
    FUN_ram_40395a18(*(undefined4 *)(param_1 + 0x10),0xffffffff);
    iVar3 = iStack_44;
    if ((iStack_4c == 0x3c071424) && (FUN_ram_42079802(iStack_44), *(char *)(iVar3 + 0x10) != '\0'))
    {
      thunk_FUN_ram_40390608(*(undefined4 *)(iVar3 + 0xc));
    }
    uVar4 = FUN_ram_403968bc();
    *(undefined4 *)(param_1 + 0xc) = uVar4;
    puVar14 = *(undefined4 **)(param_1 + 0x14);
    while (puVar14 != (undefined4 *)0x0) {
      puVar10 = (undefined4 *)puVar14[2];
      puVar13 = (undefined4 *)*puVar14;
      while (puVar11 = puVar13, puVar11 != (undefined4 *)0x0) {
        puVar13 = (undefined4 *)puVar11[1];
        if (*(char *)(puVar11 + 2) == '\0') {
          puVar11 = (undefined4 *)*puVar11;
          FUN_ram_40399daa(&cStack_40,&local_50);
          ppppppuVar5 = (undefined4 ******)0x0;
          if ((cStack_3f != '\0') && (ppppppuVar5 = &local_34, cStack_40 != '\0')) {
            ppppppuVar5 = (undefined4 ******)local_34;
          }
          (*(code *)*puVar11)(puVar11[1],uStack_3c,uStack_38,ppppppuVar5);
        }
      }
      piVar12 = (int *)puVar14[1];
LAB_ram_42079dac:
      piVar7 = piVar12;
      puVar14 = puVar10;
      if (piVar7 != (int *)0x0) {
        piVar12 = (int *)piVar7[3];
        if (*piVar7 == iStack_4c) {
          puVar14 = (undefined4 *)piVar7[1];
          while (puVar13 = puVar14, puVar13 != (undefined4 *)0x0) {
            puVar14 = (undefined4 *)puVar13[1];
            if (*(char *)(puVar13 + 2) == '\0') {
              puVar13 = (undefined4 *)*puVar13;
              FUN_ram_40399daa(&cStack_40,&local_50);
              ppppppuVar5 = (undefined4 ******)0x0;
              if ((cStack_3f != '\0') && (ppppppuVar5 = &local_34, cStack_40 != '\0')) {
                ppppppuVar5 = (undefined4 ******)local_34;
              }
              (*(code *)*puVar13)(puVar13[1],uStack_3c,uStack_38,ppppppuVar5);
            }
          }
          piVar7 = (int *)piVar7[2];
          do {
            piVar6 = piVar7;
            if (piVar6 == (int *)0x0) goto LAB_ram_42079dac;
            piVar7 = (int *)piVar6[2];
          } while (*piVar6 != iStack_48);
          puVar14 = (undefined4 *)piVar6[1];
          while (puVar13 = puVar14, puVar13 != (undefined4 *)0x0) {
            puVar14 = (undefined4 *)puVar13[1];
            if (*(char *)(puVar13 + 2) == '\0') {
              puVar13 = (undefined4 *)*puVar13;
              FUN_ram_40399daa(&cStack_40,&local_50);
              ppppppuVar5 = (undefined4 ******)0x0;
              if ((cStack_3f != '\0') && (ppppppuVar5 = &local_34, cStack_40 != '\0')) {
                ppppppuVar5 = (undefined4 ******)local_34;
              }
              (*(code *)*puVar13)(puVar13[1],uStack_3c,uStack_38,ppppppuVar5);
            }
          }
        }
        goto LAB_ram_42079dac;
      }
    }
    if ((local_50 & 0xff) != 0) {
      thunk_FUN_ram_40390608(iStack_44);
    }
    local_50 = 0;
    iStack_4c = 0;
    iStack_48 = 0;
    iStack_44 = 0;
    iVar3 = iVar2;
    uVar1 = uVar8;
    if (param_2 != 0xffffffff) {
      iVar3 = FUN_ram_40396242();
      uVar1 = uVar8 - (iVar3 - iVar2);
      iVar9 = iVar9 - (uint)(uVar8 < uVar1);
      if ((iVar9 < 1) && ((iVar9 != 0 || (uVar1 == 0)))) {
        FUN_ram_4039566c(*(undefined4 *)(param_1 + 0x10));
        return 0;
      }
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
    FUN_ram_4039566c(*(undefined4 *)(param_1 + 0x10));
    iVar2 = iVar3;
    uVar8 = uVar1;
  } while( true );
}

