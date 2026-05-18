
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint * FUN_ram_420114a0(uint param_1,uint param_2)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  
  puVar2 = (uint *)FUN_ram_420113f0();
  if ((puVar2 == (uint *)0x0) &&
     (puVar2 = (uint *)FUN_ram_40390448(0x10,0x804), puVar2 != (uint *)0x0)) {
    (*(code *)&SUB_ram_40010488)(puVar2,0,0x10);
    *puVar2 = *puVar2 & 0xffc0ffff | (param_1 & 0x1f) << 0x11 | (param_2 & 1) << 0x10;
    puVar1 = _DAT_ram_3fcb65a8;
    puVar5 = (uint *)0x0;
    while (((puVar4 = puVar1, puVar4 != (uint *)0x0 &&
            (uVar3 = *puVar4, (uVar3 >> 0x10 & 1) <= (param_2 & 1))) &&
           (((int)((*puVar2 ^ uVar3) << 0xf) < 0 || ((uVar3 >> 0x11 & 0x1f) < (param_1 & 0x1f))))))
    {
      puVar5 = puVar4;
      puVar1 = (uint *)puVar4[3];
    }
    if ((_DAT_ram_3fcb65a8 == (uint *)0x0) || (puVar5 == (uint *)0x0)) {
      puVar2[3] = (uint)puVar4;
      _DAT_ram_3fcb65a8 = puVar2;
    }
    else {
      puVar5[3] = (uint)puVar2;
      puVar2[3] = (uint)puVar4;
    }
  }
  return puVar2;
}

