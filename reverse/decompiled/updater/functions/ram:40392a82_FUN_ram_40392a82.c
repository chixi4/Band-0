
void FUN_ram_40392a82(int param_1)

{
  int iVar1;
  code *pcVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  int iVar8;
  int iStack_38;
  int aiStack_34 [2];
  
  iVar3 = *(int *)(param_1 + 0x9c);
  iStack_38 = 0;
  iVar1 = FUN_ram_40398980(param_1 + 0x20);
  if (iVar1 == 0) {
    FUN_ram_4039898a(param_1 + 0x20,0x4000);
  }
  iVar1 = FUN_ram_40391d8c(*(undefined4 *)(iVar3 + 0x4c));
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x98) * 4;
    if (*(char *)(param_1 + 0xa4) == '\0') {
      FUN_ram_403925b2(param_1);
      iVar1 = *(int *)(iVar1 + param_1 + 4);
      if ((*(uint *)(iVar1 + 0x2c) & 0x100) != 0) goto LAB_ram_40392b26;
      iVar3 = param_1 + 0x58;
    }
    else {
      thunk_FUN_ram_40390608(*(undefined4 *)(param_1 + 0x90));
      FUN_ram_40394d60();
      *(uint *)(param_1 + 0x6c) = *(int *)(param_1 + 0x6c) + (uint)*(ushort *)(param_1 + 0x94);
      *(uint *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + (uint)*(ushort *)(param_1 + 0x96);
      FUN_ram_40394d8e();
      pcVar2 = *(code **)(*(int *)(*(int *)(param_1 + 0x98) * 4 + param_1 + 4) + 0x38);
      if (pcVar2 != (code *)0x0) {
        (*pcVar2)(*(undefined4 *)(param_1 + 0x8c));
      }
      iVar1 = *(int *)(iVar1 + param_1 + 4);
      *(undefined4 *)(param_1 + 0x98) = 6;
      if ((*(uint *)(iVar1 + 0x2c) & 0x100) != 0) goto LAB_ram_40392b26;
      iVar3 = param_1 + 0x84;
    }
    FUN_ram_403956d8(*(undefined4 *)(iVar1 + 8),iVar3,&iStack_38,0);
  }
LAB_ram_40392b26:
  iVar1 = 0;
  uVar6 = *(undefined4 *)(*(int *)(param_1 + 0x9c) + 0x4c);
  do {
    aiStack_34[0] = FUN_ram_40391d88(uVar6);
    if (((aiStack_34[0] == 0) && (iVar3 = FUN_ram_40391ec6(uVar6,aiStack_34), iVar3 != 0)) ||
       (iVar3 = FUN_ram_40391ee4(aiStack_34[0]), iVar3 == 0)) {
      puVar4 = (undefined4 *)0x0;
      if (iVar1 != 0) goto LAB_ram_40392bd2;
LAB_ram_40392b76:
      iVar1 = 0;
    }
    else {
      iVar1 = FUN_ram_40391c52(aiStack_34[0]);
      puVar4 = *(undefined4 **)(iVar1 * 4 + param_1 + 4);
      iVar1 = param_1 + 0x84;
      if (*(char *)(param_1 + 0xa4) == '\0') {
        iVar1 = param_1 + 0x58;
      }
      iVar1 = FUN_ram_40395a4c(puVar4[1],iVar1,&iStack_38);
      if (iVar1 == 0) {
        FUN_ram_40391e6c(aiStack_34[0]);
        goto LAB_ram_40392b76;
      }
LAB_ram_40392bd2:
      if (*(char *)(param_1 + 0xa4) == '\0') {
        FUN_ram_40392986(puVar4,param_1 + 0x58);
      }
      else {
        *(undefined4 *)(puVar4[0x1d] + 0x98) = *puVar4;
        FUN_ram_403925f2(puVar4,0);
        FUN_ram_40398b7e(puVar4[0x1d] + 0x20,*(undefined4 *)(*(int *)(param_1 + 0x8c) + 0x30));
        iVar3 = puVar4[0x1d];
        iVar8 = *(int *)(param_1 + 0x88);
        iVar7 = *(int *)(param_1 + 0x84);
        puVar5 = *(undefined4 **)(iVar3 + 0xa0);
        FUN_ram_40398a22(iVar3 + 0x20,0x4000);
        if (iVar8 != 0) {
          FUN_ram_40393862(puVar5[1]);
          FUN_ram_4039890e(*(undefined4 *)(iVar3 + 0x20));
          FUN_ram_403938aa(puVar5[1],iVar8);
        }
        if (iVar7 != 0) {
          FUN_ram_40393862(*puVar5);
          FUN_ram_40398938(*(undefined4 *)(iVar3 + 0x20));
          FUN_ram_403938aa(*puVar5,iVar7);
        }
        if ((code *)puVar4[0xd] != (code *)0x0) {
          (*(code *)puVar4[0xd])(*(undefined4 *)(param_1 + 0x8c));
        }
        FUN_ram_4039895e(puVar4[0x1d] + 0x20);
      }
    }
    iVar3 = FUN_ram_40391db0(uVar6,iVar1 != 0,&iStack_38);
    if (iVar3 != 0) {
      if (iStack_38 != 0) {
        FUN_ram_40394dba();
      }
      return;
    }
  } while( true );
}

