
int FUN_ram_4209d066(undefined4 *param_1,int param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (undefined4 *)*param_1;
  if (param_2 != 0) {
    for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)*puVar1) {
      if (puVar1[0x1e] == param_2) {
        iVar2 = FUN_ram_4209cebe(param_1,puVar1 + 5,puVar1[0x15],0,0,0,param_3,param_1[2] + 0x224,
                                 param_2,puVar1[0x18]);
        if (iVar2 != 0) {
          uVar3 = puVar1[0x16];
          *(undefined4 *)(iVar2 + 0x5c) = puVar1[0x17];
          *(undefined4 *)(iVar2 + 0x58) = uVar3;
          *(undefined4 *)(iVar2 + 0x7c) = 1;
          return iVar2;
        }
        return 0;
      }
    }
  }
  return 0;
}

