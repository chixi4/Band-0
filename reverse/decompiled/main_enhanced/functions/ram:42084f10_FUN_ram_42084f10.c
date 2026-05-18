
undefined4 FUN_ram_42084f10(undefined1 *param_1)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar2 = FUN_ram_4208387a();
  if (iVar2 == 0) {
    uVar3 = 0x3001;
  }
  else if (DAT_ram_3fcc41a9 < 2) {
    uVar3 = 0x3002;
  }
  else {
    uVar3 = 0x102;
    if (param_1 != (undefined1 *)0x0) {
      uVar1 = (*(code *)&SUB_ram_40012238)(0x102);
      *param_1 = uVar1;
      uVar3 = 0;
    }
  }
  return uVar3;
}

