
void FUN_ram_4039c54e(uint *param_1,uint *param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = *param_2;
  uVar4 = (uVar3 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar3;
  while ((uVar4 | 0x7f7f7f7f) == 0xffffffff) {
    param_2 = param_2 + 1;
    *param_1 = uVar3;
    uVar3 = *param_2;
    param_1 = param_1 + 1;
    uVar4 = (uVar3 & 0x7f7f7f7f) + 0x7f7f7f7f | uVar3;
  }
  uVar3 = *param_2;
  cVar1 = *(char *)((int)param_2 + 1);
  cVar2 = *(char *)((int)param_2 + 2);
  *(char *)param_1 = (char)uVar3;
  if ((((char)uVar3 != '\0') && (*(char *)((int)param_1 + 1) = cVar1, cVar1 != '\0')) &&
     (*(char *)((int)param_1 + 2) = cVar2, cVar2 != '\0')) {
    *(char *)((int)param_1 + 3) = '\0';
  }
  return;
}

