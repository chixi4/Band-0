
void FUN_ram_4205da48(uint *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  
  if (param_1 != (uint *)0x0) goto LAB_ram_4205da64;
  do {
    do {
      do {
        param_1 = (uint *)FUN_ram_4039bf1e();
LAB_ram_4205da64:
      } while ((*param_1 & 0xf0) != 0x10);
    } while (((param_1[1] != 4) || (uVar3 = param_1[2], uVar3 == 0)) || (param_1[0xb] == 0));
    bVar1 = *(byte *)(param_1[0xb] + 8);
    if (bVar1 == 3) {
LAB_ram_4205dab8:
      FUN_ram_4205491a(uVar3,0);
      bVar2 = true;
    }
    else {
      if ((bVar1 & 1) != 0) {
        if ((*(int *)(uVar3 + 0x14) - 5U < 2) || (*(int *)(uVar3 + 0x14) == 8))
        goto LAB_ram_4205dab8;
      }
      bVar2 = false;
      if (((bVar1 & 2) != 0) && ((*(ushort *)(uVar3 + 0x1e) & 0x10) != 0)) goto LAB_ram_4205dab8;
    }
    if (*(int *)(uVar3 + 0x14) == 1) {
      FUN_ram_42054974(uVar3,0);
      if (bVar2) goto LAB_ram_4205dad6;
LAB_ram_4205dba8:
      iVar5 = FUN_ram_42055324(uVar3,bVar1 & 1,bVar1 & 2);
    }
    else {
      if ((bVar1 & 1) != 0) {
        FUN_ram_42054920(uVar3,0);
        FUN_ram_42054974(uVar3,0);
      }
      if ((bVar1 & 2) != 0) {
        FUN_ram_4205493c(uVar3,0);
      }
      if (!bVar2) goto LAB_ram_4205dba8;
      FUN_ram_42054982(uVar3,0,0);
      FUN_ram_42054958(uVar3,0);
LAB_ram_4205dad6:
      iVar5 = FUN_ram_420551a2(uVar3,1);
    }
    if (iVar5 == 0) {
LAB_ram_4205db0e:
      iVar5 = 0;
LAB_ram_4205db10:
      uVar3 = param_1[0xb];
      *(char *)(uVar3 + 4) = (char)iVar5;
      uVar4 = *(undefined4 *)(uVar3 + 0x24);
      param_1[0xb] = 0;
      param_1[1] = 0;
      if (iVar5 == 0) {
        if (bVar2) {
          param_1[2] = 0;
          if ((code *)param_1[0xc] != (code *)0x0) {
            (*(code *)param_1[0xc])(param_1,4,0);
          }
        }
        if (((bVar1 & 1) != 0) && ((code *)param_1[0xc] != (code *)0x0)) {
          (*(code *)param_1[0xc])(param_1,0,0);
        }
        if (((bVar1 & 2) != 0) && ((code *)param_1[0xc] != (code *)0x0)) {
          (*(code *)param_1[0xc])(param_1,2,0);
        }
      }
      FUN_ram_4205c6fa(uVar4);
      return;
    }
    if (iVar5 != -1) goto LAB_ram_4205db10;
    uVar7 = param_1[8];
    if ((int)uVar7 < 1) {
      uVar7 = 20000;
    }
    iVar6 = FUN_ram_4205c954();
    if ((int)uVar7 <= iVar6 - *(int *)(param_1[0xb] + 0xc)) {
      if (!bVar2) goto LAB_ram_4205db10;
      FUN_ram_42054db2(uVar3);
      goto LAB_ram_4205db0e;
    }
    if (*(int *)(uVar3 + 0x14) != 1) {
      if ((bVar1 & 2) != 0) {
        FUN_ram_4205493c(uVar3,0x4204dc06);
      }
      FUN_ram_42054982(uVar3,0x4204dc72,1);
      FUN_ram_42054958(uVar3,0x4204d59a);
      FUN_ram_4205491a(uVar3,param_1);
      return;
    }
  } while( true );
}

