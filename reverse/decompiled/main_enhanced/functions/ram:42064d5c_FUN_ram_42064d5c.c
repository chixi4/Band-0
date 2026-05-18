
/* WARNING: Type propagation algorithm not settling */

void FUN_ram_42064d5c(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int aiStack_7c [3];
  undefined4 uStack_70;
  int iStack_6c;
  int iStack_68;
  int aiStack_64 [3];
  int *piStack_58;
  int iStack_54;
  uint auStack_50 [4];
  int iStack_40;
  code *pcStack_3c;
  undefined4 uStack_38;
  
  *(undefined4 *)(param_1 + 0x70) = 1;
  piVar1 = aiStack_64 + 1;
  do {
    while( true ) {
      do {
        while( true ) {
          do {
            while( true ) {
              aiStack_64[2] = 0;
              aiStack_64[1] = 0;
              if (((*(char *)(param_1 + 0x24) != '\0') ||
                  (iVar3 = FUN_ram_42065ac2(param_1), iVar3 != 0)) &&
                 (uVar4 = *(uint *)(param_1 + 0x60), uVar4 < 0x40)) {
                piVar1[(int)uVar4 >> 5] = 1 << (uVar4 & 0x1f) | piVar1[(int)uVar4 >> 5];
              }
              uVar4 = *(uint *)(param_1 + 100);
              if (uVar4 < 0x40) {
                piVar1[(int)uVar4 >> 5] = 1 << (uVar4 & 0x1f) | piVar1[(int)uVar4 >> 5];
              }
              FUN_ram_42065b92(param_1,piVar1,aiStack_7c);
              iVar3 = *(int *)(param_1 + 0x60);
              if (*(int *)(param_1 + 0x60) < aiStack_7c[0]) {
                iVar3 = aiStack_7c[0];
              }
              iVar2 = *(int *)(param_1 + 100);
              if (*(int *)(param_1 + 100) < iVar3) {
                iVar2 = iVar3;
              }
              aiStack_7c[0] = iVar3;
              iVar3 = FUN_ram_4201432c(iVar2 + 1,piVar1,0,0,0);
              if (-1 < iVar3) break;
              FUN_ram_42065bde(param_1);
            }
            uVar4 = *(uint *)(param_1 + 100);
            if ((uVar4 < 0x40) && ((1 << (uVar4 & 0x1f) & piVar1[(int)uVar4 >> 5]) != 0)) {
              iVar3 = FUN_ram_42051410(uVar4,&iStack_40,0xc,0);
              if (iVar3 == 0xc) {
                if (iStack_40 == 0) {
                  *(undefined4 *)(param_1 + 0x70) = 2;
                }
                else if ((iStack_40 == 1) && (pcStack_3c != (code *)0x0)) {
                  (*pcStack_3c)(uStack_38);
                }
              }
              if (*(int *)(param_1 + 0x70) == 2) {
                FUN_ram_420b1020(*(undefined4 *)(param_1 + 0x68));
                thunk_FUN_ram_420b1020(*(undefined4 *)(param_1 + 100));
                FUN_ram_42065f62(param_1);
                FUN_ram_420b1020(*(undefined4 *)(param_1 + 0x60));
                *(undefined4 *)(param_1 + 0x70) = 3;
                FUN_ram_403989ea();
                FUN_ram_420b5c28();
                return;
              }
            }
            piStack_58 = piVar1;
            iStack_54 = param_1;
            FUN_ram_42065a2a(param_1,0x42054cdc,&piStack_58);
            uVar4 = *(uint *)(param_1 + 0x60);
          } while ((0x3f < uVar4) || ((1 << (uVar4 & 0x1f) & piVar1[(int)uVar4 >> 5]) == 0));
          if ((*(char *)(param_1 + 0x24) == '\0') || (iVar3 = FUN_ram_42065ac2(param_1), iVar3 != 0)
             ) break;
          FUN_ram_42065f10(param_1);
        }
        aiStack_7c[1] = 0x10;
        aiStack_7c[2] = FUN_ram_42050f0e(uVar4,&iStack_40,aiStack_7c + 1);
      } while (aiStack_7c[2] < 0);
      auStack_50[0] = (uint)*(ushort *)(param_1 + 0x26);
      auStack_50[1] = 0;
      auStack_50[2] = 0;
      iVar3 = FUN_ram_42051b14(aiStack_7c[2],0xfff,0x1006,auStack_50,0x10);
      if (-1 < iVar3) break;
LAB_ram_42064fa2:
      FUN_ram_420b1020(aiStack_7c[2]);
    }
    auStack_50[0] = (uint)*(ushort *)(param_1 + 0x28);
    auStack_50[1] = 0;
    auStack_50[2] = 0;
    iVar3 = FUN_ram_42051b14(aiStack_7c[2],0xfff,0x1005,auStack_50,0x10);
    if (iVar3 < 0) goto LAB_ram_42064fa2;
    if (*(char *)(param_1 + 0x44) != '\0') {
      uStack_70 = 1;
      iStack_6c = *(int *)(param_1 + 0x48);
      if (iStack_6c == 0) {
        iStack_6c = 5;
      }
      iStack_68 = *(int *)(param_1 + 0x4c);
      if (iStack_68 == 0) {
        iStack_68 = 5;
      }
      aiStack_64[0] = *(int *)(param_1 + 0x50);
      if (aiStack_64[0] == 0) {
        aiStack_64[0] = 3;
      }
      iVar3 = FUN_ram_42051b14(aiStack_7c[2],0xfff,8,&uStack_70,4);
      if ((((iVar3 < 0) || (iVar3 = FUN_ram_42051b14(aiStack_7c[2],6,3,&iStack_6c,4), iVar3 < 0)) ||
          (iVar3 = FUN_ram_42051b14(aiStack_7c[2],6,4,&iStack_68), iVar3 < 0)) ||
         (iVar3 = FUN_ram_42051b14(aiStack_7c[2],6,5,aiStack_64,4), iVar3 < 0))
      goto LAB_ram_42064fa2;
    }
    iVar3 = FUN_ram_42065da8(param_1,aiStack_7c[2]);
    if (iVar3 != 0) goto LAB_ram_42064fa2;
    FUN_ram_42064d46(2,aiStack_7c + 2,4);
  } while( true );
}

