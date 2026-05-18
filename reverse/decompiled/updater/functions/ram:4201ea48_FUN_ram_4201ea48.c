
int FUN_ram_4201ea48(int param_1,undefined4 param_2,int param_3,undefined1 *param_4)

{
  undefined1 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  undefined1 auStack_21 [5];
  
  if (*(int *)(param_1 + 100) == 1) {
    for (iVar8 = *(int *)(param_1 + 0x38); iVar8 != 0; iVar8 = *(int *)(iVar8 + 4)) {
      iVar4 = FUN_ram_4039a1de(param_2,iVar8 + 8,0xf);
      if (iVar4 == 0) {
        *param_4 = *(undefined1 *)(iVar8 + 0x18);
        goto LAB_ram_4201eb42;
      }
    }
    iVar8 = 0x1102;
    if (param_3 != 0) {
      auStack_21[0] = 1;
      uVar2 = 1;
      uVar7 = 0;
      do {
        uVar6 = uVar7;
        uVar3 = uVar2;
        if (uVar3 == 0xff) {
          return 0x1105;
        }
        uVar7 = *(uint *)((uVar3 >> 5) * 4 + param_1 + 0x44) >> (uVar3 & 0x1f) & 1;
        uVar2 = uVar3 + 1;
      } while (uVar7 != 0);
      if (uVar6 != 0) {
        auStack_21[0] = (undefined1)uVar3;
      }
      iVar8 = FUN_ram_4201e558(param_1,0,1,param_2,auStack_21);
      uVar1 = auStack_21[0];
      if (iVar8 == 0) {
        iVar4 = FUN_ram_4201e9fa(param_1 + 0x44,auStack_21[0],1);
        iVar8 = -1;
        if (iVar4 == 0) {
          *param_4 = uVar1;
          puVar5 = (undefined4 *)thunk_FUN_ram_4039047a(0x1c);
          iVar8 = 0x101;
          if (puVar5 != (undefined4 *)0x0) {
            *puVar5 = 0;
            puVar5[1] = 0;
            *(undefined1 *)(puVar5 + 6) = uVar1;
            FUN_ram_4039a252(puVar5 + 2,param_2,0xf);
            *(undefined1 *)((int)puVar5 + 0x17) = 0;
            FUN_ram_4201ea2a(param_1 + 0x38,puVar5);
LAB_ram_4201eb42:
            iVar8 = 0;
          }
        }
      }
    }
  }
  else {
    iVar8 = 0x1101;
  }
  return iVar8;
}

