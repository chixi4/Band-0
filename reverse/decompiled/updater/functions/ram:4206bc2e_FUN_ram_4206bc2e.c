
undefined4
FUN_ram_4206bc2e(undefined4 param_1,undefined4 param_2,ushort param_3,int param_4,undefined4 param_5
                ,uint *param_6)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  uint uVar5;
  int *piVar6;
  char *pcVar7;
  uint *puVar8;
  int iVar9;
  undefined4 uStack_64;
  int iStack_60;
  undefined4 uStack_5c;
  uint auStack_58 [2];
  undefined1 auStack_50 [16];
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  undefined4 uStack_34;
  
  iVar9 = 0;
  if (param_4 != 0) {
    iVar9 = *(int *)(param_4 + 0x54);
  }
  (*(code *)&SUB_ram_40010488)(&iStack_40,0,0x20);
  if (iVar9 == 1) {
    iStack_3c = 2;
  }
  iStack_38 = 1;
  iVar9 = (*(code *)&SUB_ram_40010534)(param_1,param_2);
  if (iVar9 == 0) {
    uVar2 = 0x101;
LAB_ram_4206bca6:
    puVar4 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    FUN_ram_4206c2a6(param_5,1,*puVar4);
    return uVar2;
  }
  iVar3 = FUN_ram_4207333c(iVar9,0,&iStack_40,auStack_58);
  uVar1 = auStack_58[0];
  if ((iVar3 != 0) || (auStack_58[0] == 0)) {
    thunk_FUN_ram_40390608(iVar9);
    uVar2 = 0x8001;
    goto LAB_ram_4206bca6;
  }
  thunk_FUN_ram_40390608(iVar9);
  uVar5 = FUN_ram_4204fdce(*(undefined4 *)(uVar1 + 4),*(undefined4 *)(uVar1 + 8),
                           *(undefined4 *)(uVar1 + 0xc));
  uVar1 = auStack_58[0];
  if ((int)uVar5 < 0) {
    FUN_ram_4207331c(auStack_58[0]);
    uVar2 = 0x8002;
    goto LAB_ram_4206bca6;
  }
  if (*(int *)(auStack_58[0] + 4) != 2) {
    FUN_ram_42077b34();
    uVar2 = 0x8003;
    FUN_ram_4207331c(auStack_58[0]);
    goto LAB_ram_4206bca6;
  }
  iVar9 = *(int *)(auStack_58[0] + 0x14);
  *(ushort *)(iVar9 + 2) = param_3 << 8 | param_3 >> 8;
  FUN_ram_40399daa(auStack_50,iVar9,0x10);
  FUN_ram_4207331c(uVar1);
  if (param_4 == 0) {
LAB_ram_4206bd2e:
    iVar9 = FUN_ram_4206bbd2(uVar5,1);
    if (iVar9 == 0) {
      iVar9 = FUN_ram_4204fa58(uVar5,auStack_50,0x10);
      if (iVar9 < 0) {
        piVar6 = (int *)(*(code *)&SUB_ram_40010670)();
        if (*piVar6 == 0x77) {
          iStack_40 = 10;
          iStack_3c = 0;
          iStack_38 = 0;
          if (param_4 != 0) {
            if (*(char *)(param_4 + 0x2c) != '\0') goto LAB_ram_4206bd72;
            iVar9 = *(int *)(param_4 + 0x30);
            if (0 < iVar9) {
              iStack_40 = iVar9 / 1000;
              iStack_3c = iStack_40 >> 0x1f;
              iStack_38 = (iVar9 % 1000) * 1000;
            }
          }
          auStack_58[1] = 0;
          auStack_58[0] = 0;
          if (uVar5 < 0x40) {
            puVar8 = auStack_58 + ((int)uVar5 >> 5);
            *puVar8 = 1 << (uVar5 & 0x1f) | *puVar8;
          }
          iVar9 = FUN_ram_42015744(uVar5 + 1,0,auStack_58,0,&iStack_40);
          if (iVar9 < 0) {
            piVar6 = (int *)(*(code *)&SUB_ram_40010670)();
            iVar9 = *piVar6;
          }
          else {
            if (iVar9 == 0) {
              uVar2 = 0x8006;
              goto LAB_ram_4206bf16;
            }
            uStack_5c = 4;
            iVar9 = FUN_ram_42050212(uVar5,0xfff,0x1007,&iStack_60,&uStack_5c);
            if (iVar9 < 0) goto LAB_ram_4206be5e;
            iVar9 = iStack_60;
            if (iStack_60 == 0) goto LAB_ram_4206bef8;
          }
          FUN_ram_4206c2a6(param_5,1,iVar9);
        }
        uVar2 = 0x8004;
        goto LAB_ram_4206bf16;
      }
LAB_ram_4206bef8:
      if (((param_4 == 0) || (*(char *)(param_4 + 0x2c) != '\0')) ||
         (iVar9 = FUN_ram_4206bbd2(uVar5,0), iVar9 == 0)) {
LAB_ram_4206bd72:
        *param_6 = uVar5;
        return 0;
      }
    }
  }
  else {
    iVar9 = *(int *)(param_4 + 0x30);
    iStack_38 = 0;
    uStack_34 = 0;
    if (iVar9 < 1) {
      iStack_40 = 10;
      iStack_3c = 0;
    }
    else {
      iStack_40 = iVar9 / 1000;
      iStack_3c = iStack_40 >> 0x1f;
      iStack_38 = (iVar9 % 1000) * 1000;
    }
    iVar9 = FUN_ram_420502d4(uVar5,0xfff,0x1006,&iStack_40,0x10);
    if ((iVar9 == 0) && (iVar9 = FUN_ram_420502d4(uVar5,0xfff,0x1005,&iStack_40,0x10), iVar9 == 0))
    {
      pcVar7 = *(char **)(param_4 + 0x40);
      if ((pcVar7 != (char *)0x0) && (*pcVar7 != '\0')) {
        uStack_64 = 1;
        iStack_60 = *(int *)(pcVar7 + 4);
        uStack_5c = *(undefined4 *)(pcVar7 + 8);
        auStack_58[0] = *(uint *)(pcVar7 + 0xc);
        iVar9 = FUN_ram_420502d4(uVar5,0xfff,8,&uStack_64,4);
        if ((((iVar9 != 0) || (iVar9 = FUN_ram_420502d4(uVar5,6,3,&iStack_60,4), iVar9 != 0)) ||
            (iVar9 = FUN_ram_420502d4(uVar5,6,4,&uStack_5c), iVar9 != 0)) ||
           (iVar9 = FUN_ram_420502d4(uVar5,6,5,auStack_58,4), iVar9 != 0)) goto LAB_ram_4206be5e;
      }
      pcVar7 = *(char **)(param_4 + 0x50);
      if (((pcVar7 == (char *)0x0) || (*pcVar7 == '\0')) ||
         (iVar9 = FUN_ram_420502d4(uVar5,0xfff,0x100b,pcVar7,6), iVar9 == 0)) goto LAB_ram_4206bd2e;
    }
  }
LAB_ram_4206be5e:
  uVar2 = 0x8005;
LAB_ram_4206bf16:
  FUN_ram_42077b34(uVar5);
  return uVar2;
}

