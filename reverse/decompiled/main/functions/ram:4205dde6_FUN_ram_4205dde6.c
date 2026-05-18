
uint * FUN_ram_4205dde6(uint param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  undefined4 uVar3;
  
  puVar1 = (uint *)FUN_ram_420531dc(6);
  if (puVar1 == (uint *)0x0) {
    return (uint *)0x0;
  }
  *(undefined1 *)(puVar1 + 3) = 0;
  *puVar1 = param_1;
  puVar1[2] = 0;
  puVar1[6] = 0;
  param_1 = param_1 & 0xf0;
  if (param_1 != 0x20) {
    uVar3 = 6;
    if ((param_1 == 0x40) || (uVar3 = 10, param_1 == 0x10)) goto LAB_ram_4205de34;
    FUN_ram_4039bf1e(param_1,10);
  }
  uVar3 = 0x18;
LAB_ram_4205de34:
  iVar2 = FUN_ram_4205c786(puVar1 + 4,uVar3);
  if (iVar2 != 0) {
    FUN_ram_420531f8(6,puVar1);
    return (uint *)0x0;
  }
  puVar1[5] = 0;
  puVar1[1] = 0;
  puVar1[7] = 0xffffffff;
  puVar1[0xc] = param_2;
  puVar1[0xb] = 0;
  puVar1[8] = 0;
  puVar1[9] = 0;
  *(undefined1 *)(puVar1 + 10) = 0;
  return puVar1;
}

