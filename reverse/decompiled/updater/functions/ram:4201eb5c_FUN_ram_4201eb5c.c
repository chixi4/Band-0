
int FUN_ram_4201eb5c(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iStack_44;
  undefined4 uStack_40;
  int iStack_3c;
  undefined4 auStack_38 [4];
  undefined1 uStack_28;
  
  iVar1 = FUN_ram_420209b0(param_1 + 0x10,*(undefined4 *)(param_1 + 8),param_2,param_3);
  if (iVar1 == 0) {
    FUN_ram_4201e96e(param_1 + 0x38);
    for (puVar3 = (undefined4 *)(param_1 + 0x44); (undefined4 *)(param_1 + 100) != puVar3;
        puVar3 = puVar3 + 1) {
      *puVar3 = 0;
    }
    for (iVar1 = *(int *)(param_1 + 0x10); iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      iStack_44 = 0;
      while (iVar2 = FUN_ram_42020034(iVar1,0,1,0,&iStack_44,&uStack_40,0xff), iVar2 == 0) {
        puVar3 = (undefined4 *)thunk_FUN_ram_4039047a(0x1c);
        if (puVar3 == (undefined4 *)0x0) goto LAB_ram_4201ebdc;
        *puVar3 = 0;
        puVar3[1] = 0;
        FUN_ram_4039a252(puVar3 + 2,auStack_38,0x10);
        *(undefined1 *)((int)puVar3 + 0x17) = 0;
        if (uStack_40._1_1_ != '\x01') {
LAB_ram_4201ec3e:
          thunk_FUN_ram_40390608(puVar3);
          return -1;
        }
        *(undefined1 *)(puVar3 + 6) = uStack_28;
        iVar2 = FUN_ram_4201e9fa((undefined4 *)(param_1 + 0x44),uStack_28,1);
        if (iVar2 != 0) goto LAB_ram_4201ec3e;
        FUN_ram_4201ea2a(param_1 + 0x38,puVar3);
        iStack_44 = iStack_44 + ((uint)uStack_40 >> 0x10 & 0xff);
      }
    }
    *(uint *)(param_1 + 0x44) = *(uint *)(param_1 + 0x44) | 1;
    iStack_3c = 0;
    *(uint *)(param_1 + 0x60) = *(uint *)(param_1 + 0x60) | 0x80000000;
    uStack_40 = (int *)0x0;
    auStack_38[0] = 0;
    iVar1 = FUN_ram_4201db78(param_1,&uStack_40);
    if (iVar1 == 0) {
      FUN_ram_4201dc30(param_1,&uStack_40);
      piVar5 = uStack_40;
      FUN_ram_4201dde4(param_1,&uStack_40);
      while (piVar5 != (int *)0x0) {
        piVar4 = (int *)piVar5[1];
        iVar1 = *piVar5;
        piVar6 = piVar4;
        if (iVar1 != 0) {
          *(int **)(iVar1 + 4) = piVar4;
          piVar6 = piVar5;
        }
        if (piVar4 != (int *)0x0) {
          *piVar4 = iVar1;
          iVar1 = iStack_3c;
        }
        iStack_3c = iVar1;
        thunk_FUN_ram_40390608(piVar5);
        piVar5 = piVar6;
      }
      *(undefined4 *)(param_1 + 100) = 1;
      iVar1 = 0;
    }
    else {
LAB_ram_4201ebdc:
      *(undefined4 *)(param_1 + 100) = 0;
      iVar1 = 0x101;
    }
  }
  else {
    *(undefined4 *)(param_1 + 100) = 0;
  }
  return iVar1;
}

