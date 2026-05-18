
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_42041ada(undefined2 *param_1,undefined4 param_2,undefined1 *param_3,undefined1 *param_4)

{
  undefined2 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  uVar1 = *param_1;
  iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x388))(uVar1);
  if ((*(ushort *)(iVar3 + 0x5c) & 0x100) != 0) {
    uVar2 = param_1[1];
    *(undefined2 *)(iVar3 + 0x204) = param_1[2];
    *(byte *)(iVar3 + 0x200) = *(byte *)(iVar3 + 0x200) | 2;
    *(undefined2 *)(iVar3 + 0x202) = uVar2;
    *param_3 = (char)uVar1;
    param_3[1] = (char)((ushort)uVar1 >> 8);
    *param_4 = 2;
    return 0;
  }
  uVar4 = FUN_ram_420419ca(param_1,param_2,param_3,param_4);
  return uVar4;
}

