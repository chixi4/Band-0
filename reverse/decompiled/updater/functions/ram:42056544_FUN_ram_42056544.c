
uint FUN_ram_42056544(uint param_1,int param_2,undefined1 *param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  
  if ((param_3 != (undefined1 *)0x0) && (uVar1 = (*(code *)&SUB_ram_400104a8)(param_3), uVar1 != 0))
  {
    uVar4 = 0x42 - param_1;
    if (uVar1 < 0x42 - param_1) {
      uVar4 = uVar1;
    }
    *(undefined1 *)(param_2 + param_1) = 0xc;
    uVar3 = param_1 + 2 & 0xffff;
    *(char *)((param_1 + 1 & 0xffff) + param_2) = (char)uVar4;
    puVar2 = param_3 + uVar4;
    uVar1 = uVar3;
    for (; param_3 != puVar2; param_3 = param_3 + 1) {
      *(undefined1 *)(uVar1 + param_2) = *param_3;
      uVar1 = uVar1 + 1 & 0xffff;
    }
    param_1 = uVar3 + uVar4 & 0xffff;
  }
  return param_1;
}

