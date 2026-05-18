
undefined4 FUN_ram_4205ce92(int param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  
  if (param_3 == 0) {
    uVar1 = FUN_ram_4205ce30();
    return uVar1;
  }
  iVar2 = FUN_ram_4205cdfa();
  if (iVar2 == 0) {
    puVar3 = (undefined4 *)FUN_ram_40399d1a(1,0xc);
    if (puVar3 != (undefined4 *)0x0) {
      iVar2 = FUN_ram_4205d0e2(puVar3,param_2,0xffffffff);
      if (iVar2 != 0) {
        FUN_ram_4205d1f4(puVar3);
        iVar2 = FUN_ram_4205d0e2(puVar3 + 1,param_3,0xffffffff);
        if (iVar2 != 0) {
          FUN_ram_4205d1f4(puVar3 + 1);
          piVar4 = *(int **)(param_1 + 4);
          puVar3[2] = 0;
          *piVar4 = (int)puVar3;
          *(undefined4 **)(param_1 + 4) = puVar3 + 2;
          goto LAB_ram_4205cece;
        }
      }
      thunk_FUN_ram_40390608(*puVar3);
      thunk_FUN_ram_40390608(puVar3[1]);
      thunk_FUN_ram_40390608(puVar3);
    }
    uVar1 = 0x101;
  }
  else {
    thunk_FUN_ram_40390608(*(undefined4 *)(iVar2 + 4));
    uVar1 = (*(code *)&SUB_ram_40010510)(param_3);
    *(undefined4 *)(iVar2 + 4) = uVar1;
    FUN_ram_4205d1f4(iVar2 + 4);
LAB_ram_4205cece:
    uVar1 = 0;
  }
  return uVar1;
}

