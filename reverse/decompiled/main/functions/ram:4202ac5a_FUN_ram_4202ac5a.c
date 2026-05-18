
void FUN_ram_4202ac5a(undefined4 param_1,undefined4 param_2,undefined4 *param_3)

{
  char cVar1;
  undefined2 uVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int *piVar8;
  uint uVar9;
  int *piVar10;
  short sVar11;
  undefined4 *puVar12;
  byte bStack_36;
  byte bStack_35;
  int *apiStack_34 [4];
  
  iVar5 = FUN_ram_42029616(param_3,1,&bStack_36);
  if (iVar5 == 0) {
    puVar12 = (undefined4 *)*param_3;
    uVar2 = *(undefined2 *)(puVar12 + 4);
    cVar1 = *(char *)*puVar12;
    *param_3 = 0;
    (*(code *)&SUB_ram_400119dc)(puVar12,uVar2);
    iVar6 = FUN_ram_4202d5d8(0x19,0,puVar12);
    if (iVar6 == 0) {
      bStack_36 = 0x11;
      sVar11 = 0;
      iVar5 = 6;
    }
    else {
      thunk_FUN_ram_4202b7dc();
      iVar6 = thunk_FUN_ram_420365de(param_1);
      piVar3 = *(int **)(iVar6 + 0x54);
      *(undefined4 *)(iVar6 + 0x54) = 0;
      thunk_FUN_ram_4202b7f6();
      sVar11 = 0;
      if (cVar1 != '\0') {
        piVar4 = (int *)0x0;
        for (piVar10 = piVar3; piVar10 != (int *)0x0; piVar10 = (int *)*piVar10) {
          uVar9 = (uint)*(ushort *)((int)piVar10 + 6);
          if ((piVar4 == (int *)0x0) || (sVar11 = (short)piVar10[1], (short)piVar4[1] != sVar11)) {
            if (uVar9 != 0) {
              sVar11 = (short)piVar10[1];
              goto LAB_ram_4202ad1c;
            }
          }
          else if ((uint)*(ushort *)((int)piVar4 + 6) + (uint)*(ushort *)(piVar4[2] + 0x10) != uVar9
                  ) {
LAB_ram_4202ad1c:
            bStack_36 = 7;
            goto LAB_ram_4202ad46;
          }
          if (0x200 < *(ushort *)(piVar10[2] + 0x10) + uVar9) {
            sVar11 = (short)piVar10[1];
            bStack_36 = 0xd;
            goto LAB_ram_4202ad46;
          }
          piVar4 = piVar10;
        }
        do {
          if (piVar3 == (int *)0x0) {
            bStack_35 = 0;
            sVar11 = 0;
            break;
          }
          sVar11 = (short)piVar3[1];
          piVar4 = piVar3;
          piVar10 = (int *)0x0;
          do {
            piVar3 = piVar4;
            piVar8 = piVar10;
            if ((short)piVar4[1] != sVar11) break;
            piVar8 = (int *)piVar4[2];
            if (piVar10 != (int *)0x0) {
              (*(code *)&SUB_ram_400119f0)(piVar10);
              piVar8 = piVar10;
            }
            piVar4[2] = 0;
            piVar3 = (int *)*piVar4;
            FUN_ram_420297a8(piVar4);
            piVar4 = piVar3;
            piVar10 = piVar8;
          } while (piVar3 != (int *)0x0);
          apiStack_34[0] = piVar8;
          uVar7 = FUN_ram_42029960(sVar11);
          iVar5 = FUN_ram_420297d2(param_1,uVar7,apiStack_34,&bStack_35);
          (*(code *)&SUB_ram_40011a08)(apiStack_34[0]);
        } while (iVar5 == 0);
        iVar5 = 0;
        bStack_36 = bStack_35;
        if (bStack_35 != 0) {
LAB_ram_4202ad46:
          iVar5 = 9;
        }
      }
      apiStack_34[0] = piVar3;
      FUN_ram_4202aa8c(apiStack_34);
    }
  }
  else {
    sVar11 = 0;
    puVar12 = (undefined4 *)0x0;
  }
  FUN_ram_42029b02(param_1,param_2,iVar5,puVar12,0x18,bStack_36,sVar11);
  return;
}

