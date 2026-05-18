
undefined4 FUN_ram_420998ec(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined1 uStack_48;
  undefined1 uStack_47;
  undefined2 uStack_46;
  undefined2 uStack_44;
  undefined2 uStack_42;
  undefined1 auStack_40 [44];
  
  iVar3 = param_1[1];
  iVar1 = FUN_ram_4209c726(*(undefined4 *)(*param_1 + 0x58));
  if ((*(ushort *)(param_1 + 0x6d) & 0x10) != 0) {
    iVar2 = *(int *)(iVar3 + 0xf4);
    uStack_48 = (undefined1)iVar2;
    uStack_47 = 0;
    uStack_46 = 0;
    uStack_44 = 0;
    uStack_42 = 0;
    FUN_ram_4039c11e(auStack_40,iVar3 + iVar2 * 0x10 + 0x94,iVar1);
    if ((*(int *)(*param_1 + 0x5c) == 0) || (iVar3 = FUN_ram_42060348(auStack_40,iVar1), -1 < iVar3)
       ) {
      param_2 = FUN_ram_4209b7ec(param_2,0xfac09,&uStack_48,iVar1 + 8,0,0);
    }
  }
  return param_2;
}

