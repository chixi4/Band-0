
uint * FUN_ram_4039a252(uint *param_1,uint *param_2,uint param_3)

{
  char cVar1;
  uint *puVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  
  puVar2 = param_1;
  puVar4 = param_1;
  puVar3 = param_2;
  if (param_3 < 4) goto LAB_ram_4039a2a0;
  do {
    param_2 = puVar3;
    puVar4 = puVar2;
    uVar5 = *param_2;
    if ((uVar5 + 0xfefefeff & ~uVar5 & 0x80808080) != 0) goto LAB_ram_4039a2a0;
    param_3 = param_3 - 4;
    *puVar4 = uVar5;
    puVar2 = puVar4 + 1;
    puVar3 = param_2 + 1;
  } while (3 < param_3);
  param_2 = (uint *)((int)param_2 + 5);
  puVar4 = (uint *)((int)puVar4 + 5);
  while( true ) {
    if (param_3 == 0) {
      return param_1;
    }
    cVar1 = *(char *)((int)param_2 + -1);
    param_3 = param_3 - 1;
    *(char *)((int)puVar4 + -1) = cVar1;
    if (cVar1 == '\0') break;
LAB_ram_4039a2a0:
    param_2 = (uint *)((int)param_2 + 1);
    puVar4 = (uint *)((int)puVar4 + 1);
  }
  if (param_3 == 0) {
    return param_1;
  }
  (*(code *)&SUB_ram_40010488)(puVar4,0);
  return param_1;
}

