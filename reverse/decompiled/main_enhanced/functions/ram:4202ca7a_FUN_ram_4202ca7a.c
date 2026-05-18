
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202ca7a(undefined4 param_1,undefined4 param_2,int param_3)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  if ((_DAT_ram_3fcb6b98 == 0) ||
     (puVar1 = (undefined4 *)(*(code *)&SUB_ram_40011a44)(_DAT_ram_3fcb6b98 + 0xc),
     puVar1 == (undefined4 *)0x0)) {
    puVar1 = (undefined4 *)0x0;
    iVar4 = 6;
    goto LAB_ram_4202ca9e;
  }
  (*(code *)&SUB_ram_40010488)(puVar1,0,0x3c);
  *(undefined1 *)(puVar1 + 3) = 0xf;
  *(short *)(puVar1 + 2) = (short)param_1;
  *(undefined2 *)((int)puVar1 + 10) = 4;
  *(short *)(puVar1 + 4) = (short)param_2;
  if (param_3 == 0) {
    param_3 = FUN_ram_4202d4f2();
    iVar4 = 6;
    if (param_3 == 0) goto LAB_ram_4202ca9e;
    iVar2 = FUN_ram_42029a16(0xffff,param_2,0,param_3,0);
    iVar4 = 9;
    if (iVar2 != 0) goto LAB_ram_4202ca9e;
  }
  iVar4 = FUN_ram_4202d41c(param_1,*(undefined2 *)((int)puVar1 + 10),param_2,param_3);
  param_3 = 0;
  if (iVar4 == 0) {
    thunk_FUN_ram_4202b7dc();
    iVar2 = FUN_ram_420365de(param_1);
    if (iVar2 != 0) {
      *(short *)(iVar2 + 100) = (short)param_2;
    }
    thunk_FUN_ram_4202b7f6();
    param_3 = 0;
  }
LAB_ram_4202ca9e:
  FUN_ram_4202fa3e(iVar4,param_1,param_2,1);
  if (iVar4 == 0) {
    if ((*(byte *)((int)puVar1 + 0xd) & 1) == 0) {
      iVar2 = (**(code **)(_DAT_ram_3fcb6a44 + 0x84))();
      iVar3 = (**(code **)(_DAT_ram_3fcb6a44 + 0x90))(30000);
      puVar1[1] = iVar3 + iVar2;
    }
    thunk_FUN_ram_4202b7dc();
    iVar2 = _DAT_ram_3fcb6b98;
    *puVar1 = 0;
    **(undefined4 **)(iVar2 + 4) = puVar1;
    *(undefined4 **)(iVar2 + 4) = puVar1;
    thunk_FUN_ram_4202b7f6();
    FUN_ram_4202bac4();
  }
  else {
    FUN_ram_4202c84e(puVar1);
  }
  (*(code *)&SUB_ram_40011a08)(param_3);
  return iVar4;
}

