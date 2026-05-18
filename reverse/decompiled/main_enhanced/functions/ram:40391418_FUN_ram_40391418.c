
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_40391418(uint param_1,uint param_2,int param_3)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  undefined4 uStack_44;
  undefined1 auStack_40 [4];
  undefined4 uStack_3c;
  undefined4 uStack_34;
  
  uVar7 = *(uint *)(gp + -0x6d0);
  iVar8 = *(int *)(gp + -0x6c4);
  iVar10 = *(int *)(gp + -0x6cc);
  uVar9 = param_2 & 1;
  if (param_2 == 1) {
    puVar1 = (undefined4 *)&DAT_ram_3fcb8c4c;
    FUN_ram_40391242();
    do {
      if ((code *)*puVar1 != (code *)0x0) {
        (*(code *)*puVar1)();
      }
      puVar1 = puVar1 + 1;
    } while (puVar1 != (undefined4 *)&DAT_ram_3fcb8c58);
  }
  else {
    thunk_FUN_ram_40391082();
  }
  uVar3 = FUN_ram_40390f58();
  FUN_ram_40394764(uVar3,uVar3);
  FUN_ram_40394ee6(auStack_40);
  thunk_FUN_ram_403951d4();
  if (((param_1 & 1) != 0) && ((*(uint *)(gp + -0x6c8) & 4) != 0)) {
    uVar2 = 0;
    do {
      uVar6 = *(uint *)(gp + -0x6c8);
      uVar4 = (*(code *)&SUB_ram_40010974)(uVar6 >> 0x14 & 0x3f,0,uVar2);
      if ((uVar4 & 1) != 0) {
        if (((uVar6 >> 0x1a) >> (uVar2 & 0x1f) & 1) == 0) {
          iVar5 = FUN_ram_42047c24(uVar2);
          if (iVar5 != 0) goto LAB_ram_403914cc;
          iVar5 = FUN_ram_42047d6c(uVar2);
        }
        else {
          iVar5 = FUN_ram_42047c92();
          if (iVar5 != 0) goto LAB_ram_403914cc;
          iVar5 = FUN_ram_42047cfe(uVar2);
        }
        if ((iVar5 != 0) || (iVar5 = FUN_ram_42048760(uVar2), iVar5 != 0)) {
LAB_ram_403914cc:
                    /* WARNING: Subroutine does not return */
          FUN_ram_4039bf1e();
        }
      }
      uVar2 = uVar2 + 1;
    } while (uVar2 != 6);
    _DAT_ram_600080fc = _DAT_ram_600080fc & 0xffffffbf;
  }
  FUN_ram_403913ce(uVar9);
  uVar2 = 0;
  if (param_3 != 0) {
    uVar2 = *(uint *)(gp + -0x6c8) & 0x154ec;
  }
  if (param_2 != 1) {
    uVar4 = FUN_ram_40395d96();
    uVar2 = uVar2 | uVar4;
  }
  FUN_ram_40395214(param_1,&uStack_44);
  FUN_ram_403952da(uStack_44);
  FUN_ram_403954de(*(undefined4 *)(gp + -0x6b8),uVar9);
  if ((*(uint *)(gp + -0x6c8) & 8) != 0) {
    uVar4 = uVar7 - iVar8;
    FUN_ram_40391306(uVar4,iVar10 - (uint)(uVar7 < uVar4));
  }
  iVar8 = FUN_ram_40391366(uVar2,uVar9,&uStack_44);
  FUN_ram_40394fd0(auStack_40);
  FUN_ram_4039164c(1,0);
  if (param_2 != 1) {
    if (iVar8 == 0) {
      *(undefined4 *)(gp + -0x6c0) = DAT_csreg_07e2;
    }
    FUN_ram_403913b4();
  }
  FUN_ram_40394766(uStack_3c,uStack_34);
  FUN_ram_4039114c();
  uVar3 = 0;
  if (iVar8 != 0) {
    uVar3 = 0x103;
  }
  return uVar3;
}

