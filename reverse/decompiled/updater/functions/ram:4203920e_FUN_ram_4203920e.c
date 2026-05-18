
undefined1 FUN_ram_4203920e(undefined4 param_1,undefined4 param_2)

{
  undefined1 uVar1;
  int iVar2;
  
  iVar2 = (*(code *)&SUB_ram_40011f9c)(param_2);
  if (iVar2 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(iVar2 + 0x2f5);
  }
  return uVar1;
}

