
undefined4 FUN_ram_4201d42e(undefined4 *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  FUN_ram_4201cc96(9,0,0);
  if (param_1 == (undefined4 *)0x0) {
    return 0x102;
  }
  uVar2 = param_1[10];
  if (uVar2 == 0) {
    return 0xffffffff;
  }
  if (uVar2 < 4) {
    if (uVar2 == 1) goto LAB_ram_4201d45c;
    uVar1 = FUN_ram_42018e62(*param_1);
  }
  else {
    uVar1 = 0x103;
    if (uVar2 != 4) goto LAB_ram_4201d46a;
LAB_ram_4201d45c:
    uVar1 = 0;
  }
  if (param_1[5] != 0) {
    thunk_FUN_ram_40390608();
  }
  iVar3 = param_1[4];
  if (iVar3 != 0) {
    FUN_ram_4205bd42(iVar3);
    FUN_ram_4205be46(iVar3);
  }
LAB_ram_4201d46a:
  thunk_FUN_ram_40390608(param_1);
  return uVar1;
}

