
undefined4 FUN_ram_420b3472(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 *******pppppppuVar6;
  int *piVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  uint local_50;
  char *pcStack_4c;
  int iStack_48;
  int iStack_44;
  char cStack_40;
  char cStack_3f;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 ******local_34;
  
  if (param_1 != 0) {
    iVar3 = FUN_ram_403980d6();
    iVar9 = 0;
    uVar8 = param_2;
    do {
      iVar4 = FUN_ram_403974ca(*(undefined4 *)(param_1 + 4),&local_50,uVar8);
      if (iVar4 != 1) {
        return 0;
      }
      FUN_ram_4039771c(*(undefined4 *)(param_1 + 0x10),0xffffffff);
      iVar4 = iStack_44;
      if (pcStack_4c == "e, not add features.") {
        if (iStack_44 == 0) break;
        FUN_ram_420b2f52(iStack_44);
        if (*(char *)(iVar4 + 0x10) != '\0') {
          thunk_FUN_ram_40390634(*(undefined4 *)(iVar4 + 0xc));
        }
      }
      uVar5 = FUN_ram_403989ea();
      *(undefined4 *)(param_1 + 0xc) = uVar5;
      puVar12 = *(undefined4 **)(param_1 + 0x14);
      while (puVar12 != (undefined4 *)0x0) {
        puVar10 = (undefined4 *)puVar12[2];
        puVar13 = (undefined4 *)*puVar12;
        while (puVar11 = puVar13, puVar11 != (undefined4 *)0x0) {
          puVar13 = (undefined4 *)puVar11[1];
          if (*(char *)(puVar11 + 2) == '\0') {
            puVar11 = (undefined4 *)*puVar11;
            FUN_ram_4039c11e(&cStack_40,&local_50);
            pppppppuVar6 = (undefined4 *******)0x0;
            if ((cStack_3f != '\0') && (pppppppuVar6 = &local_34, cStack_40 != '\0')) {
              pppppppuVar6 = (undefined4 *******)local_34;
            }
            (*(code *)*puVar11)(puVar11[1],uStack_3c,uStack_38,pppppppuVar6);
          }
        }
        puVar12 = (undefined4 *)puVar12[1];
LAB_ram_420b3562:
        puVar13 = puVar12;
        puVar12 = puVar10;
        if (puVar13 != (undefined4 *)0x0) {
          puVar12 = (undefined4 *)puVar13[3];
          if ((char *)*puVar13 == pcStack_4c) {
            puVar11 = (undefined4 *)puVar13[1];
            while (puVar14 = puVar11, puVar14 != (undefined4 *)0x0) {
              puVar11 = (undefined4 *)puVar14[1];
              if (*(char *)(puVar14 + 2) == '\0') {
                puVar14 = (undefined4 *)*puVar14;
                FUN_ram_4039c11e(&cStack_40,&local_50);
                pppppppuVar6 = (undefined4 *******)0x0;
                if ((cStack_3f != '\0') && (pppppppuVar6 = &local_34, cStack_40 != '\0')) {
                  pppppppuVar6 = (undefined4 *******)local_34;
                }
                (*(code *)*puVar14)(puVar14[1],uStack_3c,uStack_38,pppppppuVar6);
              }
            }
            piVar1 = (int *)puVar13[2];
            do {
              piVar7 = piVar1;
              if (piVar7 == (int *)0x0) goto LAB_ram_420b3562;
              piVar1 = (int *)piVar7[2];
            } while (*piVar7 != iStack_48);
            puVar13 = (undefined4 *)piVar7[1];
            while (puVar11 = puVar13, puVar11 != (undefined4 *)0x0) {
              puVar13 = (undefined4 *)puVar11[1];
              if (*(char *)(puVar11 + 2) == '\0') {
                puVar11 = (undefined4 *)*puVar11;
                FUN_ram_4039c11e(&cStack_40,&local_50);
                pppppppuVar6 = (undefined4 *******)0x0;
                if ((cStack_3f != '\0') && (pppppppuVar6 = &local_34, cStack_40 != '\0')) {
                  pppppppuVar6 = (undefined4 *******)local_34;
                }
                (*(code *)*puVar11)(puVar11[1],uStack_3c,uStack_38,pppppppuVar6);
              }
            }
          }
          goto LAB_ram_420b3562;
        }
      }
      if ((local_50 & 0xff) != 0) {
        thunk_FUN_ram_40390634(iStack_44);
      }
      local_50 = 0;
      pcStack_4c = (char *)0x0;
      iStack_48 = 0;
      iStack_44 = 0;
      iVar4 = iVar3;
      uVar2 = uVar8;
      if (param_2 != 0xffffffff) {
        iVar4 = FUN_ram_403980d6();
        uVar2 = uVar8 - (iVar4 - iVar3);
        iVar9 = iVar9 - (uint)(uVar8 < uVar2);
        if ((iVar9 < 1) && ((iVar9 != 0 || (uVar2 == 0)))) {
          FUN_ram_403972dc(*(undefined4 *)(param_1 + 0x10));
          return 0;
        }
      }
      *(undefined4 *)(param_1 + 0xc) = 0;
      FUN_ram_403972dc(*(undefined4 *)(param_1 + 0x10));
      iVar3 = iVar4;
      uVar8 = uVar2;
    } while( true );
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

